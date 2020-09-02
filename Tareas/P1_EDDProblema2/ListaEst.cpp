#include "ListaEst.h"

ListaEst::ListaEst() {
	this->cabeza = NULL;
	this->cola = NULL;
}

ListaEst::~ListaEst() {
	cout << "lista eliminada" << endl;
}


void ListaEst::agregar(Nodo* nuevo) {
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


void ListaEst::eliminar(int carne, char seccion) {
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
			if (aux->getCarne() == carne && aux->getSeccion() == seccion)
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

void ListaEst::imprimir() {
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