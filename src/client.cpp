/*
 * How to compile?
 *
 * g++ -g -o client client.cpp -std=c++0x -pthread
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <errno.h>      /* for errno and EINTR */
#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <ev.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include <mutex>
#include <ctime>
#include <time.h>



#define TIMEOUT_SECS 3
#define MAX_RESEND 10
#define NUM_THREADS 2
#define DATA 1
#define ACK 2



using namespace std;

/* Global variables */

int tries = 0;
int windowSize = 7;
const int fixed_windowSize=7;
int sendflag = 1;
int nPackets = 0;   //Number of packets to be send
int chunkSize = 20; // Chunk size in bytes
int packet_received = -1;	/* highest ack received */
int packet_sent = 0;		/* highest packet sent */
struct Packet* send_list[fixed_windowSize];
bool ACK_list[fixed_windowSize] = { false };
struct tm* timeout_list[fixed_windowSize] = {0};


mutex mtx_send_list, mtx_ACK_arr;


void error (const char *errorMessage);	/* Error handling function */
void CatchAlarm (int ignored);	/* Handler for SIGALRM */


void CatchAlarm (int ignored)	/* Handler for SIGALRM */
{
  tries += 1;
  sendflag = 1;
}

void error(const char *errorMessage)
{
    perror(errorMessage);
    exit(1);
}

struct Packet
{
 int type;
 /*
  * 1: Data Packet
  * 2: ACK Packet
  *
  *
  */
 int sequence;
 /*
  * FOR ACK PACKET : sequence indicates next expected packet.
  *
  *
  * */
 int length;
 int more;
 char data[20]; // 10 just for demo.
};

struct Con
{
    int sock;
    unsigned int length;
    struct sockaddr_in server;
    struct hostent *hp;
    
};

struct thread_data{
   std::vector<char>  data;
   struct Con con;
};

Con OpenSock(int argc, char *argv[]){
    //printf("%u\n", argv);
    //printf("%s\n", argv[0]);
    //printf("%s\n", argv[1]);
    //printf("%s\n", argv[2]);
    //printf("%d\n", argc);
    
    //int sock;
    unsigned int length;
    struct sockaddr_in server;
    struct hostent *hp;
    struct Con newCon;
    
    if (argc != 3)
    {
        printf("Usage: server port\n");
        exit(1);
    }
    
    /* For best-effort datagram socket using UDP */
    newCon.sock= socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    
    //newCon->sock = sock;
    //printf("%d\n", newCon->sock);
    if (newCon.sock < 0) error("socket");

    newCon.server.sin_family = AF_INET;
    newCon.hp = gethostbyname(argv[1]);
    
    if (newCon.hp==0) error("Unknown host\n");
    
    bcopy((char *)newCon.hp->h_addr, (char *)&newCon.server.sin_addr, newCon.hp->h_length);
    
    newCon.server.sin_port = htons(atoi(argv[2]));
    newCon.length=sizeof(struct sockaddr_in);
    return(newCon);
    
    }


void SendPacket ( struct Packet packet,int length, struct Con newCon )
{
    int n=sendto(newCon.sock,&packet.data,
            length,0,(const struct sockaddr *)&newCon.server,newCon.length);
    if (n < 0) error("Error in : Sendto in SendPacket.\n");

}

void *SendMessage (void * t_data )
{


	struct thread_data* th_data = (struct thread_data *) t_data;
	std:: vector<char> message = th_data->data;
	struct Con newCon = th_data->con;

	for(int i=0;i<message.size();i++)
		cout<<message[i];
	cout<< endl;

    int length = sizeof(char) * message.size();   //Message size in bytes
    
    nPackets = length / chunkSize;
    if(length % chunkSize)
        nPackets++;

    while(1)
    {
        
		while ((packet_received < nPackets-1) && (tries < MAX_RESEND))
		{
			if (sendflag > 0)
			{
				sendflag = 0;

				while((packet_sent) < windowSize)
				{
					//packet_sent = min(max(base+ctr, packet_sent), nPackets -1);

					struct Packet *cur_packet = new struct Packet;
					if(packet_sent < nPackets)
					{
						memset(cur_packet,0,sizeof(struct Packet));
						//cout << "0";
						printf ("sending packet: %d , packet_sent: %d , packet_received: %d\n",
						  packet_sent, packet_sent, packet_received);
						//printf("%d\n",cur_packet->type);
						cur_packet->type = 1;
						cout<< "type: " << cur_packet->type <<endl;
						cur_packet->sequence = packet_sent;
						cout<< "Sequence: " << cur_packet->sequence << endl;

						/* Only last packet can be of smaller chunk size*/
						int cur_length;

						if ((length - (packet_sent * chunkSize)) >= chunkSize)
						{
							cur_length = chunkSize;
							cur_packet->more = 1;
						}
						else
						{
							cur_length = length % chunkSize;
							cur_packet->more = 0;
						}

						//cout << cur_length << " hi \n";
						//cout << cur_packet->more << " hi1\n";


						cur_packet->length = cur_length;
						string str;

						for(int i=packet_sent * chunkSize,j=0;i< packet_sent * chunkSize + cur_length;i++,j++)
							cur_packet->data[j]=message[i];


						for(int j=0;j<20;j++)
							cout << cur_packet->data[j];
						printf("\n");
						//cout << cur_packet->data.length() << "\n";
						//SendPacket(cur_packet, cur_length, newCon);
						mtx_send_list.lock();
						send_list[(packet_sent) % fixed_windowSize] = cur_packet;
						mtx_send_list.unlock();

						mtx_ACK_arr.lock();
						ACK_list[(packet_sent) % fixed_windowSize] = false;
						mtx_ACK_arr.unlock();

						int n=sendto(newCon.sock,cur_packet,
								sizeof(struct Packet),0,(const struct sockaddr *)&newCon.server,newCon.length);
						//printf("%d \n", cur_packet->data.length());
						printf("%d \n",n);
						for(int i=0;i< 20;i++)
							cout<< cur_packet->data[i];

						cout  << "\n";
						if (n < 0) error("Error in : Sendto in SendPacket.\n");
						//free(cur_packet);
						time_t t = time(0);   // get time now
						struct tm * now = localtime( & t );
						now->tm_sec =  now->tm_sec + 5;
						timeout_list[(packet_sent) % fixed_windowSize] = now;

						/*cout << (now->tm_year + 1900) << '-'
							 << (now->tm_mon) << '-'
							 <<  now->tm_mday << '-'
							 << now->tm_hour << '-'
							 << (now->tm_min +5) << '-'
							 << (now->tm_sec + 5)
						     << endl;*/
						packet_sent++;
					}

				}


			}



		}
    }

    /*for(int ctr=0;ctr<10;ctr++)
    {
        Packet retrans;



    }*/

}




void *RcvAck (void * t_data)
{
	cout << "inside RCVACK" << "\n";

	thread_data * th_data = (thread_data *) t_data;
	//std:: vector<char> message = th_data->data;
	struct Con newCon = th_data->con;

	struct Packet* cur_ACK;

	int chunkSize = 20; // Chunk size in bytes
	unsigned int fromSize;	/* In-out of address size for recvfrom() */
	struct sockaddr_in fromAddr;	/* Source address of echo */
	int respLen;			/* Size of received datagram */


	// Response Part
	while(1)
	{
		fromSize = sizeof(fromAddr);
		//alarm(TIMEOUT_SECS); /* Set the timeout */
		cur_ACK = new struct Packet;

			/*while (respLen = (recvfrom(newCon.sock, cur_ACK, sizeof(struct Packet), 0,
					(struct sockaddr *) &fromAddr, &newCon.length)) < 0)
				if (errno == EINTR) //Alarm went off
				{
					if (tries < MAX_RESEND) // incremented by signal handler
					{
						printf("Timed out, Remaining tries: %d\n",
								MAX_RESEND - tries);
						break;
						// Have to implement timeout
					} else
						error("No Response");
				} else
					error("recvfrom() failed");*/
			//cout << "Before RCV function \n";

			time_t now;
			time(&now);
			long seconds=0;
			if(timeout_list[packet_received+1]!=0)
				seconds = difftime(mktime(timeout_list[packet_received+1]),now);

			if(timeout_list[packet_received+1]!=0 &&  seconds<0)
				packet_sent = packet_received + 1;

			int n = recvfrom(newCon.sock, cur_ACK, sizeof(struct Packet), 0,
					(struct sockaddr *) &fromAddr, &newCon.length);
			//printf("RECVFROM n= %d\n",n);
			if (n > 0){

				int acktype = cur_ACK->type; /* convert to host byte order */
				cout << "Received packet type: " << acktype << "\n";
				int ackno = cur_ACK->sequence;
				cout << "Received packet sequence: " << ackno << "\n";
				if (ackno > packet_received && acktype == 2) {
					printf("received ack of %d \n", ackno); /* received ack */
					mtx_ACK_arr.lock();
					for(int i=(packet_received+1); i<= ackno;i++)
						ACK_list[i % fixed_windowSize] = true;
					mtx_ACK_arr.unlock();


					mtx_send_list.lock();
					for(int i=(packet_received+1); i<= ackno;i++)
						send_list[i] = NULL;
					mtx_send_list.unlock();
					windowSize = windowSize + (ackno - packet_received);
					packet_received = ackno;


					sendflag = 1;

					//windowSize = windowSize + (ackno - packet_received - 1);
					//packet_received = ackno - 1;
					printf("windowSize: %d \n", windowSize);

					//base = packet_received; /* handle new ack */
					cout << "packet RCVD : " << packet_received << "packet Sent: " << packet_sent << "\n";
					/*if (packet_received == packet_sent) // all sent packets acked
					{
						//alarm(0); // clear alarm
						tries = 0;
						sendflag = 1;
						printf("Hi\n");
					} else // not all sent packets acked
					{
						tries = 0; // reset retry counter
						sendflag = 0;
						printf("Hello\n");
						//alarm(TIMEOUT_SECS); // reset alarm
					}*/
				}
			}
			cout << "After RCV function \n";


	}

    
}

static std::vector<char> ReadAllBytes(char const* filename)
{
    ifstream ifs(filename, ios::binary|ios::ate);
    ifstream::pos_type pos = ifs.tellg();

    std::vector<char>  result(pos);

    ifs.seekg(0, ios::beg);
    ifs.read(&result[0], pos);
    for(int i=0;i<result.size();i++)
    	cout<<result[i];
    cout<<endl;
    cout << result.size() * sizeof(char);

    return result;
}


int main(int argc, char *argv[])
{
   
   struct Con newCon;
   char buffer[1024];
   pthread_t send_thread, rcv_thread;
   //printf("%u\n", argv);
   //windowSize = htons(atoi(argv[3]));
   newCon = OpenSock(argc, argv);
   
   //printf("%d\n", newCon.sock);
   //printf("%u\n", newCon.length);
   //printf("%d\n", &newCon.server.sin_port);
   //printf("%u\n", newCon.hp);
   std:: vector<char> vec_buffer = ReadAllBytes("file.txt");
   int a =(int) vec_buffer.size();

   //printf("Please enter the message: ");
   //bzero(buffer,buffer.size());
   //cin >> buffer;
   struct thread_data td[NUM_THREADS];
   td[0].data = vec_buffer;
   td[0].con = newCon;

   td[1].data =vec_buffer ;
   td[1].con = newCon;

   //SendMessage((void *)&td[0]);


   //sleep(10);
   if(  pthread_create(&rcv_thread, NULL,RcvAck, (void *)&td[1]) < 0)
    {
 	   perror("Unable to create RCVACK thread\n");
        return 1;
    }


   if( pthread_create(&send_thread, NULL,SendMessage, (void *)&td[0]) < 0)
   {
	   perror("Unable to create SENDMSG thread\n");
       return 1;
   }

   //RcvAck((void *)&td[1]);
   //SendMessage( vec_buffer, newCon );
   //RcvMessage(buffer, newCon);
   //if(send_thread < 0 || rcv_thread < 0)
	   //error("Unable create thread.");
   
   
   //close(newCon.sock);
   while(1);
   return 0;
}
