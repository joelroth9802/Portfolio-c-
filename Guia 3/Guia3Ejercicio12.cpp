#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int num, acum, cont;
	string men;
	cout << "Ingrese números al azar: " << endl;
	cont = 0; acum = 0;
	do
	{
		cin >> num;
		cont++;
		acum += num;
	} while((cont < 10) && (acum <= 100));
	if (cont == 10)
	{
		men = "Se han introducido 10 números";
	}
	else
	{
		men = "La suma total de los números ingresados es mayor que 100";
	}
	cout << "---------------------------------------------" << endl;
	cout << men;
	return 0;
}

