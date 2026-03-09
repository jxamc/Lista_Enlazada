#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    cout << endl << "Nombre del estudiante: Julio Xam" << endl << endl;

    Nodo* head = NULL;
    Nodo* actual = NULL;

    int valor;
    char opcion = 's';

    int cantidad = 0;
    int suma = 0;

    while(opcion == 's') {

        cout << "Ingrese un numero: ";
        cin >> valor;

        Nodo* nuevo = new Nodo;

        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if(head == NULL) {
            head = nuevo;
        } else {
            actual->siguiente = nuevo;
        }

        actual = nuevo;

        cantidad++;
        suma += valor;

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;

        cout << endl;
    }

    cout << "Lista generada:" << endl;

    Nodo* temp = head;

    while(temp != NULL) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }

    cout << "NULL" << endl;

    cout << endl;
    cout << "Cantidad de nodos: " << cantidad << endl;
    cout << "Suma de valores: " << suma << endl;

    if(cantidad > 0) {
        float promedio = (float)suma / cantidad;
        cout << "Promedio: " << promedio << endl << endl;
    }

    return 0;
}