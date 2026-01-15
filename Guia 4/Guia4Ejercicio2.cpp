#include <iostream>
#include <string>
using namespace std;
/*Ingresar una cadena de caracteres y luego 2 valores que representan la posición inicial y la
final. Informar la subcadena comprendida entre ambas posiciones.*/
int main(int argc, char *argv[]) {
	string cadena; int valorI, valorF;
	cout << "Ingrese una de cadena de caracteres: ";
	getline(cin, cadena);
	cout << "Ingrese dos valores que representen el valor inicial y final de la cadena: " << endl;
	cin >> valorI >> valorF;
	valorI -= 1;
	string subcadena(cadena,valorI,valorF);
	cout << "-------------------------------------" << endl;
	cout << subcadena;
	return 0;
}

