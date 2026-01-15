#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float costoMat, porLad;
	float pLad, ptotales, maxCosto, cMaxCosto;
	float obra1, obra2, obra3, obra4;
	string tipom; int cod;
	pLad = 0; ptotales = 0; maxCosto = 0;
	obra1 = 0; obra2 = 0; obra3 = 0; obra4 = 0;
	cout << "Ingrese código de la obra del 1 al 4: ";
	cin >> cod;
	while (cod != 9)
	{
		cin.ignore();
		cout << "L: Ladrillo - C: Cemento - O: Otros" << endl;
		cout << "Ingrese tipo de material: ";
		getline(cin, tipom);
		cout << "Ingrese costo de material retirado: ";
		cin >> costoMat;
		ptotales++;
		if (cod == 1)
		{
			obra1 += costoMat;
		}
		else
		{
			if (cod == 2)
			{
				obra2 += costoMat;
			}
			else
			{
				if (cod == 3)
				{
					obra3 += costoMat;
				}
				else
				{
					obra4 += costoMat;
				}
			}
		}
		if (tipom == "L")
		{
			pLad++;
		}
		if (costoMat > maxCosto)
		{
			maxCosto = costoMat;
			cMaxCosto = cod;
		}
		cout << "---------------------------------------------------------" << endl;
		cout << "Ingrese código de la obra del 1 al 4: ";
		cin >> cod;
	}
	porLad = floor((pLad/ptotales)*100);
	cout << "----------------------------------------------------" << endl;
	cout << "Costo total de cada obra en el mes: " << endl;
	cout << "Obra 1: $ " << obra1 << endl;
	cout << "Obra 2: $ " << obra2 << endl;
	cout << "Obra 3: $ " << obra3 << endl;
	cout << "Obra 4: $ " << obra4 << endl;
	cout << "Porcentaje de pedidos de ladrillos: % " << porLad << endl;
	cout << "Código de la obra que realizó el pedido de mayor costo: " << cMaxCosto;
	return 0;
}

