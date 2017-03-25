// Ser.cpp
#include "Ser.h"

Ser::Ser() {
	edad = rasa = 0;
	tieneFruta = h_Observacion =  h_Armadura =  h_Rey = false;	
}

Ser::Ser(string nombre, int edad, int rasa, FrutaDiablo* fruta, bool h_Observacion, bool h_Armadura, bool h_Rey) {
	this -> nombre = nombre;
	this -> edad = edad;
	this -> rasa = rasa;
	this -> fruta = fruta;
	tieneFruta = true;
	this -> h_Observacion = h_Observacion;
	this -> h_Armadura = h_Armadura;
	this -> h_Rey = h_Rey;	
}

Ser::Ser(string nombre, int edad, int rasa, bool h_Observacion, bool h_Armadura, bool h_Rey) {
	this -> nombre = nombre;
	this -> edad = edad;
	this -> rasa = rasa;	
	tieneFruta = false;
	this -> h_Observacion = h_Observacion;
	this -> h_Armadura = h_Armadura;
	this -> h_Rey = h_Rey;
}

Ser::~Ser() {}

void Ser::escribir(ofstream& file) {
	file << "NOMBRE: ";
	file << nombre;
	file << "\nEDAD: ";
	file << edad;
	file << "\nRASA: ";
	file << s_rasa[rasa];
	file << "\nTIENE FRUTA:";	
	file << tieneFruta;	
	cout << tieneFruta << endl;
	if(tieneFruta == true) {		
		file << "\n";
		fruta -> escribir(file);
	}	
	file << "\nHAKI OBSERVACION: ";
	file << h_Observacion;
	file << "\nHAKI ARMADURA: ";
	file << h_Armadura;
	file << "\nHAKI REY: ";
	file << h_Rey;	
}