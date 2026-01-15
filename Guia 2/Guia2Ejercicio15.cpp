#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nomDist, ncliente, ncuotas;
	float precioZ, cant, cuotas, recar, desc, montoC, total;
	int formaP;
	cout << "Ingrese nombre de la distribuidora: ";
	getline(cin, nomDist);
	cout << "Ingrese nombre del cliente: ";
	getline(cin, ncliente);
	cout << "Ingrese precio de lista del zapato: ";
	cin >> precioZ;
	cout << "Ingrese cantidad del producto: ";
	cin >> cant;
	cout << "Ingrese la forma de pago: " << endl;
	cout << "1: Contado - 2: 6 cuotas - 3: 12 cuotas / Ingrese codigo: ";
	cin >> formaP;
	switch (formaP)
	{
		case 1: cuotas = 1;
		break;
	    case 2: cuotas = 6;
	    break;
	    case 3: cuotas = 12;
	    break;
	}
	total = cant*precioZ;
	if (cuotas == 1)
	{
		desc = total*0.10;
		recar = 0;
		total = total - desc;
		montoC = 0;
		ncuotas = "Contado";
	}
	else
	{
		if (cuotas == 6)
		{
			montoC = total/6;
			desc = 0;
			recar = 0;
			ncuotas = "6 cuotas";
		}
		else
		{
			recar = total*0.23;
			desc = 0;
			total = total + recar;
			montoC = total/12;
			ncuotas = "12 cuotas";
		}
	}
	cout << "----------------------------------------------" << endl;
	cout << "Nombre de la distribuidora: " << nomDist << endl;
	cout << "Nombre del cliente: " << ncliente << endl;
	cout << "Cantidad de zapatos vendidos: " << cant << endl;
	cout << "Precio de lista: $ " << precioZ << endl;
	cout << "Forma de pago: " << ncuotas << endl;
	cout << "Descuento: $ " << desc << " Recargo: $ " << recar << endl;
	cout << "Monto de la cuota: $ " << montoC << endl;
	cout << "Total a pagar: " << total;
	return 0;
}

