#include "ListaEst.h"
#include "Nodo.h"

int main() {

	Nodo* estudiante1 = new Nodo(201801043, 'C');
	Nodo* estudiante2 = new Nodo(201804544, 'A');
	Nodo* estudiante3 = new Nodo(201801777, 'C');

	ListaEst* lista = new ListaEst();

	lista->agregar(estudiante1);
	lista->agregar(estudiante2);
	lista->agregar(estudiante3);

	lista->imprimir();

	cout << "Despues de eliminar" << endl;

	lista->eliminar(201801043, 'C');
	lista->imprimir();

	delete lista;

	return 0;
}