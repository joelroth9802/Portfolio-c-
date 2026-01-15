#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cont, num, acum;
	float prom;
	cout << "Ingrese valores enteros reiteradamente: ";
	cin >> num;
	cont = 0; acum = 0;
	while (num != 0)
	{
		cont++;
		acum += num;
		cin >> num;
	}
	prom = acum/cont;
	cout << "------------------------------" << endl;
	cout << "Valor medio de los números ingresados: " << prom << endl;
	cout << "Cantidad de números ingresados: " << cont;
	return 0;
}

