// Marina.h
#ifndef MARINA_H
#define MARINA_H

#include "Ser.h"

class Marina : public Ser {
	protected:
		int rango;
		string s_rango[5] = {"cadete", "teniente", "vice-almirante", "almirante", "almirante de flota"};

	public:
		Marina();
		// nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey, rango
		Marina(string, int, int, FrutaDiablo*, bool ,bool, bool, int);
		// nombre, edad, rasa, h_Observacion, h_Armadura, h_Rey, rango
		Marina(string, int, int, bool ,bool, bool, int);

		~Marina();

		void escribir(ofstream&);
		string getFecha();
};
#endif
