#include <iostream>
#include <iomanip>
using namespace std;
/*Se lee un vector A que contiene N números.
a) Realizar un algoritmo que ordene los números de menor a mayor e informar el vector ordenado.
b) Realizar una prueba del ejercicio, para un valor de N=8, con los siguientes datos: 7, 8, 14, 10, 24, 40,
4, 6*/
int main(int argc, char *argv[]) {
	//Variables
	int vector[200], cant, aux;
	//Datos
	cout << "Ingrese la cantidad de números para el arreglo: ";
	cin >> cant;
	cout << endl;
	cout << "Ingrese números para el arreglo: " << endl;
	for (int i = 0;i < cant;i++)
	{
		cout << "Nro " << i+1 << ": ";
		cin >> vector[i];
	}
	//Ordenamiento
	for (int i = 0;i < (cant-1);i++)
	{
		for (int j = i+1;j < cant;j++)
		{
			if (vector[i] > vector[j])
			{
			    aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
	//Informe
	cout << "--------------------------------------------------" << endl;
	for (int i = 0;i < cant;i++)
	{
		cout << vector[i] << setw(6);
	}
	return 0;
}

