#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float temp, tf, tc;
	string unidad;
	cout << "Igrese una temperatura: ";
	cin >> temp;
	cout << "Ingrese unidad de medida C|F: ";
	cin >> unidad;
	cout << "-------------------------------------" << endl;
	if (unidad == "C")
	{
		tf = 9.0 / 5.0 * temp + 32;
	    cout << "Equivalencia en Fahrenheit: " << tf;
	}
	else
	{
		tc = temp - 32 * 5.0 / 9.0;
	    cout << "Equivalencia en Centigrados: " << tc;
	}
	return 0;
}

