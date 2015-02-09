#ifndef DEF_COMMUNICATION
#define DEF_COMMUNICATION
/*!
* \file Communication.h
* \brief Gestion des échanges de données.
		Manage differents way for data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
*/
#include "SMS.h"
#include "Lora.h"
#include "TCP.h"
/*! \class Communication
* \brief Classe de gestion des échanges de données
	Class who manage differents way for data exchange
*/
class Communication
{
	private:
	AbstractWayCom *un, *deux, *trois;
	bool chkSMS;
	bool chkLora;
	bool chkTCP;
	
	public:
	/*! \brief Constructor
	*
	*	Constructor of Communication's class
	*
	*/
	Communication(int _nComm);
	/*! \brief Destructor
	*
	*	Destructor of Communication's class
	*
	*/
	~Communication();
	/*! \brief Receive data into a way of communication choosen
	*   \param _nComm : Way of communication choosen 0 for SMS, 1 for Lora and 2 for 3G
	*	\return char*
	*
	*/
	char *receiveData();
	/*! \brief Send data into a way of communication specified 
	*	\param _nComm : Way of communication choosen 0 for SMS, 1 for Lora and 2 for 3G
	*	\param _data :  String Data to be sent 
	*/
	void sendData(char *_data);
}
#endif
