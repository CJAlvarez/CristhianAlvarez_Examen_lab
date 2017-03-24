// FrutaDiablo.h
#ifndef FRUTADIABLO_H
#define FRUTADIABLO_H

#define TRUE true
#define FALSE false

#include <exception>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <typeinfo>
#include <sstream>
#include <ctime>

using namespace std;

class FrutaDiablo {
protected:
	string nombre;
public:
	FrutaDiablo();
	// nombre
	FrutaDiablo(string);
	~FrutaDiablo();

	virtual void escribir(ofstream&);
	
};
#endif