#include <iostream>
#include <string.h>
#include <stddef.h>
#include "NodoEstudiante.h"

using namespace std;

class Lista
{
private:
	NodoEstudiante* cabeza, * cola;
	int tamanio;

public:
	Lista();
	~Lista();

	int getSize();
	void agregar(NodoEstudiante* nuevo);
	void eliminar(int carne);
	void imprimir();
	NodoEstudiante* buscar(int carne);

	Lista* clonar();
};