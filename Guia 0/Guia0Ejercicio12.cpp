#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float cap, razon, plazo, interes, cuota;
	cout << "Ingrese el capital solicitado: ";
	cin >> cap;
	cout << "Ingrese el porcentaje de tasa anual: ";
	cin >> razon;
	cout << "Ingrese el plazo del prestamo solicitado: ";
	cin >> plazo;
	interes = (cap*razon*plazo)/(100*12);
	cuota = (cap + interes)/12;
	cout << "---------------------------------------------" << endl;
	cout << "El valor de la cuota es de: $ " << cuota;
	return 0;
}

