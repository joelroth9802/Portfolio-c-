#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int codEmpl, cantLitros, total;
	int totalSuper, totalPremium, totalDiesel;
	string pat, tipoComb;
	total = 0; totalDiesel = 0; totalPremium = 0; totalSuper = 0;
	cout << "Ingrese patente del vehiculo: ";
	getline(cin, pat);
	while (pat != "zzz")
	{
		cout << "Ingrese codigo del empleado: ";
		cin >> codEmpl;
		cin.ignore();
		cout << "Ingrese tipo de combustible (Super - Premium - Diesel): ";
		cin >> tipoComb;
		cout << "Ingrese cantidad de litros: ";
		cin >> cantLitros;
		if (tipoComb == "Super")
		{
			totalSuper += cantLitros;
		}
		else
		{
			if (tipoComb == "Premium")
			{
				totalPremium += cantLitros;
			}
			else
			{
				if (tipoComb == "Diesel")
				{
					totalDiesel += cantLitros;
				}
			}
		}
		total += cantLitros;
		cout << "---------------------------------------------" << endl;
		cin.ignore();
		cout << "Ingrese patente del vehiculo: ";
		getline(cin, pat);
	}
	cout << "Cantidad de litros vendidos: " << endl;
	cout << "Super: " << totalSuper << " litros" << endl;
	cout << "Premium: " << totalPremium << " litros" << endl;
	cout << "Diesel: " << totalDiesel << " litros" << endl;
	cout << "Total: " << total << " litros";
	return 0;
}
