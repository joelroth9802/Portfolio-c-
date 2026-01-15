#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
/*Se desea realizar un informe con las cantidades de multas por exceso de velocidad que se labran
en el país durante un mes.
Se cuenta con la información que envían todos los municipios: código de provincia y cantidad de
multas. Un código de provincia igual a 99 indica el fin de datos.
Informe:
Nombre de la Provincia    Cantidad de multas
xxxxxxxxxxxxxxxxxxxx             xxxxx
xxxxxxxxxxxxxxxxxxxx             xxxxx
Total de multas: xxxxx
Utilice el archivo creado en el ejercicio anterior para obtener los nombres de las provincias*/
int main(int argc, char *argv[]) {
	ifstream provincias;
	int cod, multas[24] = {}, cant, total = 0;
	string prov[30];
	provincias.open("./PROVINCIAS.txt");
	if (provincias.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Lectura de los datos del archivo
		int i = 0, num[30];
		provincias >> num[i];
		provincias.ignore();
		getline(provincias,prov[i]);
		while (!provincias.eof())
		{
			provincias >> num[i];
			provincias.ignore();
			i++;
			getline(provincias,prov[i]);
		}
	}
	provincias.close();
	cout << "Datos de las Provincias" << endl;
	cout << "Ingrese código (del 0 al 23): ";
	cin >> cod;
	while (cod != 99)
	{
		cout << "Ingrese cantidad de multas: ";
		cin >> cant;
		multas[cod] += cant;//Acumulador de multas
		total += cant;//Acumulador del total de multas
		cout << endl;
		cout << "Ingrese código (del 0 al 23): ";
		cin >> cod;
	}
	cout << endl;
	//Informe
	cout << "-----------------------------------------------------------------------" << endl;
	cout << left << setw(30) << "Nombre de la Provincia" << right << setw(30) << "Cantidad de multas" << endl;
	for (int i = 0;i < 24;i++)
	{
		cout << left << setw(30) << prov[i] << right << setw(22) << multas[i] << endl;
	}
	cout << endl;
	cout << "Total de multas: " << total;
	return 0;
}

