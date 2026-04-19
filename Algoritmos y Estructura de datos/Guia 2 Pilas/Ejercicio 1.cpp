#include <iostream>
using namespace std;
/*Dada una PILA de nombre S del tipo NPila, vacía, cargue los valores 5,3 y 8.
Luego obtenga un valor de S y muestre por consola.
Luego mostrar el estado de la pila S
vacia={verdadero,falso}*/
struct NPila{
	int dato;
	NPila *siguiente;
};
typedef NPila* apuntPila;
void agregarPila(apuntPila &pila, int valorS);
void quitarPila(apuntPila &pila, int &valorS);
int main(int argc, char *argv[]) {
	apuntPila pila = NULL;
	int valorS;
	valorS = 5;
	agregarPila(pila, valorS);
	valorS = 3;
	agregarPila(pila, valorS);
	valorS = 8;
	agregarPila(pila, valorS);
	cout << "Sacando elemento de la pila: ";
	cout << valorS;
	quitarPila(pila, valorS);
	cout << endl;
	cout << "Vacia: ";
	if (pila == NULL){
		cout << "Verdadero";
	}
	else{
		cout << "Falso";
	}
	return 0;
}
void agregarPila(apuntPila &pila, int valorS){
	apuntPila nuevo_nodo = new NPila();
	nuevo_nodo->dato = valorS;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout << "El valor " << valorS << " ha sido ingresado en la pila" << endl;
	cout << endl;
}
void quitarPila(apuntPila &pila, int &valorS){
	apuntPila aux = pila;
	valorS = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
