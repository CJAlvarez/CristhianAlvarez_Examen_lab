// Marina.cpp
#include "Marina.h"

Marina::Marina() : Ser() {
	rango = 0;
}

Marina::Marina(string nombre, int edad, int rasa, FrutaDiablo* fruta, bool h_Observacion, bool h_Armadura, bool h_Rey, int rango)
: Ser(nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey) {
	this -> rango = rango;
	// ESCRIBIR
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;	
	file.open(ruta);		
	escribir(file);		
	file.close();
}

Marina::Marina(string nombre, int edad, int rasa, bool h_Observacion, bool h_Armadura, bool h_Rey, int rango) 
 : Ser(nombre, edad, rasa, h_Observacion, h_Armadura, h_Rey) {
 	this -> rango = rango;
	// ESCRIBIR
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;	
	file.open(ruta);		
	escribir(file);		
	file.close();
}

Marina::~Marina() {
	if(tieneFruta)
	delete fruta;
}

void Marina::escribir(ofstream& file) {
	Ser::escribir(file);		
	file << "\nFECHA INGRESO: ";
	file << getFecha();
	file << "\nRANGO: ";
	file << s_rango[rango];
}

string Marina::getFecha() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_mday << '-' << (formato.tm_mon + 1) << '-' << (formato.tm_year + 1900);
	return ss.str();
}