#include <iostream>
#pragma once

class Nodo
{
private:
	int x;
	int y;
	int dato;
	Nodo* siguiente;

public:
	Nodo(int x, int y, int dato);

	Nodo* getSiguiente();
	void setSiguiente(Nodo* sig);
	int getDato();

	void imprimirNodo();
};

