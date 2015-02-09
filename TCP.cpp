#include "TCP.h"
#include <string>

using namespace std;
/* Constructor
*/
TCP::TCP(){ 
	string _URL-Serv = NULL;
}
/* Destructor
*/
TCP::~TCP(){
	
}
/* Send data using 3G network
*/
void TCP::sendData(char *_data){
	while(!LGPRS.attachGPRS()){						//Waiting for GPRS initialization
		delay(1000);
	}
	LGPRSClient client;								//Create the connection to the server
	client.connect(URL_SERV,80);					//Begin
	client.println("POST BLABLABLA");
	client.println("Host:" URL_SERV ":80");
	client.println();								//End
}
/* Receive data into 3G way and put in a char*
*/
char *TCP::receiveData(){
	while(!LGPRS.attachGPRS()){						//Waiting for GPRS initialization
		delay(1000);
	}
	LGPRSClient client;								//Create the connection to the server
	client.connect(URL_SERV,80);					//Begin
	client.println("GET BLABLABLA");
	client.println("Host:" URL_SERV ":80");
	client.println();								//End
	
	int v;											//Chars of content
	int n; 											//Increment
	while(client.available()){
		v = client.read();							//Return one byte at a time
		if(v < 0)
			break;									//No more data
	}
	return NULL;
}
/* A voir
*/
int TCP::errorTCP(){
	return 0;
}
