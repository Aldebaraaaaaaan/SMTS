
#include "info.h"

// les deux booleens determine si on veut ou non la température et le cardio
Info::Info(bool _cardio, bool _temp) {
	gps = new Gps();
	bat = new Bat();
	if(_cardio == true) cardio = new Cardio();
	else cardio = NULL;
	if(_temp == true) temp = new Temp();
	else temp = NULL;
	}

Info::~Info() {
	delete gps; delete bat; delete cardio; delete temp;
	}

// récupère toutes les données dans les classes associées
void Info::recupInfo() {
	gps.recupInfo();
	bat.recupInfo();
	if(cardio != NULL) cardio.recupInfo();
	if(temp != NULL) temp.recupInfo();
	}

Gps *Info::getGPS() {
	return gps;
	}

Bat *Info::getBat() {
	return bat;
	}

Cardio *Info::getCardio() {
	return cardio;
	}

Temp *Info::getTemp() {
	return temp;
	}

