// Logia.cpp
#include "Logia.h"

Logia::Logia() {
	nombre = "";
}

Logia::Logia(string nombre, string elemento) : FrutaDiablo(nombre) {
	this -> elemento = elemento;
}
Logia::~Logia() {}

void Logia::escribir(ofstream& file) {
	static_cast<FrutaDiablo*>(this) -> escribir(file);
	file << "\nELEMENTO: ";
	file << elemento;
}
