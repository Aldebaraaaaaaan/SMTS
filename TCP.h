/* Classe de gestion des échanges 3G
   Class who manage 3G data exchange
*/
#ifndef DEF_TCP
#define DEF_TCP

#include <LGPRS.h>
#include <LGPRSClient.h>
#include "AbstractWayCom.h"

/*!
* \file TCP.h
* \brief Gestion des échanges de données par la 3G.
  Manage 3G data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
* \class TCP
* \brief Gestion des échanges de données via le réseau 3G.
  Manage 3G network data exchange.
*/

class TCP{
	public:
	/*! \brief Constructor
	*   Constructor of TCP's class
	*/
	TCP();
	/*! \brief Destructor
	*   Destructor of TCP's class
	*/
	virtual ~TCP();
	/*! \brief Send data using 3G network
	*   \param _data :  String Data to be sent 
	*/
	virtual void sendData(char *_data);
	/*! \brief Receive data using 3G network
	*   \return message into a char* 
	*/
	virtual char *receiveData();
	
}
#endif
