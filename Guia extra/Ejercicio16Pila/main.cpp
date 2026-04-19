#include <iostream>
/*Hacer un programa para agregar numeros enteros a una pila, hasta que el usuario lo decida, despues mostrar todos los numeros
 * introducidos en la pila.*/
using namespace std;
struct nodo{
    int datos;
    nodo *siguiente;
};
void agregarPila(nodo *&pila, int n);
void quitarPila(nodo *&pila, int &n);
int main()
{
    nodo *pila = NULL;
    int datos;
    char resp;
    cout << "Desea agregar un dato a la pila (s/n) ? ";
    cin >> resp;
    cout << endl;
    while (resp != 'n'){
        cout << "Ingrese un valor: ";
        cin >> datos;
        cout << endl;
        agregarPila(pila, datos);
        cout << endl;
        cout << "Desea agregar un dato a la pila (s/n) ? ";
        cin >> resp;
    }
    cout << endl;
    cout << "Sacando elementos de la pila: ";
    while (pila != NULL){
        quitarPila(pila, datos);
        //cout << datos << ' '; esto seria lo mismo que poner el if/else pero mas directo.
        if (pila != NULL){
            cout << datos << ", ";
        }
        else{
            cout << datos << ".";
        }
    }
    cout << endl;
    return 0;
}
void agregarPila(nodo *&pila, int n){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->datos = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "El elemento " << n << " ha sido agregado a PILA correctamente." << endl;
}
void quitarPila(nodo *&pila, int &n){
    nodo *aux = pila;
    n = aux->datos;
    pila = aux->siguiente;
    delete aux;
}
