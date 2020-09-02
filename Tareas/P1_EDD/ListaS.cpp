#include "ListaS.h"

using namespace std;

ListaS::ListaS() {
	this->cabeza = NULL;
	this->cola = NULL;
}

ListaS::~ListaS() {
	cout << "lista eliminada" << endl;
}

void ListaS::agregar(Nodo* nuevo) {
	if (this->cabeza == NULL)
	{
		this->cabeza = nuevo;
		this->cola = nuevo;
	}
	else
	{
		this->cola->setSiguiente(nuevo);
		this->cola = nuevo;
	}
}

void ListaS::eliminar(int dato) {
	if (this->cabeza == NULL)
	{
		cout << "No hay elementos en la lista" << endl;
	}
	else
	{
		Nodo* aux, * prev;
		aux = this->cabeza;
		prev = aux;

		while (aux != NULL)
		{
			if (aux->getDato() == dato)
			{
				prev->setSiguiente(aux->getSiguiente());

				if (this->cabeza == aux)
				{
					this->cabeza = aux->getSiguiente();
				}
				else if (this->cola = aux)
				{
					this->cola = prev;
				}

				delete aux;
				return;
			}

			prev = aux;
			aux = aux->getSiguiente();
		}
	}
}

void ListaS::imprimir() {
	Nodo* aux = this->cabeza;

	if (this->cabeza == NULL) {
		cout << "Lista vacia" << endl;
	}
	else
	{
		while (aux != NULL)
			{
				aux->imprimirNodo();
				aux = aux->getSiguiente();
			}
	}

	
}