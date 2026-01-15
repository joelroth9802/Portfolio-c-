#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float cantSucur, cantCaje, cantMil, cantQuin, cantDos, cantCien;
	float cont, acum1000, acum500, acum200, acum100, cajFalt;
	float total1000, total500, total200, total100;
	float totalrep1000, totalrep500, totalrep200, totalrep100;
	string nomSucur, ant;
	cout << "Ingrese nombre de la sucursal: ";
	getline(cin, nomSucur);
	cajFalt = 0; totalrep1000 = 0; totalrep500 = 0; totalrep200 = 0; totalrep100 = 0;
	while (nomSucur != "zzz")
	{
		cont = 0; acum1000 = 0; acum500 = 0; acum200 = 0; acum100 = 0; ant = nomSucur; cantCaje = 0;
		while (nomSucur == ant)
		{
			cont++;
			cantCaje++;
			cout << "Cajero " << cont << ":" << endl;
			cout << "Ingrese la cantidad de billetes de 1000: ";
			cin >> cantMil;
			cout << "Ingrese la cantidad de billetes de 500: ";
			cin >> cantQuin;
			cout << "Ingrese la cantidad de billetes de 200: ";
			cin >> cantDos;
			cout << "Ingrese la cantidad de billetes de 100: ";
			cin >> cantCien;
			acum1000 += cantMil;
			acum500 += cantQuin;
			acum200 += cantDos;
			acum100 += cantCien;
			if ((cantMil + cantQuin + cantDos + cantCien) < 13000)
			{
				cajFalt++;
			}
			cin.ignore();
			cout << "Ingrese nombre de la sucursal: ";
			getline(cin, nomSucur);
		}
		total1000 = (1000*cantCaje) - acum1000;
		total500 = (2000*cantCaje) - acum500;
		total200 = (5000*cantCaje) - acum200;
		total100 = (5000*cantCaje) - acum100;
		cout << "--------------------------------------------------------------" << endl;
		cout << "Sucursal: " << nomSucur << endl;
		cout << "Cantidad de billetes de $1000 a reponer: " << total1000 << endl;
		cout << "Cantidad de billetes de $500 a reponer: " << total500 << endl;
		cout << "Cantidad de billetes de $200 a reponer: " << total200 << endl;
		cout << "Cantidad de billetes de $100 a reponer: " << total100 << endl;
		cout << "--------------------------------------------------------------" << endl;
		if (total1000 > ((1000*cantCaje)*0.90))
		{
			total1000 = 0;
		}
		else
		{
			if (total500 > ((2000*cantCaje)*0.90))
			{
				total500 = 0;
			}
			else
			{
				if (total200 > ((5000*cantCaje)*0.90))
				{
					total200 = 0;
				}
				else
				{
					if (total100 > ((5000*cantCaje)*0.90))
					{
						total100 = 0;
					}
				}
			}
		}
		totalrep1000 += total1000;
		totalrep500 += total500;
		totalrep200 += total200;
		totalrep100 += total100;
	}
	cout << "Cantidad total de cajeros con faltante: " << cajFalt << endl;
	cout << "Cantidad total de billetes de $1000 a reponer: " << totalrep1000 << endl;
	cout << "Cantidad total de billetes de $500 a reponer: " << totalrep500 << endl;
	cout << "Cantidad total de billetes de $200 a reponer: " << totalrep200 << endl;
	cout << "Cantidad total de billetes de $100 a reponer: " << totalrep100;
	return 0;
}

