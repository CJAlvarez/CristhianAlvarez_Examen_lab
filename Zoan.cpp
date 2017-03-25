// Zoan.cpp
#include "Zoan.h"

Zoan::Zoan() {
	nombre = "";
}

Zoan::Zoan(string nombre, int tipo, string animal) : FrutaDiablo(nombre) {
	this -> tipo = tipo;
	this -> animal = animal;
}
Zoan::~Zoan() {}

void Zoan::escribir(ofstream& file) {
	FrutaDiablo::escribir(file);
	file << "\nTIPO: ";
	file << s_tipo[tipo];
	file << "\nANIMAL: ";
	file << animal;
}
