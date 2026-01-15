#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cantI, cont1, cont2, cont3, cont4, maxDeten, det;
	string apo, nMaxDeten;
	cout << "Ingrese apodo del detenido: ";
	getline(cin, apo);
	cantI = 0; cont1 = 0; cont2 = 0; cont3 = 0; cont4 = 0; maxDeten = 0;
	while (apo != "zzz")
	{
		cout << "Ingrese cantidad de veces detenido: ";
		cin >> det;
		if (det == 1)
		{
			cont1++;
		}
		else
		{
			if ((det >= 2) && (det <= 4))
			{
				cont2++;
			}
			else
			{
				if ((det >= 5) && (det <= 10))
				{
					cont3++;
				}
				else
				{
					cont4++;
				}
			}
		}
		if (det > maxDeten)
		{
			maxDeten = det;
			nMaxDeten = apo;
		}
		cantI++;
		cout << "-----------------------------------------" << endl;
		cin.ignore();
		cout << "Ingrese apodo del detenido: ";
		getline(cin, apo);
	}
	cout << "-----------------------------------------" << endl;
	cout << "Cantidad de detenciones" << setw(30) << "Cantidad de integrantes" << endl;
	cout << setw(13) << "1" << setw(30) << cont1 << endl;
	cout << setw(15) << "2 - 4" << setw(28) << cont2 << endl;
	cout << setw(16) << "5 - 10" << setw(27) << cont3 << endl;
	cout << setw(16) << "10 - ++" << setw(27) << cont4 << endl;
	cout << "Cantidad de integrantes encuestados: " << cantI << endl;
	cout << "Apodo del integrante con más detenciones: " << nMaxDeten;
	return 0;
}

