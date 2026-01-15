#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int pesos, dolar, euros, real;
	cout << "Ingrese la cantidad de dinero en pesos: ";
	cin >> pesos;
	cout << "Ingrese la cotización del dolar: ";
	cin >> dolar;
	cout << "Ingrese la cotización del euro: ";
	cin >> euros;
	cout << "Ingrese la cotización del real: ";
	cin >> real;
	dolar = pesos/dolar;
	euros = pesos/euros;
	real = pesos/real;
	cout << "--------------------------------------------" << endl;
	cout << "Equivalencia en dolar: $ " << dolar << endl;
	cout << "Equivalencia en euros: $ " << euros << endl;
	cout << "Equivalencia en reales: $ " << real;
	return 0;
}

