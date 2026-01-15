#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cantPart, mTiemAnt, tiemEmpl, minTiemp, cont, cont1, cont2;
	string nya, nMinTiemp;
	cout << "Ingrese la cantidad de participantes: ";
	cin >> cantPart;
	cout << "Ingrese el mejor tiempo de la edición anterior: ";
	cin >> mTiemAnt;
	cont = 0; cont1 = 0; cont2 = 0; minTiemp = 9999;
	do
	{
		cin.ignore();
		cout << "Ingrese nombre y apellido: ";
		getline(cin, nya);
		cout << "Ingrese tiempo empleado en terminar la prueba: ";
		cin >> tiemEmpl;
		cont++;
		if ((tiemEmpl < minTiemp) && (tiemEmpl != 0))
		{
			minTiemp = tiemEmpl;
			nMinTiemp = nya;
		}
		if (tiemEmpl == 0)
		{
			cont1++;
		}
		if ((tiemEmpl < mTiemAnt) && (tiemEmpl != 0))
		{
			cont2++;
		}
	} while(cont < cantPart);
	cout << "----------------------------------------------" << endl;
	cout << "Nombre del ganador: " << nMinTiemp << endl;
	cout << "Nadadores que abandonaron la prueba: " << cont1 << endl;
	cout << "Nadadores que mejoraron el tiempo con respecto a la edición anterior: " << cont2;
	return 0;
}

