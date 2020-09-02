#include "Nodo.h"
#include "ListaS.h"

int main() {
	Nodo* nodo1 = new Nodo(1, 1, 5);
	Nodo* nodo2 = new Nodo(2, 4, 9);
	Nodo* nodo3 = new Nodo(3, 2, 12);

	ListaS* lista = new ListaS();

	lista->agregar(nodo1);
	lista->agregar(nodo2);
	lista->agregar(nodo3);

	lista->imprimir();

	lista->eliminar(5);
	lista->eliminar(9);
	lista->eliminar(12);

	lista->imprimir();

	delete lista;

	return 0;
}