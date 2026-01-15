#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	string men1, men2, men3;
	cout << "Ingrese un número: ";
	cin >> n;
	if (n < 0)
	{
		men1 = "Negativo";
	}
	else
	{
		if (n > 0)
		{
			men1 = "Positivo";
		}
		else
		{
			men1 = "Cero";
		}
	}
	if (n%2 == 0)
	{
		men2 = "Par";
	}
	else
	{
		men2 = "Impar";
	}
	if ((n%5 == 0) && (n%3 == 0))
	{
		men3 = "Si";
	}
	else
	{
		men3 = "No";
	}
	cout << "----------------------------------" << endl;
	cout << "Positivo o Negativo: " << men1 << endl;
	cout << "Par o Impar: " << men2 << endl;
	cout << "Multiplo de 5 y 3: " << men3;
	return 0;
}

