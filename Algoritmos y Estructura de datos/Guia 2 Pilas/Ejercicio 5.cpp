#include <iostream>
using namespace std;
/*Implemente una solución alternativa para el problema del punto anterior de
nombre dec2binrec, usando una función recursiva solamente (sin estructuras
auxiliares). Complementariamente debe representar en papel el estado de
invocación y del stack, con el caso del decimal 7.*/
//Prototipo
void decAbin(int valor);
int main(int argc, char *argv[]) {
	int valor;
	cout << "Ingrese un valor decimal: ";
	cin >> valor;
	cout << endl;
	cout << "Valor binario: ";
	decAbin(valor);
	return 0;
}
//Tranformación a binario con recursividad
void decAbin(int valor){
	int bin;
	if (valor < 2){
		cout << valor;
		return;
	}
	bin = valor%2;
	decAbin(valor/2);
	cout << bin ;
}
