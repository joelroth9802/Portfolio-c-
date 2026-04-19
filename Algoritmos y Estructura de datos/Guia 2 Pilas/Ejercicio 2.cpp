#include <iostream>
using namespace std;
/*Dada una PILA de nombre S del tipo NPila, vacía, realice una función que la
cargue con los valores incluidos en un vector de enteros pasado como
argumento. A modo de ejemplo se pide probar esta función pasando como
parámetro el vector int v[] {9,1,3};
Luego implemente otra función que descargue completamente la pila mostrando
su contenido por consola:
Retiramos: 3, 1, 9
Luego mostrar el estado de la pila S
vacia={verdadero,falso}*/
struct NPila{
	int dato;
	NPila *siguiente;
};
typedef NPila *puntPila;
void agregarPila(puntPila &pila, int valorS);
void agregarValoraPila(puntPila &pila, int vector[], int valorS);
void quitarPila(puntPila &pila, int &valorS);
int main(int argc, char *argv[]) {
	puntPila pila = NULL;
	int valorS, vector[5] = {5, 3, 7, 8, 2};
	agregarValoraPila(pila, vector, valorS);
	cout << "Retiramos: ";
	while (pila != NULL){
		quitarPila(pila, valorS);
		cout << valorS << ' ';
	}
	cout << endl;
	cout << "Pila vacia: ";
	if (pila == NULL){
		cout << "Verdadero";
	}
	else{
		cout << "Falso";
	}
	return 0;
}
void agregarPila(puntPila &pila, int valorS){
	puntPila nuevo_nodo = new NPila();
	nuevo_nodo->dato = valorS;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout << "El elemento " << valorS << " ha sido agregado a la pila" << endl;
	cout << endl;
}
//Función para agregar un elemento del vector y pasarlo al valorS, para luego pasarlo a la funcion agregarPila
void agregarValoraPila(puntPila &pila, int vector[], int valorS){
	for (int i = 0;i < 5;i++){
		valorS = vector[i];
		agregarPila(pila, valorS);
	}
}
void quitarPila(puntPila &pila, int &valorS){
	puntPila aux = pila;
	valorS = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
