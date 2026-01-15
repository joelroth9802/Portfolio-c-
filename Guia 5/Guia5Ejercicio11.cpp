#include <iostream>
#include <ctime>
using namespace std;
/*Generar una matriz de N x N elementos con números al azar. La matriz se completa
generando al azar el valor del elemento y los valores de fila y columna. Solo se deben asignar
las posiciones que no han sido previamente asignadas. La aplicación debe terminar de
generar valores cuando toda la matriz haya sido llenada.
Además muestre en otra matriz la cantidad de veces que se generaron valores para cada
celda de la matriz.
Informar la matriz visualizándola en forma correcta en la pantalla*/
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int matriz[10][10], cont = 0, f, c;
	int contador[10][10];
	//Se le pone un valor aleatorio a las filas y columnas
	f = (rand() % 10) + 1;
	c = (rand() % 10) + 1;
	cout << "Cantidad de filas: " << f << endl;
	cout << "Cantidad de columnas: " << c << endl;
	cout << endl;
	//Se pone las celdas de la matriz del contador en 0
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			contador[i][j] = 0;
		}
	}
	//Se genera aleatoriamente los numeros para cada celda
	int ant;
	for (int i = 0;i < f;i++)
	{
		cout << "Fila " << ++cont << ": ";
		for(int j = 0;j < c;j++)
		{
			matriz[i][j] = rand() % 200;
			//Si en caso de que la celda sea un 0 o que se repita el numero, el elemento de la matriz se genera nuevamente
			if ((matriz[i][j] == 0) || (ant == matriz[i][j]))
			{
				ant = matriz[i][j];
				matriz[i][j] = (rand() % 200) + 1;
				contador[i][j]++;
			}
			//Se muestra la matriz en pantalla
			cout << matriz [i][j] << "    ";
		}
		cout << endl;
	}
	cout << "---------------------------------------------------------------" << endl;
	cont = 0;
	cout << "Cantidad de veces que se generaron valores para cada celda: " << endl;
	cout << endl;
	//Se muestra la matriz de la cantidad de intentos en cada celda
	for (int i = 0;i < f;i++)
	{
		cout << "Fila " << ++cont << ": ";
		for (int j = 0;j < c;j++)
		{
			cout << contador[i][j] << "   ";
		}
		cout << endl;
	}
	return 0;
}

