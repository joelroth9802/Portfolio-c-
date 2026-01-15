#include <iostream>
#include <ctime>
using namespace std;
/*Realizar la siguiente aplicación:
1) Generar un vector VEC que contenga 10000 números al azar menores a 1.000.000
2) Genere otro vector DAT que contenga 100 números al azar menores a 1.000.000
3) Copie el vector VEC en otros dos:  MIN, BUR.
4) Busque secuencialmente cada valor del vector DAT en el vector VEC. Informe cuantas 
comparaciones se realizaron hasta finalizar las búsquedas.
5) Ordene el vector MIN por el método de mínimos sucesivos. Informe cuantas comparaciones se 
realizaron hasta finalizar el ordenamiento.
6) Ordene el vector BUR por el método de burbuja. Informe cuantas comparaciones se realizaron hasta 
finalizar el ordenamiento.
7) Busque en forma binaria cada valor del vector DAT en el vector BUR. Informe cuantas comparaciones
se realizaron hasta finalizar las búsquedas.*/
int main(int argc, char *argv[]) {
	int VEC[1000], DAT[100], MIN[1000], BUR[1000];
	srand(time(NULL));
	//Punto 1
	for (int i = 0;i < 1000;i++)
	{
		VEC[i] = (rand() % 1000) + 1;
		//Punto 3
		MIN[i] = VEC[i];
		BUR[i] = VEC[i];
	}
	//Punto 2
	for (int i = 0;i < 100;i++)
	{
		DAT[i] = (rand() % 1000) + 1;
	}
	//Punto 4
	int c = 0;
	cout << "Busqueda Secuencial" << endl;
	for (int i = 0;i < 100;i++)
	{
		int j = 0;
		for (j = 0;(j < 1000) && (DAT[i] != VEC[j]);j++)
			c++;
	}
	if (c <= 100000)
	{
		cout << "Cantidad de comparaciones que se realizaron: " << c << endl;
	}
	else
	{
		cout << "No se encontro ninguan igualdad." << endl;
	}
	cout << endl;
	//Punto 5
	int aux, comp = 0;
	cout << "Metodo Mínimos Sucesivos" << endl;
	for (int i = 0;i < (1000-1);i++)
	{
		for (int j = i+1;j < 1000;j++)
		{
			if (MIN[i] > MIN[j])
			{
				aux = MIN[i];
				MIN[i] = MIN[j];
				MIN[j] = aux;
				
				comp++;
			}
		}
	}
	cout << "Cantidad de comparaciones que se realizaron: " << comp << endl;
	cout << endl;
	//Punto 6
	cout << "Metodo Burbuja" << endl;
	int aux1, comp1 = 0;
	for (int i = 0;i < (1000-1);i++)
	{
		for (int j = 0;j < (1000-i-1);j++)
		{
			if (BUR[j] > BUR[j+1])
			{
				aux1 = BUR[j];
				BUR[j] = BUR[j+1];
				BUR[j+1] = aux1;
				
				comp1++;
			}
		}
	}
	cout << "Cantidad de comparaciones que se realizaron: " << comp1 << endl;
	cout << endl;
	//Punto 7
	cout << "Busqueda Binaria" << endl;
	int li, ls, medio, comp2 = 0;
	for (int i = 0;i < 100;i++)
	{
		li = 0; ls = 1000; medio = (li + ls)/2;
		while ((li <= ls) && (DAT[i] != BUR[medio]))
		{
			if (DAT[i] < BUR[medio])
				ls = medio - 1;
			else li = medio + 1;
			medio = (li + ls)/2;
			comp2++;
		}
	}
	if (comp2 <= 100000)
	{
		cout << "Cantidad de comparaciones que se realizaron: " << comp2 << endl;
	}
	else
	{
		cout << "No se encontro ninguan igualdad." << endl;
	}
	return 0;
}

