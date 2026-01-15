#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float anchoA, altoA, anchoB, altoB, anchoC, altoC, ancho, alto;
	float aux, aux1, sup1, sup2;
	string men1, men2, men3, resultado;
	cout << "Ingrese al ancho y alto de la pieza A: ";
	cin >> anchoA >> altoA;
	cout << "Ingrese el ancho y alto de la pieza B: ";
	cin >> anchoB >> altoB;
	cout << "Ingrese el ancho y alto de la pieza C: ";
	cin >> anchoC >> altoC;
	cout << "Ingrese el ancho y alto de la pieza para realizar la prueba de control: ";
	cin >> ancho >> alto;
	aux = anchoA*0.90;
	aux1 = anchoA*1.10;
	if ((ancho >= aux) && (ancho <= aux1))
	{
		men1 = "Aprobado";
	}
	else
	{
		men1 = "No aprobado";
	}
	aux = altoB*0.90;
	aux1 = altoB*1.10;
	if ((alto >= aux) && (alto <= aux1))
	{
		men2 = "Aprobado";
	}
	else
	{
		men2 = "No aprobado";
	}
	sup1 = anchoC*altoC;
	sup2 = ancho*alto;
	aux = sup1*0.95;
	aux1 = sup1*1.05;
	if ((sup2 >= aux) && (sup2 <= aux1))
	{
		men3 = "Aprobado";
	}
	else
	{
		men3 = "No aprobado";
	}
	if ((men1 == "Aprobado") && (men2 == "Aprobado"))
	{
		resultado = "Pieza aprobada";
	}
	else
	{
		if ((men2 == "Aprobado") && (men3 == "Aprobado"))
		{
			resultado = "Pieza aprobada";
		}
		else
		{
			if ((men1 == "Aprobado") && (men3 == "Aprobado"))
			{
				resultado = "Pieza aprobada";
			}
			else
			{
				resultado = "Pieza no aprobada";
			}
		}
	}
	cout << "-----------------------------------------------------" << endl;
	cout << "Primera evaluación: " << men1 << endl;
	cout << "Segunda evaluación: " << men2 << endl;
	cout << "Tercera evaluación: " << men3 << endl;
	cout << "Resultado final: " << resultado;
	return 0;
}

