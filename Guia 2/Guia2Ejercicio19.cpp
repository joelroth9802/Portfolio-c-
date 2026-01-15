#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float cant, preciou, total, valorc, cod;
	string cartel;
	int nrocuotas, cod3;
	cout << "Ingrese el codigo del producto: ";
	cin >> cod;
	cout << "Ingrese la cantidad comprada: ";
	cin >> cant;
	cout << "Ingrese el precio del producto: ";
	cin >> preciou;
	cod3 = cod/10000000000;
	if (cod3 == 779)
	{
		cout << "Ingrese la cantidad de cuotas: ";
		cin >> nrocuotas;
		switch (nrocuotas)
		{
		case 3: 
			cartel = "comprado con el plan Ahora 3";
		case 6: 
			cartel = "comprado con el plan Ahora 6";
		default:
			cartel="-";
		}
	}
	else
	{
		nrocuotas = 1;
		cartel = "-";
	}
	total = preciou*cant;
	valorc = total/nrocuotas;
	cout << "Producto: " << cod << endl;
	cout << "Cantidad: " << cant << setw(30) << "Precio Unitario: $ " << preciou << endl;
	cout << "Total: " << total << endl;
	cout << "Cantidad de cuotas: " << nrocuotas << setw(30) << "Comprado con el plan: " << cartel << endl;
	cout << "Valor de la cuota: $ " << valorc;
	return 0;
}
