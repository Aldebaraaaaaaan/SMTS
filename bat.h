#ifndef BAT_H
#define BAT_H

class Bat {
	private:
		float val; // de 0 à 90
		int pins[4];
	public:
		Bat();
		~Bat();
		void recupInfo();
		int getVal();
	}

#endif

