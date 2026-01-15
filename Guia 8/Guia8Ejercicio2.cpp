#include <iostream>
#include <fstream>
using namespace std;
/*Tome el archivo generado en el ejercicio anterior, páselo a una matriz de 2 columnas y ordene la
matriz por la columna donde estén los valores de y.
Utilice un función para ordenar la matriz;*/
void ordenamiento(int matriz[][2]);//Ordenamiento
int main(int argc, char *argv[]) {
	int matriz[1000][2], c = 0;
	ifstream archivo;//Se declara la variable como archivo de lectura
	//Se abre el arvhivo
	archivo.open("./Guia8Ejercicio1.txt");
	//Si el archivo no se encuentra en la carpeta, da error
	if (archivo.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		//El bucle itera mientras no se encuentre con el final de linea
		while (!archivo.eof())
		{
			for (int i = 0;i < 2;i++)
			{
				archivo >> matriz[c][i];
			}
			c++;
		}
	}
	archivo.close();//Se cierra el archivo
	ordenamiento(matriz);//Llamada de la función
	//Informe
	for (int i = 0;i < 1000;i++)
	{
		cout << "Fila " << i+1 << ": " << matriz[i][0] << "       " << matriz[i][1] << endl;
	}
	return 0;
}
//Función
void ordenamiento(int matriz[][2]){
	int aux;
	for (int i = 0;i < 999;i++)
	{
		for (int j = i+1;j < 1000;j++)
		{
			if (matriz[i][0] > matriz[j][0])
			{
				for (int k = 0;k < 2;k++)
				{
					aux = matriz[i][k];
					matriz[i][k] = matriz[j][k];
					matriz[j][k] = aux;
				}
			}
		}
	}
}

