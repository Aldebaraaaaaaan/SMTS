
int heureSend;
bool Bcard = false, Btemp = false;

Gps temp = new Gps();
Bat temp2 = new Bat();
temp.recupInfo();

heureSend = lectureheuresend(); // parse le fichier du dernier envoie
temp2.recupInfo(); 

if(temp2.getVal() >= 30) {
	Bcard = true;
	Btemp = true;
	}

else if(temp2.getVal() == 0) {
	// lancer alerte et minuterie flash
	}

plop.recupérationfileconf();

if((temp.getDate().hour - heureSend) >= plop.getInterval()) {
	delete temp; delete temp2;
	info = new Info(Bcard, Btemp);
	info.recupInfo();
	sendData();
	ecritureheuresend(info.getGPS().getDate().hour();	
	}

minuterieFlash();
