#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cantEmpl, cantExtrac, dia, montoRet, totalRet;
	float cont, recargo, cont2, totalRec, saldo, cantEmplSal0, totalRecF;
	string nya, tcajero; long dni;
	cout << "Ingrese la cantidad de empleados de la empresa: ";
	cin >> cantEmpl;
	cont = 0; totalRecF = 0; cantEmplSal0 = 0;
	do
	{
		cout << "Ingrese número de documento del empleado: ";
		cin >> dni;
		cin.ignore();
		cout << "Ingrese nombre y apellido: ";
		getline(cin, nya);
		cout << "Ingrese monto del sueldo depositado por la empresa: ";
		cin >> saldo;
		cout << "Ingrese cantidad de extracciones realizadas durante el mes: ";
		cin >> cantExtrac;
		cont++;
		cont2 = 0; totalRet = 0; totalRec = 0;
		do
		{
			cout << "Ingrese día de extracción: ";
			cin >> dia;
			cout << "Ingrese monto retirado: ";
			cin >> montoRet;
			cin.ignore();
			cout << "Ingrese tipo de cajero (C: Contratado - NC: No Contratado): ";
			getline(cin, tcajero);
			cont2++;
			if (tcajero == "NC")
			{
				recargo = floor(montoRet*0.02);
				montoRet -= recargo;
				totalRec += recargo;
			}
			totalRet += montoRet;
		} while(cont2 < cantExtrac);
		saldo -= totalRet;
		cout << "----------------------------------------------" << endl;
		cout << "Nombre y apellido: " << nya << " DNI: " << dni << endl;
		cout << "Monto total retirado: $ " << totalRet << endl;
		cout << "Monto total de recargo: $ " << totalRec << endl;
		cout << "Saldo de la cuenta: $ " << saldo << endl;
		cout << "----------------------------------------------" << endl;
		if (saldo == 0)
		{
			cantEmplSal0++;
		}
		totalRecF += totalRec;
	} while(cont < cantEmpl);
	cout << "Cantidad de empleados con saldo igual a 0: " << cantEmplSal0 << endl;
	cout << "Monto total retenido en concepto de recargo: $ " << totalRecF;
	return 0;
}

