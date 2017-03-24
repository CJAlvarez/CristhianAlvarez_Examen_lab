// Ser.h
#ifndef SER_H
#define SER_H

#include "FrutaDiablo.h"

#include <exception>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <typeinfo>
#include <sstream>
#include <ctime>

using namespace std;

class Ser {
	protected:
		string nombre;
		int edad;
		int rasa;
		string s_rasa [6] = {"gyojin", "kyojin", "ningyo", "humano", "mink", "skypieans"};
		FrutaDiablo* fruta;
		bool tieneFruta;
		bool h_Observacion;
		bool h_Armadura;
		bool h_Rey;

	public:
		Ser();
		// nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey
		Ser(string, int, int, FrutaDiablo*, bool ,bool, bool);
		// nombre, edad, rasa, h_Observacion, h_Armadura, h_Rey
		Ser(string, int, int, bool ,bool, bool);

		~Ser();

		virtual void escribir(ofstream&);
};
#endif