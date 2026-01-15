#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cod;
	float importe, puntos;
	cout << "Ingrese el importe de combustible cargado: ";
	cin >> importe;
	cout << "Ingrese codigo de combustible: " << endl;
	cout << "1: Infinia = 80" << endl; 
	cout << "2: Infinia Diesel = 75" << endl; 
	cout << "3: Super = 40" << endl;
	cout << "4: Ultra Diesel = 40" << endl;
	cout << "5: Diesel 500: 35" << endl;
	cout << "Ingrese codigo: ";
	cin >> cod;
	switch (cod)
	{
		case 1: puntos = (importe/1000)*80;
	    break;
	    case 2: puntos = (importe/1000)*75;
	    break;
	    case 3: puntos = (importe/1000)*40;
	    break;
	    case 4: puntos = (importe/1000)*40;
	    break;
	    case 5: puntos = (importe/1000)*35;
	    break;
	}
	if (importe > 3500)
	{
		puntos *= 2;
	}
	cout << "---------------------------------------------" << endl;
	cout << "Puntos: " << puntos;
	return 0;
}

