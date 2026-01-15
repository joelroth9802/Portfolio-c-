#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Se necesita generar un archivo con la cantidad de detenciones de los integrantes de las barras
bravas de un club. El archivo debe contener la información: apodo y la cantidad de veces que estuvo
detenido.
El final de datos se determina con apodo igual a ‘ZZZ’.
Nombre al archivo “BARRAS.TXT”.
En el archivo se almacena, por renglón, apodo y cantidad de detenciones separados por ‘|’*/
int main(int argc, char *argv[]) {
	ofstream archivo;//Archivo para escritura
	//Variables
	int cantdet, k = 1;
	string apodo;
	archivo.open("./BARRAS.txt");//Se abre el archivo
	if (archivo.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Carga de datos
		cout << "Datos de las Detenciones" << endl;
		cout << endl;
		cout << "Integrante 1" << endl;
		cout << "Para finalizar con la carga de datos, ingrese ZZZ" << endl;
		cout << "Ingrese apodo: ";
		getline(cin, apodo);
		while (apodo != "ZZZ")
		{
			cout << "Ingrese cantidad de detenciones: ";
			cin >> cantdet;
			archivo << apodo << " | " << cantdet << endl;
			cout << endl;
			cout << "Integrante " << ++k << endl;
			cin.ignore();
			cout << "Ingrese apodo: ";
			getline(cin, apodo);
		}
	}
	archivo.close();
	return 0;
}
	

