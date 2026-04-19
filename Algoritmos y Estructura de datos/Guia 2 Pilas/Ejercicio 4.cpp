#include <iostream>
using namespace std;
/*Se desea realizar una función de nombre dec2bin que reciba como parámetro
un número en formato de numeración decimal y obtenga la representación
binaria del mismo. Implemente la solución usando una pila del tipo NPIla.*/
struct NPila{
	int dato;
	NPila *siguiente;
};
void dec2bin(NPila *&pila, int valor, int &bin);
void agregar_pila(NPila *&pila, int bin);
void quitar_pila(NPila *&pila, int &bin);
int main(int argc, char *argv[]) {
	NPila *pila = NULL;
	int valor, bin = 0;
	cout << "Ingrese una valor decimal para covertir a binario: ";
	cin >> valor;
	dec2bin(pila, valor, bin);
	cout << endl;
	cout << "Valor binario: ";
	while (pila != NULL){
		quitar_pila(pila, bin);
		cout << bin;
	}
	return 0;
}
void agregar_pila(NPila *&pila, int bin){
	NPila *nuevo_nodo = new NPila();
	nuevo_nodo->dato = bin;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}
void dec2bin(NPila *&pila, int valor, int &bin){
	int cociente;
	if (valor == 0){
		agregar_pila(pila, 0);
	}
	while (valor > 0){
		cociente = valor/2;
		bin = valor % 2;
		agregar_pila(pila, bin);
		valor = cociente;
	}
}
void quitar_pila(NPila *&pila, int &bin){
	NPila *aux = pila;
	bin = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
