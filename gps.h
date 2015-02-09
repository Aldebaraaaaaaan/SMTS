#ifndef GPS_H
#define GPS_H

#include <LGPS.h>
#include <LDateTime.h>

class Gps {
	private:
		gpsSentenceInfoStruct info;
		float lat, lon;
		datetimeInfo date;
	public:
		Gps();
		~Gps();
		void recupInfo();
		const char *nextToken(const char *src, char *buf)
		void parsage(const char *trame);
		float getLat();
		float getLon();
		datetimeInfo getDate();
	}

#endif

