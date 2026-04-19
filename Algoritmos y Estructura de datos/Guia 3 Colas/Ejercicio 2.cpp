#include <iostream>
using namespace std;
/*Dada una COLA de nombre C del tipo NCola, vacía, realice una función que la
cargue con los valores incluidos en un vector de enteros pasado como
argumento. A modo de ejemplo se pide probar esta función pasando como
parámetro el vector int v[] {9,1,3};
Luego implemente otra función que descargue completamente la cola
mostrando su contenido por consola:
Retiramos: 9, 1, 3
Luego mostrar el estado de la cola C
vacia={verdadero,falso}*/
struct NCola{
	int dato;
	NCola *link;
};
void insertarCola(NCola *&frente, NCola *&fondo, int valor);
void quitarCola(NCola *&frente, NCola *&fondo, int &valor);
int main(int argc, char *argv[]) {
	NCola *frente = NULL;
	NCola *fondo = NULL;
	int valor, v[] = {9, 1, 3};
	for (int i = 0;i < 3;i++){
		valor = v[i];
		insertarCola(frente, fondo, valor);
	}
	cout << endl;
	cout << "Retiramos: ";
	while (frente != NULL){
		quitarCola(frente, fondo, valor);
		cout << valor << " ";
	}
	return 0;
}
void insertarCola(NCola *&frente, NCola *&fondo, int valor){
	NCola *nuevo_nodo = new NCola();
	nuevo_nodo->dato = valor;
	nuevo_nodo->link = NULL;
	if (fondo == NULL){
		frente = nuevo_nodo;
	}
	else{
		fondo->link = nuevo_nodo;
	}
	fondo = nuevo_nodo;
	cout << "El elemento " << valor << " ha sido ingresado a Cola correctamente." << endl;
}
void quitarCola(NCola *&frente, NCola *&fondo, int &valor){
	valor = frente->dato;
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
