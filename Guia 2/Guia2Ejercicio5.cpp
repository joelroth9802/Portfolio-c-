#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float imc, peso, est;
	string men;
	cout << "Ingrese su peso: ";
	cin >> peso;
	cout << "Ingrese su estatura en metros: ";
	cin >> est;
	imc = (peso/pow(est,2));
	if (imc <= 18.5)
	{
		men = "Debajo del normal";
	}
	else
	{
		if ((imc > 18.5) && (imc <= 25))
		{
			men = "Normal";
		}
		else
		{
			if ((imc > 25) && (imc <= 30))
			{
				men = "Sobrepeso";
			}
			else
			{
				men = "Obesidad";
			}
		}
	}
	cout << "---------------------------------------" << endl;
	cout << "Resultado: " << men;
	return 0;
}

