#ifndef CARDIO_H
#define CARDIO_H

class Cardio {
	private:
		float val;
		int pin;
	public:
		Cardio();
		~Cardio();
		void recupInfo();
		int getVal();
	}

#endif

