#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Se necesita generar un archivo con los nombres de las 24 provincias. De acuerdo al orden de
ingreso se les asigna un código (entre 0 y 23).
En el archivo PROVINCIAS.TXT se almacena, por renglón, código y nombre separados por espacio
en blanco.*/
int main(int argc, char *argv[]) {
	//Variables
	ofstream provincias;
	string prov;
	provincias.open("./PROVINCIAS.txt");//Se abre archivo
	if (provincias.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Escritura de datos
		cout << "Ingrese los nombres de las 24 Provincias" << endl;
		for (int i = 0;i < 24;i++)
		{
			cout << "Provincia " << i << ": ";
			getline(cin, prov);
			provincias << i << " " << prov << endl;
		}
	}
	provincias.close();
	return 0;
}

