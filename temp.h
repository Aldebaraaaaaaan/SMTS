#ifndef TEMP_H
#define TEMP_H

class Temp {
	private:
		float val;
		int pin;
	public:
		Temp();
		~Temp();
		void recupInfo();
		int getVal();
	}

#endif

