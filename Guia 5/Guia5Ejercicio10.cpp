#include <iostream>
using namespace std;
/*Escribir un programa que lea una matriz de enteros de 4 filas y 4 columnas y a
continuación intercambie la fila i con la fila j, siendo i y j dos valores introducidos por teclado.*/
int main(int argc, char *argv[]) {
	int matriz[4][4], ifila, jfila, aux;
	//Se lee las filas y columnas para ingresar los valores
	for (int i = 0;i < 4;i++)
	{
		cout << "Ingrese un valor para la fila " << i+1 << ":" << endl;
		for (int j = 0;j < 4;j++)
		{
			cout << "Columna " << j+1 << ": ";
			cin >> matriz[i][j];
		}
	}
	cout << "----------------------------------------------------" << endl;
	cout << "Ingrese valor para inercambiar la fila: ";
	cin >> ifila;
	cout << "Por la fila: ";
	cin >> jfila;
	--ifila; --jfila;
	//Se intercambian las filas ingresadas por el usuario
	for (int i = 0;i < 4;i++)
	{
		aux = matriz[ifila][i];
		matriz[ifila][i] = matriz[jfila][i];
		matriz[jfila][i] = aux;
	}
	//Se muestra la matriz en pantalla con las filas intercambiadas
	cout << endl;
	for(int i = 0;i < 4;i++)
	{
		cout << "Fila " << i+1 << ": ";
		for(int j = 0;j < 4;j++)
		{
			cout << matriz[i][j] << "   ";
		}
		cout << endl;
	}
	return 0;
}

