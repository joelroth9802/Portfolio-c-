#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cant, cont, tSoja, totalTon;
	string pat, ayn, tCereal;
	cont = 0; tSoja = 0; totalTon = 0;
	cout << "Ingrese patente del camión: ";
	getline(cin, pat);
	while (pat != "XYZ123")
	{
		cout << "Ingrese apellido y nombre del remitente: ";
		getline(cin, ayn);
		cout << "Ingrese tipo de cereal (MAIZ - SOJA - GIRASOL): ";
		getline(cin, tCereal);
		cout << "Ingrese cantidad de toneladas: ";
		cin >> cant;
		if (tCereal == "SOJA")
		{
			tSoja += cant;
		}
		cont++;
		totalTon += cant;
		cin.ignore();
		cout << "----------------------------------------------------" << endl;
		cout << "Ingrese patente del camión: ";
		getline(cin, pat);
	}
	cout << "----------------------------------------------------" << endl;
	cout << "Camiones que descargaron cereal durante el día: " << cont << endl;
	cout << "Toneladas de soja que se acopiaron durante el día: " << tSoja << endl;
	cout << "Total de toneladas acopiadas durante el día: " << totalTon;
	return 0;
}

