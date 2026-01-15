#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float precioP, cantP, desc, total;
	string formaP;
	cout << "Ingrese el precio del pasaje: ";
	cin >> precioP;
	cout << "Ingrese la cantidad de pasajes: ";
	cin >> cantP;
	cout << "Contado - Debito - Crédito" << endl;
	cout << "Ingrese forma de pago: ";
	cin >> formaP;
	total = precioP*cantP;
	if ((formaP == "Contado") && (cantP >= 2) && (cantP < 4))
	{
		desc = total*0.10;
		total -= desc;
	}
	else
	{
		if ((formaP == "Contado") && (cantP >= 4))
		{
			desc = total*0.15;
			total -= desc;
		}
		else
		{
			if (((formaP == "Debito") || (formaP == "Credito")) && ((cantP >= 2) && (cantP < 4)))
			{
				desc = total*0.05;
				total -= desc;
			}
			else
			{
				if (((formaP == "Debito") || (formaP == "Credito")) && (cantP >= 4))
				{
					desc = total*0.10;
					total -= desc;
				}
				else
				{
					if ((formaP == "Contado") && (cantP < 2))
					{
						desc = total*0.05;
						total -= desc;
					}
					else
					{
						desc = 0;
					}
				}
			}
		}
	}
	cout << "------------------------------------------------------------------" << endl;
	cout << "Descuento realizado: " << desc << endl;
	cout << "Total a pagar: " << total;
	return 0;
}

