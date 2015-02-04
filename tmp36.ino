
#include <LFlash.h>
#include <LSD.h>
#include <LStorage.h>
#include <math.h>

int tempPin = 0; // Vout du TMP36 connecté sur A0

// TMP36 : alimenté de 2.7 à 5.5 V pour 0.05mA retourne une tension entre 0 et 2 V
// TMP36 : proportionelle à la température (-50 à 150 °C)

// si alim = 5V   : voltage = analogRead(pin) * (5000/1024) 
// comment passer de 0-1023 à 0-5000 (0V à 5V)

// si alim = 3.3V : voltage analogRead(pin) * (3300/1024) 
// comment passer de 0-1023 à 0-3300 (0V à 3.3V)

// conversion du voltage en température :
// temperatureCelsius = (voltage - 500) / 10
// 1500mV = 100°C

float getTemp(){
	// Lecture de la valeur sur l'entrée analogique
	int valeur = analogRead(tempPin);  

	// Convertion en voltage
	float voltage = valeur * (5000/1024);

	// Convertir le voltage en temperature
	float temperature = (voltage - 500) / 10;
 
	return temperature;
	}

void setup() {
	LFlash.begin();
	}

void loop() {
	//LFlash.remove("temperature.txt");
	LFile fichier = LFlash.open("temperature.txt", FILE_WRITE);
	delay(10);
	fichier.write("Température : ");
	fichier.write(getTemp());
	fichier.close();
	}

