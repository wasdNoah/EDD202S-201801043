#pragma once
#include "Nodo.h"

using namespace std;

class ListaEst
{
private:
	Nodo* cabeza, * cola;

public:
	ListaEst();
	~ListaEst();

	void agregar(Nodo* nuevo);
	void eliminar(int carne, char seccion);
	void imprimir();

};

