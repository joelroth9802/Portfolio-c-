#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	long anio, numSuc, dVenta, montoVenta, ant, subtotal, total, minSubtotal, minNumSuc, cont;
	string formaPago, mes;
	cout << "Ingrese el año del mes a facturar: ";
	cin >> anio;
	cin.ignore();
	cout << "Ingrese el mes a facturar: ";
	getline(cin, mes);
	cout << "Ingrese número de sucursal: ";
	cin >> numSuc;
	total = 0; minSubtotal = 9999999;
	while (numSuc != 999)
	{
		ant = numSuc; cont = 0; subtotal = 0;
		while (numSuc == ant)
		{
			cont++;
			cout << "Venta " << cont << endl;
			cout << "Ingrese día de la venta: ";
			cin >> dVenta;
			cin.ignore();
			cout << "Ingrese forma de pago (Efectivo - Tarjeta de crédito): ";
			getline(cin, formaPago);
			cout << "Ingrese monto de la venta: ";
			cin >> montoVenta;
			subtotal += montoVenta;
			cout << "-----------------------------------------------------" << endl;
			cout << "FARMACIA ENTRE RIOS      AÑO: " << anio << " MES: " << mes << endl;
			cout << "NRO DE SUCURSAL: " << numSuc << endl;
			cout << "FORMA DE PAGO" << setw(30) << "MONTO DE LA VENTA" << endl;
			cout << formaPago << setw(25) << "$ " << montoVenta << endl;
			cout << "TOTAL FACTURADO POR SUCURSAL NRO " << numSuc << ": $ " << subtotal << endl;
			cout << "-----------------------------------------------------" << endl;
			cout << "Ingrese número de sucursal: ";
			cin >> numSuc;
		}
		if (subtotal < minSubtotal)
		{
			minSubtotal = subtotal;
			minNumSuc = ant;
		}
		total += subtotal;
	}
	cout << "----------------------------------------------------" << endl;
	cout << "Total facturado por todas las sucursales: $ " << total << endl;
	cout << "Número de la sucursal que menos facturo en el mes: " << minNumSuc;
	return 0;
}

