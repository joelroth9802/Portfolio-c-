#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float nAdju, cantCuotas, total, cont, deuda;
	float maxCuotas, maxDeuda, minCuotas, minDeuda;
	string nya, nMaxCuotas, nMinDeuda;
	cout << "Ingrese la cantidad de adjudicatarios deudores: ";
	cin >> nAdju;
	total = 0; cont = 0; maxCuotas = 0; minDeuda = 999999;
	do
	{
		cin.ignore();
		cout << "Ingrese nombre y apellido del adjudicatario: ";
		getline(cin, nya);
		cout << "Ingrese cantidad de cuotas en moratoria: ";
		cin >> cantCuotas;
		cout << "Ingrese total adeudado: ";
		cin >> deuda;
		if (cantCuotas > maxCuotas)
		{
			maxCuotas = cantCuotas;
			nMaxCuotas = nya;
			maxDeuda = deuda;
		}
		if (deuda < minDeuda)
		{
			minDeuda = deuda;
			nMinDeuda = nya;
			minCuotas = cantCuotas;
		}
		total += deuda;
		cont++;
	} while(cont < nAdju);
	cout << "----------------------------------------------------" << endl;
	cout << "Deuda Total al IAPV: $ " << total << endl;
	cout << "Información de Adjudicatarios" << endl;
	cout << "Adjud. con mayor cantidad de cuotas en mora: " << nMaxCuotas << endl;
	cout << "Cantidad de Cuotas: " << maxCuotas << endl;
	cout << "Deuda: $ " << maxDeuda << endl;
	cout << "Adjud. con menor monto de deuda: " << nMinDeuda << endl;
	cout << "Cantidad de Cuotas: " << minCuotas << endl;
	cout << "Deuda: $ " << minDeuda;
	return 0;
}

