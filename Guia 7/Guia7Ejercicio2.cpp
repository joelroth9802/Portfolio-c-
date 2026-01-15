#include <iostream>
using namespace std;
/*Realice una función que devuelva el menor de 2 números que se pasan como parámetros.*/
int menor(int p1, int p2);//Prototipo
int main(int argc, char *argv[]) {
	int n1, n2;
	cout << "Ingrese 2 valores para calcular el mínimo: " << endl;
	cout << "Valor 1: ";
	cin >> n1;
	cout << "Valor 2: ";
	cin >> n2;
	cout << endl;
	cout << "Valor mínimo: " << menor(n1, n2);
	return 0;
}
int menor(int p1, int p2){
	int men;
	if (p1 < p2)
	{
		men = p1;
	}
	else
	{
		men = p2;
	}
	return men;
}
