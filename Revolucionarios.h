// Revolucionarios.h
#ifndef REVOLUCIONARIOS_H
#define REVOLUCIONARIOS_H

#include "Ser.h"

class Revolucionarios : public Ser {	
	public:
		Revolucionarios();
		// nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey
		Revolucionarios(string, int, int, FrutaDiablo*, bool ,bool, bool);
		// nombre, edad, rasa, h_Observacion, h_Armadura, h_Rey
		Revolucionarios(string, int, int, bool ,bool, bool);

		~Revolucionarios();

		virtual void escribir(ofstream&);		
		string getFecha();
};
#endif
