
#include "gps.h"
#include "bat.h"
#include "cardio.h"
#include "temp.h"

class Info {
	private:
		Gps *gps;
		Bat *bat;
		Cardio *cardio;
		Temp *temp;
	public:
		Info(bool _cardio, bool _temp);
		~Info();
		void recupInfo();
		Gps *getGPS();
		Bat *getBat();
		Cardio *getCardio();
		Temp *getTemp();
	}

