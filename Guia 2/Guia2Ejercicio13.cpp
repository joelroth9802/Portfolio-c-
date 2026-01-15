#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float nota, par1, par2, par3, promo, regul, promedio;
	string concep, cond;
	cout << "Ingrese la nota del primer parcial: ";
	cin >> par1;
	cout << "Ingrese la nota del segundo parcial: ";
	cin >> par2;
	cout << "Ingrese la nota del tercer parcial: ";
	cin >> par3;
	cout << "Ingrese el valor minimo para promocionar: ";
	cin >> promo;
	cout << "Ingrese el valor minimo para regularizar: ";
	cin >> regul;
	cout << "--------------------------------------------" << endl;
	promedio = par1 + par2 + par3;
	promedio = promedio/3;
	nota = round((promedio - promo)*6/(100 - promo) + 4);
	if ((nota == 4) || (nota == 5))
	{
		concep = "Concepto: Aprobado";
	}
	else
	{
		if ((nota == 6) || (nota == 7))
		{
			concep = "Bueno";
		}
		else
		{
			if ((nota == 8) || (nota == 9))
			{
				concep = "Distinguido";
			}
			else
			{
				concep = "Sobresaliente";
			}
		}
	}
	if (promedio < regul)
	{
		cout << "Condición: Alumno Libre";
	}
	else
	{
		if (promedio < promo)
		{
			cout << "Condición: Alumno Regular";
		}
		else
		{
			if (promedio >= promo)
			{
				cout << "Condición: Alumno Promocionado" << endl;
				cout << "Nota: " << nota << endl;
				cout << "Concepto " << concep;
			}
		}
	}
	return 0;
}

