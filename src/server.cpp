/* Creates a datagram server.  The port 
   number is passed as an argument.  This
   server runs forever */
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



#define TIMEOUT_SECS 3
#define MAX_RESEND 10
#define NUM_THREADS 2


using namespace std;

/* Global variables */

int tries = 0;
int base = 0;
int windowSize = 7;
int sendflag = 1;
int nPackets = 0;   //Number of packets to be send



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
 char data[20]; // 20 just for demo.
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


struct Con OpenSock(int argc, char *argv[]){
    //printf("%u\n", argv);
    //printf("%s\n", argv[0]);
    //printf("%s\n", argv[1]);
    //printf("%s\n", argv[2]);
    //printf("%d\n", argc);

    //int sock;
    unsigned int length;
    struct sockaddr_in server;
    struct hostent *hp;
    int sock, n;
    //socklen_t fromlen;
    unsigned int fromlen;
    struct sockaddr_in from;
    char buf[1024];
    struct Con newCon;


    if (argc < 2) {
          fprintf(stderr, "ERROR, no port provided\n");
          exit(0);
       }

    newCon.sock=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (newCon.sock < 0) error("Error in : Opening socket");
    newCon.length = sizeof(server);
    bzero(&server,length);
    newCon.server.sin_family=AF_INET;
    newCon.server.sin_addr.s_addr=INADDR_ANY;
    newCon.server.sin_port=htons(atoi(argv[1]));
    if (bind(newCon.sock,(struct sockaddr *)&newCon.server,newCon.length)<0)
        error("Error in : binding");
    newCon.length = sizeof(struct sockaddr_in);


    return(newCon);

    }





void *RcvMessage(struct Con newCon)
{


	struct Packet *rcvd_packet, *ack_packet;
	int ack = 0;
	struct sockaddr_in from;	/* Source address of echo */


	while(1)
	{
		//printf("1\n");
		rcvd_packet = new struct Packet;
		//rcvd_packet->data="Hi";
		cout << rcvd_packet->data<< "\n";
		//memset(rcvd_packet,0,sizeof(Packet));
		//rcvd_packet = (Packet *)malloc(sizeof(Packet));
		int n = recvfrom(newCon.sock,rcvd_packet,sizeof(struct Packet),0,(struct sockaddr *)&from,&newCon.length);

		printf("%d \n",n);
		//printf("2\n");
		if (n < 0) error("Error in : recvfrom");
		//write(1,"Received a datagram: ",21);
		//write(1,buf,n);

		cout << "Packet Type: "<< rcvd_packet->type <<endl;
		cout << "Packet length: "<< rcvd_packet->length <<endl;
		cout << "Packet more: "<< rcvd_packet->more <<endl;
		cout << "Packet Sequence: "<< rcvd_packet->sequence <<endl;
		//printf("%d \n",rcvd_packet->data.length());
		cout << "data: "<< endl;

		for(int i=0;i< 20;i++)
			cout << rcvd_packet->data[i];
		cout << "\n";

		//printf("3\n");
		if(rcvd_packet->type == 1 && ack == rcvd_packet->sequence)
		{
			ack_packet = new Packet;
			ack_packet->type = 2;
			ack_packet->sequence = ack++;

			n = sendto(newCon.sock,ack_packet,sizeof(struct Packet), 0,(struct sockaddr *)&from,newCon.length);
			if (n  < 0)
					error("sendto");
			else
				cout << "ACK for Packet Sequence: " << rcvd_packet->sequence << " sent." << endl;
		}
	}

}





int main(int argc, char *argv[])
{
   int sock, length, n;
   socklen_t fromlen;
   struct sockaddr_in server;
   struct sockaddr_in from;
   char buf[1024];
   struct Con newCon;

   newCon = OpenSock(argc, argv);

   RcvMessage(newCon);

   
   /*while (1) {
       n = recvfrom(sock,buf,1024,0,(struct sockaddr *)&from,&fromlen);
       if (n < 0) error("Error in : recvfrom");
       write(1,"Received a datagram: ",21);
       write(1,buf,n);
       n = sendto(sock,"Got your message\n",17,
                  0,(struct sockaddr *)&from,fromlen);
       if (n  < 0) error("sendto");
   }*/
   return 0;
 }
