#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldo, nieto1, nieto2, nieto3, total;
	cout << "Ingrese el sueldo del abuelo: ";
	cin >> sueldo;
	cout << "Ingrese la edad del primer nieto: ";
	cin >> nieto1;
	cout << "Ingrese la edad del segundo nieto: ";
	cin >> nieto2;
	cout << "Ingrese la edad del tercer nieto: ";
	cin >> nieto3;
	sueldo *= 0.15;
	nieto1 = (nieto1*sueldo)/100;
	nieto2 = (nieto2*sueldo)/100;
	nieto3 = (nieto3*sueldo)/100;
	total = nieto1 + nieto2 + nieto3;
	cout << "------------------------------------" << endl;
	cout << "Total a repartir: $ " << total << endl;
	cout << "Primer nieto: $ " << nieto1 << endl;
	cout << "Segundo nieto: $ " << nieto2 << endl;
	cout << "Tercer nieto: $ " << nieto3;
	return 0;
}

