#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cat1, cat2, cat3, cat4, cat5, cont;
	string pat, marca;
	int cat; long val, total; long totImp;
	cout << "Ingrese porcentajes de impuestos para cada categoria: " << endl;
	cout << "Categoria 1: ";
	cin >> cat1;
	cout << "Categoria 2: ";
	cin >> cat2;
	cout << "Categoria 3: ";
	cin >> cat3;
	cout << "Categoria 4: ";
	cin >> cat4;
	cout << "Categoria 5: ";
	cin >> cat5;
	cont = 0; total = 0;
	do
	{
		cin.ignore();
		cout << "Ingrese patente del vehiculo: ";
		getline(cin, pat);
		cout << "Ingrese marca: ";
		getline(cin, marca);
		cout << "Ingrese valor: ";
		cin >> val;
		cout << "Ingrese categoria: ";
		cin >> cat;
		switch (cat)
		{
		case 1:
			totImp = round((val*cat1)/100);
			break;
		case 2:
			totImp = round((val*cat2)/100);
			break;
		case 3:
			totImp = round((val*cat3)/100);
			break;
		case 4:
			totImp = round((val*cat4)/100);
			break;
		case 5:
			totImp = round((val*cat5)/100);
			break;
		}
		cout << "-----------------------------------------------" << endl;
		cout << "Patente: " << pat << endl;
		cout << "Valor: $ " << val << endl;
		cout << "Total a pagar de impuestos: $ " << totImp << endl;
		cout << "-----------------------------------------------" << endl;
		cont++;
		total += totImp;
	} while(cont < 5);
	cout << "Recaudación de impuestos totales: $ " << total;
	return 0;
}

