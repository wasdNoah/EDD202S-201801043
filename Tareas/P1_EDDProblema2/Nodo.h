#pragma once
#include <iostream>
#include <string.h>

class Nodo
{
private:
	int carne;
	char seccion;
	Nodo* siguiente;

public:
	Nodo(int carne, char seccion);

	Nodo* getSiguiente();
	void setSiguiente(Nodo* sig);
	int getCarne();
	char getSeccion();

	void imprimirNodo();
};

