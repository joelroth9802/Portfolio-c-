#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*Cargar un vector con N palabras. Luego intercambiar los valores del vector: el 1ero con el
enésimo, el 2do con el enésimo -1, y así sucesivamente. Informar en 2 strings el vector
original y el intercambiado.*/
int main(int argc, char *argv[]) {
	string cadena[5], cadena2[5], aux;
	int c, p;
	//Se lee las 5 palabras y luego en el mismo bucle el segundo vector toma el valor de la primera cadena
	//el ultimo elemento de la segundo vector toma el valor del primer elemento del primer vector
	cout << "Ingrese 5 palabras: " << endl;
	c = 0; p = 5;
	for (int i = 0;i < 5;i++)
	{
		cout << "Palabra " << ++c << ": ";
		getline(cin, cadena[i]);
		cadena2[--p] = cadena[i];
	}
	//Se intercambian los valores del primer vector por el segundo usando una variable auxiliar
	p = 5;
	for (int i = 0;i < 5;i++)
	{
		aux = cadena[i];
		cadena[i] = cadena2[--p];
		cadena2[p] = aux;
	}
	cout << "------------------------------------------------" << endl;
	//Se muestra en pantalla el vector original y el vector intercambiado
	cout << "Vector Original" << setw(30) << "Vector intercambiado" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << setw(10) << cadena[i] << setw(28) << cadena2[i] << endl;
	}
	return 0;
}

