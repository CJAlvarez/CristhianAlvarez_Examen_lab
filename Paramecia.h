// Paramecia.h
#ifndef PARAMECIA_H
#define PARAMECIA_H

#include "FrutaDiablo.h"

class Paramecia : public FrutaDiablo {
protected:
	string descripcion;

public:
	Paramecia();
	// nombre, descricion
	Paramecia(string, string);
	~Paramecia();

	virtual void escribir(ofstream&);
};

#endif