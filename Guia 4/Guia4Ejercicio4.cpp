#include <iostream>
#include <string>
using namespace std;
/*Ingrese 2 cadenas de caracteres y un valor entero X. Inserte la segunda cadena dentro de
la primera a partir de la posición X, salvo que dicha posición sea inválida.*/
int main(int argc, char *argv[]) {
	string cadena1, cadena2; int valor;
	cout << "Ingrese 2 cadenas de caracteres: " << endl;
	getline(cin, cadena1);
	getline(cin, cadena2);
	cout << "Ingrese un valor entero para x: ";
	cin >> valor;
	cout << "----------------------------------------------" << endl;
	int longitud = cadena1.size();
	valor -= 1;
	if ((valor < 0) || (valor > longitud))
	{
		cout << "Valor invalido";
	}
	else
	{
		cadena1.insert(valor," " + cadena2);
		cout << cadena1;
	}
	return 0;
}

