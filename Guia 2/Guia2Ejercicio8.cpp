#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	string men;
	cout << "Ingrese año para determinar si es bisiesto: ";
	cin >> anio;
	if (anio%4 == 0)
	{
		men = "Bisiesto";
		if ((anio%4 == 0) && (anio%100 == 0) && (anio%400 != 0))
		{
			men = "No es bisiesto";
		}
	}
	else
	{
		if ((anio%4 == 0) && (anio%100 != 0))
		{
			men = "No es bisiesto";
		}
		else
		{
			if ((anio%100 == 0) && (anio%400 == 0))
			{
				men = "Bisiesto";
			}
			else
			{
				men = "No es bisiesto";
			}
		}
	}
	cout << "-----------------------------------------------------" << endl;
	cout << "Año: " << men;
	return 0;
}

