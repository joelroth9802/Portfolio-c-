#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float vHoraCat, cHoraCat, sueldo, abono;
	long dni;
	string nMutual, nya, tDocente;
	cout << "Ingrese el valor de la hora cátedra: ";
	cin >> vHoraCat;
	cin.ignore();
	cout << "Ingrese nombre de la mutual: ";
	getline(cin, nMutual);
	cout << "Ingrese número de documento: ";
	cin >> dni;
	cin.ignore();
	cout << "Ingrese nombre y apellido: ";
	getline(cin, nya);
	cout << "Primario - Secundario - Terciario" << endl;
	cout << "Ingrese tipo de docente: ";
	getline(cin, tDocente);
	if (tDocente == "Primario")
	{
		sueldo = vHoraCat*36;
	}
	else
	{
		if ((tDocente == "Secundario") || (tDocente == "Terciario"))
		{
			cout << "Ingrese la cantidad de horas cátedra del docente: ";
			cin >> cHoraCat;
			sueldo = vHoraCat*cHoraCat;
		}
	}
	abono = sueldo*0.02;
	cout << "--------------------------------------------------------" << endl;
	cout << "Mutual: " << nMutual << endl;
	cout << "Nro de documento: " << dni << setw(41) << "Nombre del docente: " << nya << endl;
	cout << "Tipo de docente: " << tDocente << setw(30) << "Sueldo: $ " << sueldo << endl;
	cout << "Total a pagar: $ " << abono;
	return 0;
}

