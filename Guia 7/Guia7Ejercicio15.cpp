#include <iostream>
#include <iomanip>
using namespace std;
/*Realice una función que reciba como parámetros una matriz de enteros, la cantidad de filas, la
cantidad de columnas y un valor a buscar. La función debe devolver – POR PARÁMETRO – la fila
y la columna donde se encuentra el valor buscado. En el NOMBRE debe devolver verdadero si lo
encontró o falso si no lo hizo.*/
void busqueda(int matriz[][5], int n, int busq, int &f, int &c, bool &band);//Prototipo
int main(int argc, char *argv[]) {
	//Declaración de la matriz
	int matriz[2][5] = {{25,27,22,28,23}, {16,12,18,10,17}};
	int busq, f, c, n = 2;
	bool band = false;
	//Se muestra la matriz en pantalla
	cout << "Matriz" << endl;
	for (int i = 0;i < 2;i++)
	{
		cout << "Fila " << i+1 << ": ";
		for (int j = 0;j < 5;j++)
		{
			cout << setw(5) << matriz[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "Ingrese un valor para realizar la busqueda: ";
	cin >> busq;
	cout << endl;
	//Llamada de la función
	busqueda(matriz, n, busq, f, c, band);
	//Informe
	if (band == true)
	{
		cout << "Verdadero" << endl;
		cout << "Fila: " << f << endl;
		cout << "Columna: " << c;
	}
	else
	{
		cout << "Falso";
	}
	return 0;
}
//Función
void busqueda(int matriz[][5], int n, int busq, int &f, int &c, bool &band){
	for (int i = 0;i < 2;i++)
	{
		int j = 0;
		for (j = 0;(j < 5) && (busq != matriz[i][j]);j++)
			;
		if (j < 5)
		{
			f = i + 1;
			c = j + 1;
			band = true;
			break;
		}
	}
}

