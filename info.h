
#include "Gps.h"
#include "Bat.h"
#include "Cardio.h"
#include "Temp.h"

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

