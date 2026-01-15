#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
/*Se desea realizar un informe ordenado por el sueldo a percibir por cada empleado de mayor a
menor con la información existente en el archivo SUELDOS.TXT.*/
void ordenamiento(int nMatriz[][4]);//Prototipo
int main(int argc, char *argv[]) {
	ifstream empresa;//Archivo de lectura
	int nMatriz[15][4];
	empresa.open("./SUELDOS.txt");//Se abre el archivo
	if (empresa.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//Se leen los datos del documento
		int i = 0;
		while (!empresa.eof())
		{
			for (int j = 0;j < 2;j++)
			{
				empresa >> nMatriz[i][j];
			}
			i++;
		}
	}
	ordenamiento(nMatriz);//Llamada de la funcion
	//Informe
	cout << left << setw(20) << "Código" << right << setw(10) << "Sueldo" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << setw(4) << nMatriz[i][0] << right << setw(26) << nMatriz[i][1] << endl;
	}
	return 0;
}
//Función
void ordenamiento(int nMatriz[][4]){
	int aux;
	for (int i = 0;i < 9;i++)
	{
		for (int j = i+1;j < 10;j++)
		{
			if (nMatriz[i][1] < nMatriz[j][1])
			{
				for (int k = 0;k < 2;k++)
				{
					aux = nMatriz[i][k];
				    nMatriz[i][k] = nMatriz[j][k];
				    nMatriz[j][k] = aux;
				}
			}
		}
	}
}
