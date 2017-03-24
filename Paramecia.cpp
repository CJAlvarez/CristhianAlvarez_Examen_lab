// Paramecia.cpp
#include "Paramecia.h"

Paramecia::Paramecia() {
	nombre = "";
}

Paramecia::Paramecia(string nombre, string descripcion) : FrutaDiablo(nombre) {
	this -> descripcion = descripcion;
}
Paramecia::~Paramecia() {}

void Paramecia::escribir(ofstream& file) {
	static_cast<FrutaDiablo*>(this) -> escribir(file);
	file << "\nDESCRIPCION: ";
	file << descripcion;
}
