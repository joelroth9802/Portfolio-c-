#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int sueldo1, sueldo2, km1, km2, total;
	string chofer1, chofer2;
	cout << "Ingrese nombre del primer chofer: ";
	getline(cin, chofer1);
	cout << "Ingrese sueldo básico: ";
	cin >> sueldo1;
	cout << "Ingrese kilometros a liquidar: ";
	cin >> km1;
	cin.ignore();
	cout << "Ingrese nombre del segundo chofer: ";
	getline(cin, chofer2);
	cout << "Ingrese sueldo básico: ";
	cin >> sueldo2;
	cout << "Ingrese kilometros a liquidar: ";
	cin >> km2;
	km1 *= 50;
	km2 *= 50;
	sueldo1 += km1;
	sueldo2 += km2;
	total = sueldo1 + sueldo2;
	cout << "---------------------------------------" << endl;
	cout << "LIQUIDACION MENSUAL CHOFERES" << endl;
	cout << "Nombre del chofer 1: " << chofer1 << setw(30) << "Total a cobrar: $ " << sueldo1 << endl;
	cout << "Nombre del chofer 2: " << chofer2 << setw(25) << "Total a cobrar: $ " << sueldo2 << endl;
	cout << "Total gral: $ " << total;
	return 0;
}

