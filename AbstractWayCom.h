#ifndef DEF_WAY
#define DEF_WAY

/*!
* \file AbstractWayCom.h
* \brief Classe mère des objets de communication
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
*/

class AbstractWayCom {
	public:
		AbstractWayCom();
		virtual ~AbstractWayCom();
		virtual void sendData(char *_message);
		virtual char *receiveData();
		//virtual char *lastData();
	}

#endif

