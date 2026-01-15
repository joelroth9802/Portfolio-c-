#include <iostream>
using namespace std;
/*Ingrese una cadena de caracteres e informe si la misma tiene más de una palabra, la letra
con la que empieza y la letra con la que termina.*/
int main(int argc, char *argv[]) {
	string cadena;
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, cadena);
	int pos = cadena.find(" ");
	char letraI = cadena[0];
	char letraF = cadena[cadena.size()-1];
	if (pos != -1)
	{
		cout << "La cadena de caracteres tiene más de una palabra." << endl;
		cout << "Letra inicial: " << letraI << endl;
		cout << "Letra final: " << letraF;
	}
	else
	{
		cout << "La cadena de caracteres tiene una sola palabra." << endl;
		cout << "Letra inicial: " << letraI << endl;
		cout << "Letra final: " << letraF;
	}
	return 0;
}

