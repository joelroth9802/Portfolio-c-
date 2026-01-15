#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float porcen1, porcen2, porcen3, cod, cantPol, cuotaMen, cont, comi;
	float totalPolVen, maxCantPol, maxCodPol, maxCom, maxCodCom;
	long subTotalCapAseg, totalCapAseg, totalCom, totalCuotaMen, capitalAseg;
	cout << "Porcentaje a pagar de comisión en base a las polizas vendidas: " << endl;
	cout << "Para menos de 10 polizas vendidas: ";
	cin >> porcen1;
	cout << "Para menos de 50 polizas vendidas: ";
	cin >> porcen2;
	cout << "Para 50 o más polizas vendidas: ";
	cin >> porcen3;
	totalPolVen = 0; totalCapAseg = 0; totalCom = 0; maxCantPol = 0; maxCom = 0;
	cout << "Ingrese código de vendedor: ";
	cin >> cod;
	while (cod != 0)
	{
		cout << "Ingrese cantidad de polizas vendidas: ";
		cin >> cantPol;
		cont = 0; subTotalCapAseg = 0; totalCuotaMen = 0;
		do
		{
			cont++;
			cout << "Póliza " << cont << endl;
			cout << "Ingrese capital asegurado: ";
			cin >> capitalAseg;
			cout << "Ingrese cuota mensual a pagar: ";
			cin >> cuotaMen;
			subTotalCapAseg += capitalAseg;
			totalCuotaMen += cuotaMen;
		} while(cont < cantPol);
		cout << "------------------------------------------------" << endl;
		totalPolVen += cantPol;
		totalCapAseg += subTotalCapAseg;
		if (cantPol < 3)
		{
			comi = (porcen1*totalCuotaMen)/100;
		}
		else
		{
			if (cantPol < 5)
			{
				comi = (porcen2*totalCuotaMen)/100;
			}
			else
			{
				if (cantPol >= 5)
				{
					comi = (porcen3*totalCuotaMen)/100;
				}
			}
		}
		if (cantPol > maxCantPol)
		{
			maxCantPol = cantPol;
			maxCodPol = cod;
		}
		if (comi > maxCom)
		{
			maxCom = comi;
			maxCodCom = cod;
		}
		totalCom += comi;
		cout << "Ingrese código de vendedor: ";
		cin >> cod;
	}
	cout << "--------------------------------------------" << endl;
	cout << "Cantidad total de pólizas vendidas: " << totalPolVen << endl;
	cout << "Total de capital asegurado: $ " << totalCapAseg << endl;
	cout << "Código del vendedor que más polizas vendio: " << maxCodPol << endl;
	cout << "Código del vendedor que más comisión recibio: " << maxCodCom;
	return 0;
}

