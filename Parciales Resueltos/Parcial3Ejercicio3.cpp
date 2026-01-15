#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	string naval[5][5];
	int f, fila, columna, b = 0, a = 0;
	//Carga del caracter A en el arreglo
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			naval[i][j] = "A";
		}
	}
	//Gnereación de filas aleatorias para que el juego sea mas entretenido
	srand(time(NULL));
	f = rand() % 5;
	naval[f][1] = "B";
	naval[f][2] = "B";
	naval[f][3] = "B";
	/*Bloque para mostrar la matriz con las letras
	for (int i = 0;i < 5;i++)
	{
		cout << "Fila " << i+1 << ": ";
		for (int j = 0;j < 5;j++)
		{
			cout << setw(10) << naval[i][j];
		}
		cout << endl;
	}*/
	cout << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << "Intento " << i+1 << endl;
		cout << "Fila: ";
		cin >> fila;
		--fila;
		cout << "Columna: ";
		cin >> columna;
		--columna;
		//Si el usuario acierta la posición, se incrementa la b
		if (naval[fila][columna] == "B")
		{
			b++;
		}
		//Si el intento es fallido, se incrementa la a
		else
		{
			a++;
		}
		cout << endl;
	}
	//Informe
	cout << "--------------------------------------------------------" << endl;
	if (b == 3)
	{
		cout << "BARCO HUNDIDO";
	}
	else
	{
		cout << "BARCO OPERATIVO" << endl;
		cout << "Resultados: " << endl;
		cout << "Intentos fallidos: " << a << endl;
		cout << "Intentos acertados: " << b;
	}
	return 0;
}

