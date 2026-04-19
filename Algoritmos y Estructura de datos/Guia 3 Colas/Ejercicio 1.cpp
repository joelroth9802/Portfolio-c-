#include <iostream>
using namespace std;
/*Dada una COLA vacía de nombre C del tipo NCola, cargue los valores 5,3 y 8.
Luego obtenga un valor de C y muestre por consola.
Luego mostrar el estado de la cola C
vacia={verdadero,falso}*/
struct NCola{
	int dato;
	NCola *link;
};
void insertarCola(NCola *&frente, NCola *&fondo, int C);
void quitarCola(NCola *&frente, NCola *&fondo, int &C);
int main(int argc, char *argv[]) {
	NCola *frente = NULL;
	NCola *fondo = NULL;
	int C;
	cout << "Ingrese 3 valores: " << endl;
	for (int i = 0;i < 3;i++){
		cout << "Valor " << i+1 << ": ";
		cin >> C;
		cout << endl;
		insertarCola(frente, fondo, C);
		cout << endl;
	}
	quitarCola(frente, fondo, C);
	cout << "Sacando el elemento " << C << " de la Cola" << endl;
	cout << endl;
	cout << "Cola Vacia: ";
	if (frente == NULL){
		cout << "Verdadero";
	}
	else{
		cout << "Falso";
	}
	return 0;
}
void insertarCola(NCola *&frente, NCola *&fondo, int C){
	NCola *nuevo_nodo = new NCola();
	nuevo_nodo->dato = C;
	nuevo_nodo->link = NULL;
	if (fondo == NULL){
		frente = nuevo_nodo;
	}
	else{
		fondo->link = nuevo_nodo;
	}
	fondo = nuevo_nodo;
	cout << "El elemento " << C << " ha sido agregado a Cola correctamente." << endl;
}
void quitarCola(NCola *&frente, NCola *&fondo, int &C){
	C = frente->dato;
	NCola *aux = frente;
	if (frente == fondo){
		frente = NULL;
		fondo = NULL;
	}
	else{
		frente = frente->link;
	}
	delete aux;
}
