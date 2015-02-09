#ifndef DEF_SMS
#define DEF_SMS

#include <GSM.h>

class SMS {
	public:
		SMS();
		~SMS();
		void sendSMS(string _message);
		char *receiveSMS();
		char *dernierSMS();
	}

#endif
