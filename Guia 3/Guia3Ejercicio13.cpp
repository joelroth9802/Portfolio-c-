#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float cant, total, cont, subtotal, preciou;
	int art1, art2, art3, art4, art5, cod;
	float totalart1, totalart2, totalart3, totalart4, totalart5;
	long maxVent;
	string nya, nMaxVent;
	cout << "Ingrese los precios de los 5 articulos, del 1 al 5: ";
	cin >> art1 >> art2 >> art3 >> art4 >> art5;
	cont = 0; total = 0; maxVent = 0;
	totalart1 = 0; totalart2 = 0; totalart3 = 0; totalart4 = 0; totalart5 = 0;
	cin.ignore();
	cout << "Ingrese nombre del cliente: ";
	getline(cin, nya);
	while (nya != "zzz")
	{
		cout << "Ingrese cantidad de articulos: ";
		cin >> cant;
		cout << "Ingrese codigo de articulos: ";
		cin >> cod;
		switch (cod)
		{
		case 1:
			preciou = art1;
			totalart1 += (cant*art1);
			subtotal = totalart1;
			break;
		case 2:
			preciou = art2;
			totalart2 += (cant*art2);
			subtotal = totalart2;
			break;
		case 3:
			preciou = art3;
			totalart3 += (cant*art3);
			subtotal = totalart3;
			break;
		case 4:
			preciou = art4;
			totalart4 += (cant*art4);
			subtotal = totalart4;
			break;
		case 5:
			preciou = art5;
			totalart5 += (cant*art5);
			subtotal = totalart5;
			break;
		}
		total += subtotal;
		cont++;
		if (subtotal > maxVent)
		{
			maxVent = subtotal;
			nMaxVent = nya;
		}
		cout << "---------------------------------------------" << endl;
		cin.ignore();
		cout << "Ingrese nombre del cliente: ";
		getline(cin, nya);
	}
	cout << "---------------------------------------------" << endl;
	cout << "Monto total de ventas: $ " << total << endl;
	cout << "Venta total art 1: $ " << totalart1 << endl;
	cout << "Venta total art 2: $ " << totalart2 << endl;
	cout << "Venta total art 3: $ " << totalart3 << endl;
	cout << "Venta total art 4: $ " << totalart4 << endl;
	cout << "Venta total art 5: $ " << totalart5 << endl;
	cout << "Cantidad de ventas realizadas: " << cont << endl;
	cout << "Cliente con mayor venta: " << nMaxVent;
	return 0;
}

