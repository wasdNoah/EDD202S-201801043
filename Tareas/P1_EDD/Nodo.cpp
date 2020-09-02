#include "Nodo.h"
using namespace std;

Nodo::Nodo(int x, int y, int dato) {
	this->x = x;
	this->y = y;
	this->dato = dato;
	this->siguiente = NULL;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}

int Nodo::getDato() {
	return this->dato;
}

void Nodo::imprimirNodo() {
	cout << "X: " << this->x << ", Y: " << this->y << ", Valor: " << this->dato <<endl;
}