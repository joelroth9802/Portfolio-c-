#include <iostream>
using namespace std;
/*Genere una función de nombre capicua, que utilice una pila del tipo NPila,
que reciba como entrada un numero entero (int) y determine si el mismo es
capicúa.*/
struct NPila{
	int dato;
	NPila *siguiente;
};
void agregar_pila(NPila *&pila, int ultDig);
void quitar_pila(NPila *&pila, int &ultDig);
void capicua(NPila *&pila, int valor, int ultDig); 
int main(int argc, char *argv[]) {
	NPila *pila = NULL;
	int valor, ultDig = 0;
	cout << "Ingrese un valor: ";
	cin >> valor;
	cout << endl;
	capicua(pila, valor, ultDig);
	return 0;
}
void agregar_pila(NPila *&pila, int ultDig){
	NPila *nuevo_nodo = new NPila();
	nuevo_nodo->dato = ultDig;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}
void quitar_pila(NPila *&pila, int &ultDig){
	NPila *aux = pila;
	ultDig = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
void capicua(NPila *&pila, int valor, int ultDig){
	int original = valor;
	while (valor > 0){
		ultDig = valor % 10;
		agregar_pila(pila, ultDig);
		valor /= 10;
	}
	int numInvert = 0, multiplicador = 1;
	while (pila != NULL){
		quitar_pila(pila, ultDig);
		numInvert += (ultDig*multiplicador);
		multiplicador *= 10;
	}
	if (numInvert == original){
		cout << "El valor ingresado es capicua";
	}
	else{
		cout << "El valor ingresado no es capicua";
	}
}
