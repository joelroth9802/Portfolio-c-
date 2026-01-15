#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
/*Genere una matriz de N x M con números al azar menores a 100. Luego recorra las filas
de izquierda a derecha y determine la cantidad de casos en los que valores de celdas
contiguas son números consecutivos crecientes.
Luego de terminado el proceso realice un informe indicando nro de fila – cantidad de
ocurrencias. El valor de N y M se ingresan como primeros datos.*/
int main(int argc, char *argv[]) {
	//Declaración de variables
	int matriz[50][50], N, M, ocurrencias[50], cont;
	//Se leen las filas y columnas
	cout << "Ingrese la cantidad de filas: ";
	cin >> N;
	cout << "Ingrese la cantidad de columnas: ";
	cin >> M;
	srand(time(NULL));//Semilla para generar el número aleatorio
	//Se imprime en pantalla la matriz
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
	for (int i = 0;i < N;i++)
	{
		cont = 0;
		for (int j = 0;j < M;j++)
		{
			//Si la celda de la derecha es mayor que la celda de la izquierda, el contador se incrementa en 1
			if (matriz[i][j+1] > matriz[i][j])
			{
				cont++;
			}
		}
		ocurrencias[i] = cont;//Se guarda el resultado del contador para cada fila
	}
	cout << "------------------------------------------------------------------------------------------" << endl;
	//Se imprime en pantalla las filas y la cantidad de ocurrencias que tuvo cada fila
	cout << "Nro de fila" << setw(20) << "Ocurrencias" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << setw(6) << i+1 << setw(20) << ocurrencias[i] << endl;
	}
	return 0;
}

