// main.cpp
#include "Ser.h"
#include "Marina.h"
#include "Piratas.h"
#include "Revolucionarios.h"
#include "FrutaDiablo.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector <Ser*>* seres = new vector<Ser*>();
	vector <FrutaDiablo*>* frutas = new vector<FrutaDiablo*>();
	cout << "\n\t\t\t¡BIENVENIDO!" << endl;
	int accion;

	do {
		cout << "\nAGREGAR\n1.- Ser\n2.- FrutaDiablo\n0.- Salir\n_ ";
		cin >> accion;

		if(accion == 1) {
			int n_ser;
			cout << "SERES\n1.- Marina\n2.- Piratas\n3.- Revolucionarios\n_ ";
			cin >> n_ser;

			int rasa, edad;
			string nombre;
			bool tieneFruta, haki_OB, haki_ARM, haki_REY;
			do {
				cout << "Rasa: " << endl;
				cout << "0.-gyojin\n1.-kyojin\n2.-ningyo\n3.-humano\n4.-mink\n5.-skypieans\n_ " ;
				cin >> rasa;
			} while(rasa < 0 || rasa > 5);
			cout << "Edad: ";
			cin >> edad;
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Tiene Haki Observacion (1.- si / 0.- no): ";
			cin >> haki_OB;			
			cout << "Tiene Haki Armadura (1.- si / 0.- no): ";
			cin >> haki_ARM;
			cout << "Tiene Haki Rey (1.- si / 0.- no): ";
			cin >> haki_REY;
			cout << "Tiene Fruta (1.- si / 0.- no): ";
			cin >> tieneFruta;
			int pos_fruta;
			if(tieneFruta == true) {
				if(frutas -> size() == 0) {
					cout << "NO HAY FRUTAS\nSE CREARÄ SIN FRUTA" << endl;
					tieneFruta = false;
				} else {

					for(int i = 0; i < frutas -> size(); i++) {
						cout << i << ".- " << frutas -> at(i) -> getNombre() << endl; 
					}
					do {
						cout << "Ingrese #Fruta: ";
						cin >> pos_fruta;
					} while (pos_fruta < 0 || pos_fruta >= frutas -> size());
				}
			} else {
				tieneFruta = false;
			}

			// Marina
			if(n_ser == 1) {
				int rango;
				do {
					cout <<"0.- cadete\n1.- teniente\n3.- vice-almirante\n4.- almirante\n5.- almirante de flota" << endl << "Rango: ";
					cin >> rango;
				} while (rango < 0 || rango > 5);				
				if(tieneFruta == true){					
					seres -> push_back(new Marina(nombre, edad, rasa, frutas -> at(pos_fruta), haki_OB, haki_ARM, haki_REY, rango));					
					frutas -> erase(frutas -> begin() + pos_fruta);
				} else{				
					seres -> push_back(new Marina(nombre, edad, rasa, haki_OB, haki_ARM, haki_REY, rango));
				}				
			} else if(n_ser == 2) {
				string tripulacion, funcion;
				int oceano;
				do {
					cout << "OCEANO: \n0.- east\n1.- west\n2.- south\n3.- north blue\n4.- grand line\n5.- new world\n_ ";
					cin >> oceano;
				} while(oceano < 0 || oceano > 5);
				cout << "tripulacion: ";
				cin >> tripulacion;
				cout << "funcion: ";
				cin >> funcion;
				if(tieneFruta == true){
					seres -> push_back(new Piratas(nombre, edad, rasa, frutas -> at(pos_fruta), haki_OB, haki_ARM, haki_REY, oceano, tripulacion, funcion));			
					frutas -> erase(frutas -> begin() + pos_fruta);
				} else{
					seres -> push_back(new Piratas(nombre, edad, rasa, haki_OB, haki_ARM, haki_REY, oceano, tripulacion, funcion));
				}
			} else if(n_ser == 3) {
				if(tieneFruta == true){
					seres -> push_back(new Revolucionarios(nombre, edad, rasa, frutas -> at(pos_fruta), haki_OB, haki_ARM, haki_REY));
					frutas -> erase(frutas -> begin() + pos_fruta);
				} else{
					seres -> push_back(new Revolucionarios(nombre, edad, rasa, haki_OB, haki_ARM, haki_REY));
				}
			} else {
				cout << "NO EXISTE" << endl;
			}
		} else if(accion == 2) {
			int n_fruta;
			cout << "1.-Paramecia\n2.-Zoan\n3.-Logia\n_ ";
			cin >> n_fruta;
			string nombre;
			cout << "Nombre";
			cin >> nombre;
			if(n_fruta == 1) {
				string descripcion;
				cout << "descripcion: ";
				cin >> descripcion;
				frutas -> push_back(new Paramecia(nombre, descripcion));
			} else if(n_fruta == 2) {
				int tipo;
				do {					
					cout << "TIPO\n0.- normal\n1.- prehistorica\n2.- legendaria\n_ ";
					cin >> tipo;
				} while(tipo < 0 || tipo > 2);
				string animal;
				cout << "Animal: ";
				cin >> animal;
				frutas -> push_back(new Zoan(nombre, tipo, animal));				
			}else if(n_fruta == 3) {
				string elemento;
				cout << "Elemento: ";
				cin>> elemento;
				frutas -> push_back(new Logia(nombre, elemento));
			}
		}

	} while(accion != 0);

	// LIMPIEZA
	for(int i = 0; i < seres -> size(); i++) {
		delete seres -> at(i);
	}
	delete seres;
	seres -> clear();
	for(int i = 0; i < frutas -> size(); i++) {
		delete frutas -> at(i);
	}
	delete frutas;
	frutas -> clear();
	return 0;
}