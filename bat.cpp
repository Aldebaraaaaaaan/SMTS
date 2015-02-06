
#include "bat.h"

Bat::Bat() {
	val = 0;
	pins[0] = 4; // LED MAX
	pins[1] = 5;
	pins[2] = 6;
	pins[3] = 7; // LED MIN

	for(int i=0; i<4; i++) {pinMode(pins[i], INPUT);}
	}

Bat::~Bat() {
	
	}

void Bat::recupInfo() {
	// récupération de l'info

	if(digitalRead(pins[0]) == HIGH) {
		// 90 à 100
		val = 90;
		}
	else if(digitalRead(pins[1]) == HIGH) {
		// 60 à 90
		val = 60;
		}
	else if(digitalRead(pins[2]) == HIGH) {
		// 30 à 60
		val = 30;
		}
	else if(digitalRead(pins[1]) == HIGH) {
		// 10 à 30
		val = 10;
		}
	else {
		// 0 à 10
		val = 0;
		}
	}

float Bat::getVal() {
	return val;
	}

