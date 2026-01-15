#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldo, ant, nhijos, imphijos, montant, addhijos;
	long total;
	string nya;
	cout << "Ingrese el importe a cobrar por cada hijo: ";
	cin >> addhijos;
	cin.ignore();
	cout << "Ingrese apellido y nombre: ";
	getline(cin, nya);
	cout << "Ingrese sueldo basico: ";
	cin >> sueldo;
	cout << "Ingrese antigüedad del empleado: ";
	cin >> ant;
	cout << "Ingrese número de hijos: ";
	cin >> nhijos;
	imphijos = addhijos*nhijos;
	if ((ant > 0) && (ant <= 5))
	{
		montant = sueldo*0.10;
		total = sueldo + montant;
	}
	else
	{
		if ((ant >= 6) && (ant <= 10))
		{
			montant = sueldo*0.25;
			total = sueldo + montant;
		}
		else
		{
			if ((ant >= 11) && (ant <= 15))
			{
				montant = sueldo*0.50;
				total = sueldo + montant;
			}
			else
			{
				if ((ant >= 16) && (ant <= 20))
				{
					montant = sueldo*0.80;
					total = sueldo + montant;
				}
				else
				{
					montant = sueldo;
					total = sueldo + montant;
				}
			}
		}
	}
	total += imphijos;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "Apellido y nombre: " << nya << setw(34) << "Adicional por hijo: $ " << addhijos << endl;
	cout << "Antigüedad: " << ant << " años" << setw(40) << "Cantidad de hijos: " << nhijos << endl;
	cout << "Sueldo básico: $ " << sueldo << setw(38) << "Importe por hijos: $ " << imphijos << endl;
	cout << "Monto antigüedad: $ " << montant << setw(30) << "Sueldo total: $ " << total;
	return 0;
}

