#include "sms.h"
#include <string>

Sms::Sms() {
	string _sendMessage = NULL;
	char _numTel[10];
	}

Sms::~Sms() {
	
	}

int Sms::sendSms(string _message) {
	int error = 0;
	while(!LSMS.ready()) {
		delay(1000);
		error++;
		if(error >= 10) return error;
		}

	LSMS.beginSms(_numtel);
	LSMS.print(_sendMessage);
	LSMS.endSms();

	return 0;
	}

char *Sms::receiveSms() { // retourne le premier Sms reçu
	char *_message = new char[50];	*(_message+0) = '\0'; // Message received
	int c;			// Chars of Sms
	int n=0;		// Increment
	char _buf[10];

	while(!LSMS.ready()) {
		delay(1000);
		}
	if(LSMS.available()){
		LSMS.remoteNumber(_buf,10);	// Number stored

		if(strcmp(_buf,_numTel) == 0) {	// Verify if the number is allowed for communicate with the device
			while(true) {
				c = LSMS.read(); // Message content (one byte at a time)
				if(c <= 0) break;	// End of message content
				else { *(_message + n) = (char)c; n++; }
				}	
			}
		return _message;
		}
	return NULL;
	}

char *Sms::dernierSms() { // retourne le Sms le plus récent
	char *buf;
	int t = 0, prect = 0, intervalle = 0, com = 0, cardio = 0, temp = 0;

	buf = receiveSms();
	sscanf(buf, "%d %d %d %d %d", &prect, &intervalle, &cardio, &temp, &com);
	
	while(buf != NULL) {
		buf = receiveSms();
		sscanf(buf, "%d", &t);

		if(t > prect) {
			sscanf(buf, "%d %d %d %d %d", &prect, &intervalle, &cardio, &temp, &com);
			}
		}

	return buf;
	}

