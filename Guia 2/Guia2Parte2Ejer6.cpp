#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float venMen, porcen, com;
	cout << "Ingrese el total de ventas mensuales: ";
	cin >> venMen;
	if ((venMen > 0) && (venMen < 100000))
	{
		porcen = 3;
		com = (porcen*venMen)/100;
	}
	else
	{
		if ((venMen >= 100000) && (venMen < 250000))
		{
			porcen = 5;
			com = (porcen*venMen)/100;
		}
		else
		{
			if ((venMen >= 250000) && (venMen < 450000))
			{
				porcen = 7;
				com = (porcen*venMen)/100;
			}
			else
		    {
				porcen = 10;
				com = (porcen*venMen)/100;
			}
		}
	}
	cout << "-----------------------------------------------" << endl;
	cout << "Comisión a cobrar: " << com << endl;
	cout << "Porcentaje aplicado: % " << porcen;
	return 0;
}

