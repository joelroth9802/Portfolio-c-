#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nom, ant;
	int cont;
	cout << "Ingrese nombres aleatorios: ";
	cin >> nom;
	cont = 0;
	do
	{
		ant = nom;
		cont++;
		cin >> nom;
	} while(nom != ant);
	cout << "-------------------------------" << endl;
	cout << "Se ingresaron " << cont << " nombres";
	return 0;
}

