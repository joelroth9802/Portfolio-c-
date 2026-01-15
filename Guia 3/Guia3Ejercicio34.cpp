#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	long cod, importe, subtotal, total, minSubtotal, minCod, totRapi, totOtros, cont, ant;
	string nUsuario, fechaPago, formaPago, lugarPago, mes;
	cout << "Ingrese mes de la facturación: ";
	getline(cin, mes);
	cout << "Ingrese código de la empresa: " << endl;
	cout << "1: Claro - 2: Personal - 3: Movistar - 4: Tuenti" << endl;
	cin >> cod;
	total = 0; minSubtotal = 99999999; totRapi = 0; totOtros = 0;
	while (cod != 99)
	{
		ant = cod; cont = 0; subtotal = 0;
		while (cod == ant)
		{
			cont++;
			cout << "Usuario " << cont << endl;
			cin.ignore();
			cout << "Ingrese nombre del usuario: ";
			getline(cin, nUsuario);
			cout << "Ingrese la fecha de pago: ";
			getline(cin, fechaPago);
			cout << "Ingrese importe del pago: ";
			cin >> importe;
			cin.ignore();
			cout << "Ingrese forma de pago (C: Contado - D: Débito - T: Tarjeta de crédito): ";
			getline(cin, formaPago);
			subtotal += importe;
			if ((formaPago == "Contado") && (cod == 2))
			{
				cout << "Ingrese el lugar de pago (Pago Fácil - Rapipago - Banco - Otros): ";
				getline(cin, lugarPago);
				if (lugarPago == "Rapipago")
				{
					totRapi += importe;
				}
			}
			else
			{
				if ((formaPago == "Contado") && (cod == 3))
				{
					cout << "Ingrese el lugar de pago (Pago Fácil - Rapipago - Banco - Otros): ";
					getline(cin, lugarPago);
					if (lugarPago == "Otros")
					{
						totOtros += importe;
					}
				}
			}
			cout << "-----------------------------------------------------" << endl;
			cout << "RESUMEN DEL MES: " << mes << endl;
			cout << "CODIGO DE EMPRESA: " << cod << endl;
			cout << "FECHA" << setw(30) << "USUARIO" << setw(30) << "IMPORTE" << setw(30) << "FORMA DE PAGO" << endl;
			cout << fechaPago << setw(28) << nUsuario << setw(23) << "$ " << importe << setw(26) << formaPago << endl;
			cout << "Total de la empresa: $ " << subtotal << endl;
			cout << "-----------------------------------------------------" << endl;
			cout << "Ingrese código de la empresa: " << endl;
			cout << "1: Claro - 2: Personal - 3: Movistar - 4: Tuenti" << endl;
			cin >> cod;
		}
		total += subtotal;
		if (subtotal < minSubtotal)
		{
			minSubtotal = subtotal;
			minCod = ant;
		}
	}
	cout << "--------------------------------------------------" << endl;
	cout << "TOTAL COBRO DE TODAS LAS EMPRESAS: $ " << total << endl;
	cout << "CODIGO DE EMPRESA DE MENOR RECAUDACION: " << minCod << endl;
	cout << "PERSONAL: TOTAL ABONO EN RAPIPAGO: $ " << totRapi << endl;
	cout << "MOVISTAR: TOTAL ABONADO EN OTROS LUGARES DE PAGO: $ " << totOtros << endl;
	return 0;
}

