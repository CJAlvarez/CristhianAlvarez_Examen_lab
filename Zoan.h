// Zoan.h
#ifndef ZOAN_H
#define ZOAN_H

#include "FrutaDiablo.h"

class Zoan : public FrutaDiablo {
protected:
	int tipo;
	string s_tipo[3] = {"normal", "prehistorica", "legendaria"};
	string animal;

public:
	Zoan();
	// nombre, tipo, animal
	Zoan(string, int, string);
	~Zoan();

	virtual void escribir(ofstream&);
};
#endif