#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;
/*Se dispone de una lista con el número de documento de un grupo de alumnos. De cada uno de ellos
se dispone además de las 3 notas obtenidas en una materia durante el año.
Se pide realizar un listado ordenado en forma decreciente por promedio del alumno con el siguiente
formato:
DOCUMENTO   NOTA 1   NOTA 2   NOTA 3   PROMEDIO
xxxxxxxx     99       99       99       99*/
int main(int argc, char *argv[]) {
	//Variables
	float alumnos[4][4], aux, aux1;
	int DNI[4];
	//Datos
	cout << "Ingrese DNI y las notas de cada alumno: " << endl;
	cout << endl;
	for (int i = 0;i < 4;i++)
	{
		printf("Alumno %d de %d\n",i+1,4);
		cout << "DNI: ";
		cin >> DNI[i];
		for (int j = 0;j < 3;j++)
		{
			cout << "Nota " << j+1 << ": ";
			cin >> alumnos[i][j];
		}
		cout << endl;
		//Calculo para obtener el promedio por cada alumno
		alumnos[i][3] = round((alumnos[i][0] + alumnos[i][1] + alumnos[i][2])/3);
	}
	//Ordenamiento de los datos en forma decreciente segun el promedio de cada alumno
	for (int i = 0;i < (4-1);i++)
	{
		for (int j = i+1;j < 4;j++)
		{
			if (alumnos[i][3] < alumnos[j][3])
			{
				for (int k = 0; k < 4; k++) 
				{
					aux = alumnos[i][k];
					alumnos[i][k] = alumnos[j][k];
					alumnos[j][k] = aux;
				}
				aux1 = DNI[i];
				DNI[i] = DNI[j];
				DNI[j] = aux1;
			}
		}
	}
	//Informe
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "DOCUMENTO" << setw(15) << "NOTA 1" << setw(15) << "NOTA 2" << setw(15) << "NOTA 3" << setw(15) << "PROMEDIO" << endl;
	for (int i = 0;i < 4;i++)
	{
		cout << DNI[i] << setw(13) << alumnos[i][0] << setw(15) << alumnos[i][1] << setw(15) << alumnos[i][2] << setw(15) << alumnos[i][3] << endl;
	}
	return 0;
}

