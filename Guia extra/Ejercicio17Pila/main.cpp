#include <iostream>
/*Hacer un programa en c++, utilizando Pilas que contenga el siguiente menu:
 * 1.Insertar un caracter a la pila
 * 2.Mostrar todos los elementos de la pila
 * 3.Salir*/
using namespace std;
struct nodo{
    char dato;
    nodo *siguiente;
};
typedef nodo* Apuntnodo;
void agregarPila(Apuntnodo &pila, char n);
void quitarPila(Apuntnodo &pila, char &n);
int main()
{
    Apuntnodo pila = NULL;
    char datos;
    int valor;
    cout << "-----------MENU-----------" << endl;
    cout << "1: Insertar un caracter a la pila" << endl;
    cout << "2: Mostrar todos los elementos de la pila" << endl;
    cout << "3: Salir" << endl;
    cout << endl;
    cout << "Opcion: ";
    cin >> valor;
    cout << endl;
    while (valor != 3){
        switch  (valor){
        case 1:
            cout << "Ingrese un caracter: ";
            cin >> datos;
            cout << endl;
            agregarPila(pila, datos);
            break;
        case 2:
            cout << "Elementos de la pila: ";
            while (pila != NULL){
                quitarPila(pila, datos);
                cout << datos << ' ';
            }
            cout << endl;
        }
        cout << "-----------MENU-----------" << endl;
        cout << "1: Insertar un caracter a la pila" << endl;
        cout << "2: Mostrar todos los elementos de la pila" << endl;
        cout << "3: Salir" << endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> valor;
        cout << endl;
    }// Aquí termina tu while (valor != 3)
    // --- LIMPIEZA DE MEMORIA ---
    // Si quedó algo en la pila al elegir salir, lo eliminamos.
    while (pila != NULL) {
        char dato_sobrante;
        quitarPila(pila, dato_sobrante);
    }
    return 0;
}
void agregarPila(Apuntnodo &pila, char n){
    Apuntnodo nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "El caracter " << n << " ha sido agregado a la PILA" << endl;
    cout << endl;
}
void quitarPila(Apuntnodo &pila, char &n){
    Apuntnodo aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
