#include <iostream>
#include <string>
#include <climits>
#include <cmath>
using namespace std;
/*Se ingresa en arreglos la siguiente información: distancia hasta Oro Verde, nombre de la ciudad. Se 
ingresa la información de 100 ciudades, sin orden.
Se pide: ingresar una distancia e informar, si existe una ciudad que se encuentre a dicha distancia, o los 
kilómetros que faltan para la ciudad más cercana.*/
int main(int argc, char *argv[]) {
	//Variables
	string ciudad[10], minCiudad;
	//INT_MAX es para poner el valor maximo, en vez de poner 99999, se usa con la libreria CLIMITS
	int difer, min = INT_MAX, busqueda, dis[10];
	//Carga de datos
	for (int i = 0;i < 10;i++)
	{
		cout << "Ciudad " << i+1 << endl;
		cout << "Ingrese distancia de la ciudad hasta Oro Verde: ";
		cin >> dis[i];
		cin.ignore();
		cout << "Nombre: ";
		getline(cin, ciudad[i]);
		cout << endl;
	}
	cout << "---------------------------------------------------------------------" << endl;
	//Busqueda
	cout << "Ingrese distancia (km) para encontrar la ciudad más cercana: ";
	cin >> busqueda;
	int i = 0;
	for (i = 0;(i < 10) && (busqueda != dis[i]);i++)
	{
		//Calculo para obtener la ciudad mas cercana al kilometro que se ingreso
		difer = abs(busqueda - dis[i]);//abs es para obtener el valor absoluto de un calculo, se usa con la libreria cmath
		if (difer < min)
		{
			min = difer;
			minCiudad = ciudad[i];
		}
	}
	//Informe
	if (i < 10)
	{
		cout << "La ciudad que se encuentra en el kilómetro " << busqueda << " es " << ciudad[i];
	}
	else
	{
		cout << "La ciudad más cercana es " << minCiudad << " y se encuentra a " << min << " km de distancia.";
	}
	return 0;
}

