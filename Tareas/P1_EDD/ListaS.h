#include <iostream>
#include <string.h>
#include "Nodo.h"
#pragma once

class ListaS
{
private:
	Nodo* cabeza, *cola;

public:
	ListaS();
	~ListaS();

	void agregar(Nodo* nuevo);
	void eliminar(int dato);
	void imprimir();

};

