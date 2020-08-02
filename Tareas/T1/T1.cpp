#include <iostream>
#include "Lista.h"
#include "NodoEstudiante.h"

using namespace std;

void menuPrincipal(Lista* lista);

int main()
{
    Lista* lista = new Lista();
    /*NodoEstudiante* est1, * est2, * est3, *est4;
    est1 = new NodoEstudiante("Amilcar Cuyuch", 201801043);
    est2 = new NodoEstudiante("Melanie Paola", 201805489);
    est3 = new NodoEstudiante("Tom Botton", 201801056);

    lista->agregar(est1);
    lista->agregar(est2);
    lista->agregar(est3);

    lista->imprimir();

    cout << "---------------Buscando nodos--------------" << endl;
    est4 = lista->buscar(201801043);
    cout << "Se encontro: " << est4->getNombre() << " con Carne: " << est4->getCarne() << endl;

    cout << "------------Eliminando nodos------------" << endl;
    lista->eliminar(201801043);
    lista->imprimir();*/




    delete lista;

    return 0;
}

void menuPrincipal(Lista* lista) {

}