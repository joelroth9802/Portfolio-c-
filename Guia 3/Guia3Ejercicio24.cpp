#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cantArt, pUnit, imporTot, subtotal, cont;
	imporTot = 0; cont = 1;
	cout << "Articulo " << cont << endl;
	cout << "Ingrese cantidad de unidades vendidas: ";
	cin >> cantArt;
	while (cantArt != 0)
	{
		cout << "Ingrese el precio del articulo: ";
		cin >> pUnit;
		if ((cantArt > 0) && (pUnit > 0))
		{
			cont++;
			cout << "Articulo " << cont << endl;
			subtotal = cantArt*pUnit;
			imporTot += subtotal;
		}
		else
		{
			cout << "Ha ingresado números negativos, intente de nuevo" << endl;
		}
		cout << "Ingrese cantidad de unidades vendidas: ";
		cin >> cantArt;
	}
	cout << "---------------------------------------------" << endl;
	cout << "Importe final de la factura: $ " << imporTot;
	return 0;
}

