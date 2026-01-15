#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldoneto, aporte, sueldoliqui;
	cout << "Ingrese sueldo neto de la persona: ";
	cin >> sueldoneto;
	aporte = sueldoneto*0.16;
	sueldoliqui = sueldoneto - aporte;
	cout << "Aporte jubilatorio: $ " << aporte << endl;
	cout << "Sueldo líquido: $ " << sueldoliqui;
	return 0;
}

