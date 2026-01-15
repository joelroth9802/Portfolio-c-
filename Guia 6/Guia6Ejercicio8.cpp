#include <iostream>
#include <iomanip>
using namespace std;
/*En un censo agropecuario se ha obtenido información sobre la producción agrícola de distintos
productores.
Se han registrado los siguientes datos: Código de productor, Cantidad de hectáreas sembradas en un
año, Total de Toneladas cosechadas en un año.
La cantidad de productores censados se lee como primer dato.
Se desea obtener:
a) Un listado ordenado de mayor a menor por cantidad de hectáreas cosechas en un año.
b) El rendimiento promedio obtenido por hectárea por cada productor
c) El productor que obtuvo el mayor rendimiento por hectárea.*/
int main(int argc, char *argv[]) {
	//Variables
	float datos[20][4], prod, maxProm, maxProd, aux;
	maxProm = 0;
	//Datos
    cout << "Ingrese la cantidad de productores censados: ";
	cin >> prod;
	cout << endl;
	for (int i = 0;i < prod;i++)
	{
		cout << "Productor " << i+1 << endl;
		cout << "Ingrese código de productor: ";
		cin >> datos[i][0];
		cout << "Ingrese cantidad de hectáreas sembradas: ";
		cin >> datos[i][1];
		cout << "Ingrese el total de toneladas cosechadas: ";
		cin >> datos[i][2];
		cout << endl;
		//Calculo para obtener el promedio de toneladas por hectáreas
		datos[i][3] = datos[i][2]/datos[i][1];
		//Maximo
		if (datos[i][3] > maxProm)
		{
			maxProm = datos[i][3];
			maxProd = datos[i][0];
		}
	}
	//Ordenamiento
	for (int i = 0;i < (prod-1);i++)
	{
		for (int j = i+1;j < prod;j++)
		{
			if (datos[i][1] < datos[j][1])
			{
				for (int k = 0;k < 4;k++)
				{
					aux = datos[i][k];
					datos[i][k] = datos[j][k];
					datos[j][k] = aux;
				}
			}
		}
	}
	//Informe
	cout << "---------------------------------------------------------" << endl;
	cout << "Cód. Productor" << setw(15) << "Hectáreas" << setw(15) << "Toneladas" << setw(15) << "Promedio" << endl;
	for (int i = 0;i < prod;i++)
	{
		cout << setw(8) << datos[i][0] << setw(18) << datos[i][1] << setw(14) << datos[i][2] << setw(19) << datos[i][3] << endl;
	}
	cout << endl;
	cout << "Productor que obtuvo el mayor rendimiento por hectárea: " << maxProd;
	return 0;
}

