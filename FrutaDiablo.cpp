// FrutaDiablo.cpp
#include "FrutaDiablo.h"

FrutaDiablo::FrutaDiablo() {
	nombre = "";
}
// nombre
FrutaDiablo::FrutaDiablo(string nombre) {
	this -> nombre = nombre;
}
FrutaDiablo::~FrutaDiablo() {}

void FrutaDiablo::escribir(ofstream& file) {
	file << "NOMBRE FRUTA: ";
	file << nombre;
}

string FrutaDiablo::getNombre() {
	return nombre;
}