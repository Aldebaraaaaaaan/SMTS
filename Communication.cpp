
#include "Communication.h"
/* Constructor
*/
Communication::Communication(int _nComm) { //_nComm : code of way of communication (specified in config file)
	switch(_nComm) {
		case 0: {
			un = new Lora();
			deux = new SMS();
			trois = new TCP();
			}
		case 1: {
			un = new SMS();
			deux = new Lora();
			trois = new TCP();
			}
		case 2: {
			un = new TCP();
			deux = new Lora();
			trois = new SMS();
			}
		}

	//chkGSM = false;
	//chkLora = false;
	//chkTCP = false;
	}
/* Destructor
*/
Communication::~Communication() {
	delete un;
	delete deux;
	delete trois;
	}
/* Receive data a put into a char*
*/
char *Communication::receiveData() { 
	try { return un.receiveData(); }
	catch { try { return deux.receiveData(); }
		catch { try { return trois.receiveData(); }
			catch { return NULL; }
			}
		}
	}
/* Send data into a way of communication specified
   ._-=\ddd!§! IS FUCKING POLYMORPHISM !§!bbb/=-_.
*/
void Communication::sendData(char *_data) {
	try { un.sendData(_data); }
	catch { try { deux.sendData(_data); }
		catch { try { trois.sendData(_data); }
			catch { /* 3 ways of comm have fail */ }
			}
		}
	}

