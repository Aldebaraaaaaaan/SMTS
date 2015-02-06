
#include "gps.h"

Gps::Gps() {
	lat = lon = 0;
	}

Gps::~Gps() {
	
	}

const char *Gps::nextToken(const char* src, char* buf) {
	int i = 0;
	while(src[i] != 0 && src[i] != ',')
		i++;

	if(buf) {
		strncpy(buf, src, i);
		buf[i] = 0;
		}

	if(src[i])
		i++;

	return src+i;
	}

void Gps::recupInfo() {
	LGPS.powerOn();
	delay(100);
	LGPS.getData(&info);
	delay(100);
	LGPS.powerOff();

	parsage((char *)info.GPRMC);
	}

void Gps::parsage(const char *trame) {
	// trame GPRMC
	// récuperer les bons champs
	char buf[20], tmp[2];
	const char *p = trame;

	p = nextToken(p, 0);
	p = nextToken(p, buf);
	
	tmp[0]=buf[0]; tmp[1]=buf[1];
	date.hour = atoi(tmp);
	tmp[0]=buf[2]; tmp[1]=buf[3];
	date.min = atoi(tmp);
	tmp[0]=buf[4]; tmp[1]=buf[5];
	date.sec = atoi(tmp);

	p = nextToken(p, 0);

	p = nextToken(p, buf);
	lat = atol(buf);

	p = nextToken(p, 0);

	p = nextToken(p, buf);
	lon = atol(buf);

	p = nextToken(p, 0);
	p = nextToken(p, 0);
	p = nextToken(p, 0);
	
	p = nextToken(p, buf);
	tmp[0]=buf[0]; tmp[1]=buf[1];
	date.day = atoi(tmp);
	tmp[0]=buf[2]; tmp[1]=buf[3];
	date.mon = atoi(tmp);
	tmp[0]=buf[4]; tmp[1]=buf[5];
	date.year = atoi(tmp) + 2000;
	}

float Gps::getLal() {
	return lal;
	}

float Gps::getLon() {
	return lon;
	}

datetimeInfo Gps::getDate() {
	return date;
	}

