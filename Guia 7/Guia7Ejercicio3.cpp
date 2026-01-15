#include <iostream>
using namespace std;
/*Realice una función que realice el intercambio entre 2 valores que se pasan como parámetros.*/
void intercambio(int &p1, int &p2);//Prototipo
int main(int argc, char *argv[]) {
	int n1, n2;
	//Carga de datos
	cout << "Ingrese 2 valores para el intercambio: " << endl;
	cout << "Valor 1: ";
	cin >> n1;
	cout << "Valor 2: ";
	cin >> n2;
	//Función
	intercambio(n1, n2);
	cout << endl;
	cout << "Valor 1: " << n1 << endl;
	cout << "Valor 2: " << n2;
	return 0;
}
void intercambio(int &p1, int &p2){
	int aux;
	//Intercambio
	aux = p1;
	p1 = p2;
	p2 = aux;
}

