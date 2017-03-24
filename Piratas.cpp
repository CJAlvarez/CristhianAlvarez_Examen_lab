// Piratas.cpp
#include "Piratas.h"

Piratas::Piratas() : Ser() {
	oceano = 0;
	tripulacion = funcion = "";
}

Piratas::Piratas(string nombre, int edad, int rasa, FrutaDiablo* fruta, bool h_Observacion, bool h_Armadura, bool h_Rey, int oceano, string tripulacion, string funcion)
: Ser(nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey) {
	this -> oceano = oceano;
	this -> tripulacion = tripulacion;
	this -> funcion = funcion;

	// ESCRIBIR
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;
	file.open(ruta);
	escribir(file);
	file.close();
}

Piratas::Piratas(string nombre, int edad, int rasa, bool h_Observacion, bool h_Armadura, bool h_Rey, int oceano, string tripulacion, string funcion) 
: Ser(nombre, edad, rasa, fruta, h_Observacion, h_Armadura, h_Rey) {
 	this -> oceano = oceano;
	this -> tripulacion = tripulacion;
	this -> funcion = funcion;
	
	// ESCRIBIR
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;
	file.open(ruta);
	escribir(file);
	file.close();
}

Piratas::~Piratas() {
	if(tieneFruta)
	delete fruta;
}

void Piratas::escribir(ofstream& file) {
	static_cast<Ser*>(this) -> escribir(file);
	file << "\nOCEANO: ";
	file << s_oceano[oceano];
	file << "\nTRIPULACION: ";
	file << tripulacion;
	file << "\nFUNCION: ";
	file << funcion;
}