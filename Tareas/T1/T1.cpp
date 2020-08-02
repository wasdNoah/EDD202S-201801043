#include <iostream>
#include "Lista.h"
#include "NodoEstudiante.h"

using namespace std;

void menuPrincipal(Lista* lista);

int main()
{
    Lista* lista = new Lista();
    NodoEstudiante* est1, * est2, * est3, *est4;

    //creando nodos
    est1 = new NodoEstudiante("Amilcar Cuyuch", 201801043);
    est2 = new NodoEstudiante("Melanie Paola", 201805489);
    est3 = new NodoEstudiante("Tom Botton", 201801056);

    //agregando nodos a la lista
    lista->agregar(est1);
    lista->agregar(est2);
    lista->agregar(est3);

    lista->imprimir();

    cout << "---------------Buscando nodos--------------" << endl;
    est4 = lista->buscar(201801043);
    cout << "Se encontro: " << est4->getNombre() << " con Carne: " << est4->getCarne() << endl;

    cout << "------------Eliminando nodos------------" << endl;
    lista->eliminar(201801043);
    lista->imprimir();

    //menuPrincipal(lista);

    delete lista;

    return 0;
}

void menuPrincipal(Lista* lista) {
    const char* opciones =
        "1. Ingresar estudiante\n"
        "2. Eliminar estudiante\n"
        "3. Buscar estudiante\n"
        "4. Ver estudiantes\n"
        "5. Salir\n"
        "Elige una opcion: >> ";

    string eleccion;
    string nombre;
    string carne;

    while (true)
    {
        cout << opciones;
        cin >> eleccion;

        if (eleccion == "1")
        {
            cout << "Ingresa un nombre: " << endl;
            cin >> nombre;

            cout << "Ingresa el carne: " << endl;
            cin >> carne;

            cout << nombre << ", " << carne << endl;
            break;
        }
    }
    
}