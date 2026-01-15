#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float peso, estatura;
	int imc;
	string nombre;
	cout << "Ingrese nombre del usuario: ";
	cin.ignore();
	getline(cin, nombre);
	cout << "Ingrese estatura: ";
	cin >> estatura;
	cout << "Ingrese peso: ";
	cin >> peso;
	imc = peso/pow(estatura,2);
	cout << "-------------------------------" << endl;
	cout << "Su indice de Masa Corporal es de: " << imc;
	return 0;
}

