/* Classe de gestion des échanges Lora
*  Class who manage LoRa data exchange
*/
#ifndef DEF_LORA
#define DEF_LORA

#include "AbstractWayCom.h"

/*!
* \file Lora.h
* \brief Gestion des échanges de données via le réseau LoRa.
		Manage LoRa data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
*/
#include <SX1272.h>

class Lora{
	private:
	
	public:
	Lora();	//Constructor
	virtual ~Lora(); //Destructor
	virtual void sendData(char *_message);	//Send data using LoRa network
	virtual char *receiveData(); //Return a LoRa message into a char*
}

#endif

