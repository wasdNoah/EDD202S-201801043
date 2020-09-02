#include "Nodo.h"

using namespace std;

Nodo::Nodo(int carne, char seccion) {
	this->carne = carne;
	this->seccion = seccion;
	this->siguiente = NULL;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}

int Nodo::getCarne() {
	return this->carne;
}

char Nodo::getSeccion() {
	return this->seccion;
}

void Nodo::imprimirNodo() {
	cout << "Carne: " << this->carne << ", Seccion: " << this->seccion<< endl;
}