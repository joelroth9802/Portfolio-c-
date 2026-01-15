#include <iostream>
#include <string>
using namespace std;
/*Ingrese una cadena de caracteres e informe la segunda palabra de la misma.*/
int main(int argc, char *argv[]) {
	string cadena;
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, cadena);
	int primerp = cadena.find(" ");
	cout << "-----------------------------------------------" << endl;
	if (primerp == -1)
	{
		cout << "La cadena de caracteres tiene una sola palabra.";
	}
	else
	{
		int segundap = cadena.find(" ", primerp + 1);
		string subcadena(cadena,primerp + 1, segundap - primerp - 1);
		cout << "La segunda palabra es: " << subcadena;
	}
	return 0;
}

