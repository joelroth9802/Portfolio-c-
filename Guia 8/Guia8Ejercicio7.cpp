#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
/*Se desea llenar una matriz de N x M con números al azar menores a 1000. Los valores de N y M
se ingresan como primeros datos. Luego generar un archivo MATRIZ.TXT donde se guarde: N, M,
luego los valores de cada una de las celdas recorriendo la matriz por filas y columnas. Por último la
suma de todos los valores. Todos los valores se escriben separados por espacios en blanco*/
int main(int argc, char *argv[]) {
	ofstream archivo;//Declaración para escritura
	int nMatriz[100][100], n, m;
	//Datos
	cout << "Ingrese la cantidad de elementos para la matriz:" << endl;
	cout << "Filas: ";
	cin >> n;
	cout << "Columnas: ";
	cin >> m;
	srand(time(NULL));//Semilla para los numeros aleatorios
	archivo.open("MATRIZ.txt");//Se abre el archivo
	if (archivo.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Se escriben los números en los documentos
		int total = 0;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				nMatriz[i][j] = (rand() % 1000) + 1;
				total += nMatriz[i][j];
				archivo << nMatriz[i][j] << " ";
			}
			archivo << endl;
		}
		archivo << endl;
		archivo << total;
	}
	archivo.close();//Se cierra el archivo
	return 0;
}

