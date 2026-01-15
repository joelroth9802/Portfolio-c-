#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
/*Generar una matriz de 10x10 elementos con números al azar. La matriz se debe llenar se
acuerdo al gráfico. Muestre la matriz generada.*/
int main(int argc, char *argv[]) {
	//Declaramos la matriz y la inicializamos en 0
	unsigned int matriz[10][10] = {0};
	srand(time(NULL));
	for (int i = 0;i < 9;i++)
	{
		matriz[i][0] = (rand() % (999) + 1);
	}
	for (int i = 0;i < 9;i++)
	{
		matriz[9][i] = (rand() % (999) + 1);
	}
	for (int i = 9;i >= 1;i--)
	{
		matriz[i][9] = (rand() % (999) + 1);
	}
	for (int i = 9;i >= 1;i--)
	{
		matriz[0][i] = (rand() % (999) + 1);
	}
	//Mostramos en pantalla la matriz
	for (int i = 0;i < 10;i++)
	{
		cout << setw(10) << "Fila " << i+1 << ": ";
		for (int j = 0;j < 10;j++)
		{
			cout << setw(10) << matriz[i][j] << setw(10);
		}
		cout << endl;
	}
	return 0;
}

