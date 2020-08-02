#pragma once
#include <string.h>
#include <iostream>
#include <stddef.h>

using namespace std;


class NodoEstudiante
{
private:
	string nombre;
	int carne;
	NodoEstudiante* siguiente;

public:
	NodoEstudiante(string nombre, int carne);
	~NodoEstudiante(); //destructor

	string getNombre() const { return this->nombre; };

	int getCarne() const { return this->carne; };

	NodoEstudiante* getSiguiente();
	void setSiguiente(NodoEstudiante* siguiente);
	void imprimirNodo();
};