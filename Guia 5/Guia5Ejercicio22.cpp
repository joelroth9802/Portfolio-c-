#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
/*Genere una matriz de N x M con números al azar menores a 100. Luego recorra las
columnas de arriba a abajo y determine la cantidad de casos en los que valores de celdas
contiguas son números consecutivos decrecientes.
Luego de terminado el proceso realice un informe indicando nro de columna – cantidad de
ocurrencias. El valor de N y M se ingresan como primeros datos.*/
int main(int argc, char *argv[]) {
	//Declaración de variables
	int matriz[50][50], ocurrencias[50], cont, N, M;
	//Se leen los datos de filas y columnas
	cout << "Ingrese la cantidad de filas: ";
	cin >> N;
	cout << "Ingrese la cantidad de columnas: ";
	cin >> M;
	srand(time(NULL));//Semilla para generar números aleatorios
	cout << endl;
	//Se genera la matriz y se imprime en pantalla
	for (int i = 0;i < N;i++)
	{
		cout << "Fila " << i+1 << ": ";
		for (int j = 0;j < M;j++)
		{
			matriz[i][j] = (rand() % 100) + 1;
			cout << setw(10) << matriz[i][j]; 
		}
		cout << endl;
	}
	for (int j = 0;j < M;j++)
	{
		cont = 0;
		for (int i = 0;i < N-1;i++)
		{
			//Si la celda de abajo de la columna es menor que la de arriba se incrementa el contador
			if (matriz[i+1][j] < matriz[i][j])
			{
				cont++;
			}
		}
		ocurrencias[j] = cont;
	}
	cout << "------------------------------------------------------------------------------------------" << endl;
	//Se imprime en pantalla las filas y la cantidad de ocurrencias que tuvo cada columna
	cout << "Nro de columna" << setw(20) << "Ocurrencias" << endl;
	for (int i = 0;i < M;i++)
	{
		cout << setw(10) << i+1 << setw(20) << ocurrencias[i] << endl;
	}
	return 0;
}

