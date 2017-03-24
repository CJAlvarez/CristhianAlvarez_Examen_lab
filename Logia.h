// Logia.h
#ifndef LOGIA_H
#define LOGIA_H

#include "FrutaDiablo.h"

class Logia : public FrutaDiablo {
protected:
	string elemento;

public:
	Logia();
	// nombre, elemento
	Logia(string, string);
	~Logia();

	virtual void escribir(ofstream&);
};

#endif