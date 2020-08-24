#include "Lista.h"

using namespace std;

Lista::Lista() {
	this->cabeza = NULL;
	this->cola = NULL;
	this->tamanio = 0;
}

int Lista::getSize() {
	return this->tamanio;
}

void Lista::agregar(NodoEstudiante* nuevo) {
	if (this->cabeza == NULL)
	{
		this->cabeza = nuevo;
		this->cola = nuevo;
		tamanio++;
	}
	else
	{
		//si ya existe uno o más elementos en la lista se utiliza la cola
		this->cola->setSiguiente(nuevo);
		this->cola = nuevo;
		tamanio++;
	}
}

void Lista::eliminar(int carne) {
	if (this->cabeza == NULL)
	{
		cout << "No hay elementos en la lista" << endl;
	}
	else
	{
		NodoEstudiante* aux, * prev;
		aux = this->cabeza;
		prev = aux;

		while (aux != NULL)
		{
			if (aux->getCarne() == carne)
			{
				this->tamanio--;
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

NodoEstudiante* Lista::buscar(int carne) {
	NodoEstudiante* aux = this->cabeza;

	while (aux != NULL)
	{
		if (aux->getCarne() == carne) {
			//cuando encuentra un carné que coincide deberá retornar ese nodoEstudiante
			return aux;
		}

		aux = aux->getSiguiente();
	}
}

void Lista::imprimir() {
	NodoEstudiante* aux = this->cabeza;

	while (aux != NULL)
	{
		aux->imprimirNodo();
		aux = aux->getSiguiente();
	}
}

Lista* Lista::clonar() {
	if (this->cabeza == NULL) {
		cout << "No hay elementos en la lista" << endl;
	}
	else
	{
		Lista* listaClon = new Lista();
		NodoEstudiante* aux = this->cabeza;

		while (aux != NULL)
		{
			NodoEstudiante* nodoInsertar = new NodoEstudiante(aux->getNombre(), aux->getCarne());
			listaClon->agregar(nodoInsertar);
			aux = aux->getSiguiente();
		}

		return listaClon;
	}
}

//destructor
Lista::~Lista() {
	NodoEstudiante* aux = this->cabeza;
	NodoEstudiante* temp; //sirve para guardar la referencia del nodo siguiente al que se elimina

	while (aux != NULL)
	{
		temp = aux->getSiguiente(); //guarda referencia del que sigue para así poder eliminarlo luego
		delete aux;
		aux = temp;
	}
}