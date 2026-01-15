#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float gine, pedi, trau, pres;
	cout << "Ingrese el monto del presupuesto para el hospital: ";
	cin >> pres;
	gine = pres*0.40;
	pedi = pres*0.30;
	trau = pres*0.30;
	cout << "-----------------------------------------------------" << endl;
	cout << "Presupuesto para ginecología: $ " << gine << endl;
	cout << "Presupuesto para traumatología: $ " << trau << endl;
	cout << "Presupuesto para pediatría: $ " << pedi;
	return 0;
}

