#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float porcen1, porcen2, porcen3, cod, cuotaMen, cont;
	float maxCantPol, maxCodPol, maxCom, maxCodCom, ant, subTotalPolVen;
	long totalCapAseg, totalCom, totalCuotaMen, capitalAseg, totalPolVen, comi;
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
		cont = 0; totalCuotaMen = 0; ant = cod; subTotalPolVen = 0;
		while (cod == ant)
		{
			cont++;
			cout << "Venta " << cont << endl;
			cout << "Ingrese capital asegurado: ";
			cin >> capitalAseg;
			cout << "Ingrese cuota mensual a pagar: ";
			cin >> cuotaMen;
			totalCuotaMen += cuotaMen;
			cout << "Ingrese código de vendedor: ";
			cin >> cod;
		}
		subTotalPolVen += cont;
		totalCapAseg += capitalAseg;
		if (subTotalPolVen < 3)
		{
			comi = (porcen1*totalCuotaMen)/100;
		}
		else
		{
			if (subTotalPolVen < 5)
			{
				comi = (porcen2*totalCuotaMen)/100;
			}
			else
			{
				if (subTotalPolVen >= 5)
				{
					comi = (porcen3*totalCuotaMen)/100;
				}
			}
		}
		if (subTotalPolVen > maxCantPol)
		{
			maxCantPol = subTotalPolVen;
			maxCodPol = ant;
		}
		if (comi > maxCom)
		{
			maxCom = comi;
			maxCodCom = ant;
		}
		totalCom += comi;
		totalPolVen += subTotalPolVen;
		cout << "-----------------------------------------------------" << endl;
		cout << "Código de vendedor: " << ant << endl;
		cout << "Cantidad de pólizas vendidas: " << cont << endl;
		cout << "Comisión a recibir: $ " << comi << endl;
		cout << "-----------------------------------------------------" << endl;
	}
	cout << "Cantidad total de pólizas vendidas: " << totalPolVen << endl;
	cout << "Total de capital asegurado: $ " << totalCapAseg << endl;
	cout << "Código del vendedor que más polizas vendio: " << maxCodPol << endl;
	cout << "Código del vendedor que más comisión recibio: " << maxCodCom;
	return 0;
}

