#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float parcial1, parcial2, prac, prompar, promprac, notafinal;
	cout << "Ingrese la nota del primer parcial: ";
	cin >> parcial1;
	cout << "Ingrese la nota del segundo parcial: ";
	cin >> parcial2;
	cout << "Ingrese la nota del trabajo practico: ";
	cin >> prac;
	prompar = ((parcial1 + parcial2)/2)*0.80;
	promprac = prac*0.20;
	notafinal = prompar + promprac;
	cout << "----------------------------------------------------" << endl;
	cout << "Nota final: " << notafinal;
	return 0;
}

