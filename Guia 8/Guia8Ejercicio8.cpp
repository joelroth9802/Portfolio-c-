#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
/*Se desea procesar el archivo MATRIZ.TXT. Mostrar la matriz de N filas x M columnas. Verificar
que el archivo no esté modificado validando que la suma de los elementos coincida con el último
dato leído.*/
int main(int argc, char *argv[]) {
	ifstream archivo;//Archivo de lectura
	int nMatriz[50][10], nAcum = 0;
	archivo.open("MATRIZ.txt");//Se abre el archivo
	if (archivo.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Se leen los datos del archivo
		int i = 0;
		while (!archivo.eof())
		{
			for (int j = 0;j < 4;j++)
			{
				archivo >> nMatriz[i][j];
			}
			i++;
		}
	}
	//Informe
	for (int i = 0;i < 45;i++)
	{
		cout << "Fila " << i+1 << ": ";
		for (int j = 0;j < 4;j++)
		{
			cout << left << setw(5) << nMatriz[i][j];
			nAcum += nMatriz[i][j];//Acumulador
		}
		cout << endl;
	}
	cout << endl;
	cout << "Suma total: " << nAcum;
	return 0;
}

