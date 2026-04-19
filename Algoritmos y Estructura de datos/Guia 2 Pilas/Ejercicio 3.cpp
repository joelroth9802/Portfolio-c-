#include <iostream>
#include <string>
using namespace std;
/*Implemente una función que invierta una palabra usando una pila tipo SPila.
Ej entrada string p = “acamah”; Salida string in = “hamaca”
Recordar que un char tiene una representación interna de un entero de 0 a 255.*/
struct SPila{
	char dato;
	SPila *siguiente;
};
void agregar_pila(SPila *&pila, char letra);
void quitar_pila(SPila *&pila, char &letra);
void invertir_palabra(SPila *&pila, string palabra, char &letra);
int main(int argc, char *argv[]) {
	SPila *pila = NULL;
	string palabra;
	char letra;
	cout << "Ingrese una palabra al reves: ";
	getline(cin, palabra);
	cout << endl;
	invertir_palabra(pila, palabra, letra);
	cout << "Palabra: ";
	while (pila != NULL){
		quitar_pila(pila, letra);
		cout << letra;
	}
	return 0;
}
void agregar_pila(SPila *&pila, char letra){
	SPila *nuevo_nodo = new SPila();
	nuevo_nodo->dato = letra;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}
void invertir_palabra(SPila *&pila, string palabra, char &letra){
	int tam = palabra.size();
	for (int i = 0;i < tam;i++){
		letra = palabra[i];
		agregar_pila(pila, letra);
	}
}
void quitar_pila(SPila *&pila, char &letra){
	SPila *aux = pila;
	letra = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
