#include "NodoEstudiante.h"

NodoEstudiante::NodoEstudiante(string nombre, int carne) {
	this->nombre = nombre;
	this->carne = carne;
	this->siguiente = NULL;
}

NodoEstudiante::~NodoEstudiante() {
	cout << "Nodo " << this->carne << " eliminado " << endl;
}

NodoEstudiante* NodoEstudiante::getSiguiente() {
	return this->siguiente;
}

void NodoEstudiante::setSiguiente(NodoEstudiante* siguiente) {
	this->siguiente = siguiente;
}

void NodoEstudiante::imprimirNodo() {
	cout << "Nombre: " << this->nombre << ", Carne: " << this->getCarne() << endl;
}