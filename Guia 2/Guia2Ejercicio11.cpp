#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float cuota, nSocio, total, aux;
	string nomclub, nya, tipo;
	cout << "Ingrese el valor base de la cuota: ";
	cin >> cuota;
	cin.ignore();
	cout << "Ingrese el nombre del club: ";
	getline(cin, nomclub);
	cout << "Ingrese número de socio: ";
	cin >> nSocio;
	cin.ignore();
	cout << "Ingrese nombre y apellido del socio: ";
	getline(cin, nya);
	cout << "Ingrese tipo de plan: ";
	cin >> tipo;
	if (tipo == "Base")
	{
		total = cuota;
	}
	else
	{
		if (tipo == "Familiar")
		{
			total = cuota*1.50;
		}
		else
		{
			if (tipo == "Cadete")
			{
				aux = cuota*0.20;
				total = cuota - aux;
			}
		}
	}
	cout << "--------------------------------------------------" << endl;
	cout << "Club: " << nomclub << endl;
	cout << "Nro. de socio: " << nSocio << setw(37) << "Nombre del socio: " << nya << endl;
	cout << "Tipo de socio: " << tipo << setw(30) << "Total a pagar: $ " << total;
	return 0;
}

