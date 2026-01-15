#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float ladoC, baseR, alturaR, baseT, alturaT, lado1T, lado2T, radioC, area, perimetro;
	string figura;
	const double pi = 3.14159265358979323846;
	cout << "Ingrese el nombre de la figura: ";
	cin >> figura;
	if (figura == "Cuadrado")
	{
		cout << "Ingrese el valor de un lado del cuadrado: ";
		cin >> ladoC;
		area = ladoC*ladoC;
		perimetro = ladoC*4;
		cout << "--------------------------------------------" << endl;
		cout << "Area: " << area << " cm2" << endl;
		cout << "Perimetro: " << perimetro << " cm";
	}
	else
	{
		if (figura == "Rectangulo")
		{
			cout << "Ingrese el largo de la base: ";
			cin >> baseR;
			cout << "Ingrese el largo de la altura: ";
			cin >> alturaR;
			area = baseR*alturaR;
			perimetro = (baseR + alturaR)*2;
			cout << "----------------------------------" << endl;
			cout << "Area: " << area << " cm2" << endl;
			cout << "Perimetro: " << perimetro << " cm";
		}
		else
		{
			if (figura == "Triangulo")
			{
				cout << "Ingrese el largo de la base: ";
				cin >> baseT;
				cout << "Ingrese el largo de la altura: ";
				cin >> alturaT;
				cout << "Ingrese el valor de los 2 lados restantes: ";
				cin >> lado1T >> lado2T;
				area = (baseT*alturaT)/2;
				perimetro = baseT + lado1T + lado2T;
				cout << "--------------------------------------------" << endl;
				cout << "Area: " << area << " cm2" << endl;
				cout << "Perimetro: " << perimetro << " cm";
			}
			else
			{
				if (figura == "Circulo")
				{
					cout << "Ingrese el largo del radio: ";
					cin >> radioC;
					area = floor(pi*(pow(radioC,2)));
					perimetro = floor(2*pi*radioC);
					cout << "----------------------------------------" << endl;
					cout << "Area: " << area << " cm2" << endl;
					cout << "Perimetro: " << perimetro << " cm";
				}
			}
		}
	}
	return 0;
}

