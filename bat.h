#ifndef BAT_H
#define BAT_H

/**
 * \file bat.h
 * \brief Récupération des niveaux de batterie
 * \author Florian Z
 * \version 0.0.1
 */

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

