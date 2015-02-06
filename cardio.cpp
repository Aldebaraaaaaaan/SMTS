
#include "cardio.h"

Cardio::Cardio() {
	val = 0;
	pin = A1; // A1
	}

Cardio::~Cardio() {
	
	}

void Cardio::recupInfo() {
	// récupération de l'info
	}

float Cardio::getVal() {
	return val;
	}

