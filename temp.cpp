
#include "temp.h"

Temp::Temp() {
	val = 0;
	pin = A0; // A0
	}

Temp::~Temp() {
	
	}

void Temp::recupInfo() {
	int valeur = analogRead(pin);  
	// Convertion en voltage
	float voltage = valeur * (5000/1024);
	// Convertir le voltage en temperature
	val = (voltage - 500) / 10;
	}

float Temp::getVal() {
	return val;
	}

