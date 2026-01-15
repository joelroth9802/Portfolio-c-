#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	string complejo[20][2], nomcompl, nompeli, ant, aux1;
	int entrvend, entradas[20][2], aux, totalentr = 0;
	//Carga de datos
	cout << "Ingrese nombre del complejo (Fin de datos = ZZZ): ";
	getline(cin, nomcompl);
	int c = 0;
	while (nomcompl != "ZZZ")
	{
		complejo[c][0] = nomcompl;
		int cargas = 0, cantentr = 0, maxcantentr = 0;
		string maxnompeli;
		ant = nomcompl;
		while (nomcompl == ant)
		{
			cout << "Nombre de la pelicula: ";
			getline(cin, nompeli);
			cout << "Entradas vendidas: ";
			cin >> entrvend;
			cargas++;//Acumulador para la cantidad de cargas por complejo
			totalentr += entrvend;//Acumulador para el total de entradas de la cadena
			cantentr += entrvend;//Acumulador para la cantidad de entradas por complejo
			//Máximo para obtener la pelicula más vista
			if (entrvend > maxcantentr)
			{
				maxcantentr = entrvend;
				maxnompeli = nompeli;
			}
			cin.ignore();
			cout << endl;
			cout << "Ingrese nombre del complejo (Fin de datos = ZZZ): ";
			getline(cin, nomcompl);
		}
		entradas[c][0] = cargas;//Orden de cargas
		entradas[c][1] = cantentr;//Cantidad de entradas
		complejo[c][1] = maxnompeli;//Peliculas más vistas
		c++;
	}
	cout << endl;
	//Ordenamiento según la cantidad de entradas por complejo
	for (int i = 0;i < (c-1);i++)
	{
		for (int j = i+1;j < c;j++)
		{
			if (entradas[i][1] < entradas[j][1])
			{
				for (int k = 0;k < 2;k++)
				{
					aux = entradas[i][k];
					entradas[i][k] = entradas[j][k];
					entradas[j][k] = aux;
					
					aux1 = complejo[i][k];
					complejo[i][k] = complejo[j][k];
					complejo[j][k] = aux1;
				}
			}
		}
	}
	//Informe
	cout << "--------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Complejo" << setw(30) << "Orden de Carga" << setw(30) << "Cant. Entr. Vendidas" << setw(30) << "Pel. Más Vista" << endl;
	for (int i = 0;i < c;i++)
	{
		cout << complejo[i][0] << setw(24) << entradas[i][0] << setw(27) << entradas[i][1] << setw(39) << complejo[i][1] << endl;
	}
	cout << endl;
	cout << "Total vendido en la cadena: " << totalentr;
	return 0;
}
