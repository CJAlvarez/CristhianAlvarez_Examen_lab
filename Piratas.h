// Piratas.h
#ifndef PIRATAS_H
#define PIRATAS_H

#include "Ser.h"

class Piratas : public Ser {
	protected:
		int oceano;
		string s_oceano[6] = {"east", "west", "south", "north blue", "grand line", "new world"};
		string tripulacion;
		string funcion;

	public:
		Piratas();
		// nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey, oceano, tripulacion, fucion
		Piratas(string, int, int, FrutaDiablo*, bool ,bool, bool, int, string, string);
		// nombre, edad, rasa, h_Observacion, h_Armadura, h_Rey, oceano, tripulacion,, fucion
		Piratas(string, int, int, bool ,bool, bool, int, string, string);

		~Piratas();

		virtual void escribir(ofstream&);		
};
#endif
