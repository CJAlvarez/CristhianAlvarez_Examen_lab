// Revolucionarios.cpp
#include "Revolucionarios.h"

Revolucionarios::Revolucionarios() : Ser() {
}

Revolucionarios::Revolucionarios(string nombre, int edad, int rasa, FrutaDiablo* fruta, bool h_Observacion, bool h_Armadura, bool h_Rey)
: Ser(nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey) {	
	// ESCRIBIR
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;
	file.open(ruta);
	escribir(file);
	file.close();
}

Revolucionarios::Revolucionarios(string nombre, int edad, int rasa, bool h_Observacion, bool h_Armadura, bool h_Rey) 
 : Ser(nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey) { 	
	// ESCRIBIR
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;
	file.open(ruta);
	escribir(file);
	file.close();
}

Revolucionarios::~Revolucionarios() {
	if(tieneFruta)
	delete fruta;
}

void Revolucionarios::escribir(ofstream& file) {
	static_cast<Ser*>(this) -> escribir(file);
	file << "\nFECHA INGRESO: ";
	file << getFecha();
}

string Revolucionarios::getFecha() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_mday << '-' << (formato.tm_mon + 1) << '-' << (formato.tm_year + 1900);
	return ss.str();
}