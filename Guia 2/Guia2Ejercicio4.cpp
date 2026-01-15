#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int nlado1, nlado2, nlado3, nper;
	string men;
	cout << "Ingrese 1er lado: ";
	cin >> nlado1;
	cout << "Ingrese 2do lado: ";
	cin >> nlado2;
	cout << "Ingrese 3er lado: ";
	cin >> nlado3;
	if (nlado1 == nlado2)
	{
		if (nlado1 == nlado3)
		{
			men = "Equilatero";
		}
		else
		{
			men = "Isosceles";
		}
	}
	else
	{
		if (nlado1 == nlado3)
		{
			men = "Isosceles";
		}
		else
		{
			if (nlado2 == nlado3)
			{
				men = "Isosceles";
			}
			else
			{
				men = "Escaleno";
			}
		}
	}
	nper = nlado1 + nlado2 + nlado3;
	cout << "Tipo de triangulo: " << men << endl;
	cout << "Perimetro del triangulo: " << nper;
	return 0;
}

