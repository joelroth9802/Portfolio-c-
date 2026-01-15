#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float importe, precio, total;
	int zona;
	cout << "Ingrese el precio del alquiler: ";
	cin >> precio;
	cout << "Ingrese la zona donde se encuentra la vivienda: " << endl;
	cout << "1: Centro - 2: Residencial - 3: Barrio / Ingrese nro: ";
	cin >> zona;
	switch (zona)
	{
		case 1: importe = precio*0.15;
				total = precio + importe;
		break;
	    case 2: importe = precio*0.10;
				total = precio + importe;
	    break;
	    case 3: importe = precio*0.08;
	            total = precio + importe;
	    break;
	}
	cout << "-------------------------------------------------------" << endl;
	cout << "Precio base del alquiler: $ " << precio << endl;
	cout << "Monto de impuestos y comisiones: $ " << importe << endl;
	cout << "Total a pagar por el inquilino: $ " << total;
	return 0;
}

