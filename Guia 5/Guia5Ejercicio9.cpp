#include <iostream>
using namespace std;
/*Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. A
continuación, el programa debe pedir el número de una fila. El programa deberá mostrar por
pantalla, sólo los valores de esa fila.*/
int main(int argc, char *argv[]) {
	int matriz[3][3], f, c, num;
	f = 0;
	//Se lee las filas y columnas para ingresar los valores
	for (int i = 0;i < 3;i++)
	{
		cout << "Ingrese un valor para la fila " << ++f << ":" << endl;
		c = 0;
		for (int j = 0;j < 3;j++)
		{
			cout << "Columna " << ++c << ": ";
			cin >> matriz[i][j];
		}
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "Ingrese el número de una fila para mostrar en pantalla: ";
	cin >> num;
	--num;
	cout << endl;
	//Se muestra las fila ingresada en pantalla por el usuario
	for (int i = 0;i < 3;i++)
	{
		cout << matriz[num][i] << "  ";
	}
	return 0;
}

