#ifndef DEF_SMS
#define DEF_SMS

#include <LGSM.h>
#include "AbstractWayCom.h"

/*!
* \file SMS.h
* \brief Gestion des échanges de données par SMS.
*  Manage SMS data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
* 
* \class SMS
* \brief Gestion des échanges de données par SMS.
*  Manage SMS data exchange.
*/

class SMS : public AbstractWayCom {
	public:
	/*! \brief Constructor
	*   Constructor of SMS's class
	*/
		SMS();
	/*! \brief Destructor
	*   Destructor of SMS's class
	*/
		virtual ~SMS();
	/*! \brief Send SMS 
	*   \param _data :  String Data to be sent 
	*   \return 0 if the SMS is sent otherwise return 10 when failed
	*/
		virtual void sendData(char *_data); 
	/*! \brief Receive one SMS 
	*   \return message into a char*
	*/
		virtual char *receiveData();
	/*! \brief Give the last SMS received  
	*   \return message into a char*
	*/
		char *lastData();
	}

#endif

