#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*Realice una función llamada EsPrimo que devuelva verdadero si el número pasado como
parámetro es primo, caso contrario devuelva falso*/
string Esprimo(int n1);//Prototipo
int main(int argc, char *argv[]) {
	int n1;
	//Carga de datos
	cout << "Ingrese un número para saber si es primo: ";
	cin >> n1;
	cout << endl;
	cout << Esprimo(n1);
	return 0;
}
string Esprimo(int n1){
	string prim;
	//Calculo para saber si es primo
	for (int i = 2;i < sqrt(n1);i++)
	{
		if (n1%i == 0)
		{
			return "Falso";
		}
	}
	return "Verdadero";
}

