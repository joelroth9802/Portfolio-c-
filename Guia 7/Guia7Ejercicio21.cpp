#include <iostream>
#include <iomanip>
using namespace std;
/*Dado el enunciado de la guía 6, ejercicio 9, rearmarlo utilizando funciones para cada ítem de
resultados.
Se dispone de una lista con el número de documento de un grupo de alumnos. De cada uno de
ellos se dispone además de las 3 notas obtenidas en una materia durante el año.
Se pide realizar un listado ordenado en forma decreciente por promedio del alumno con el
siguiente formato:
DOCUMENTO NOTA 1 NOTA 2 NOTA 3 PROMEDIO
xxxxxxxx   99     99     99      99*/
//Prototipos
void ordenamiento(int alum[][5]);
void promedio(int alum[][5]);
void datos(int alum[][5]);
int main(int argc, char *argv[]) {
	int alum[3][5];
	//Funciones
	datos(alum);
	promedio(alum);
	ordenamiento(alum);
	//Informe
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "DOCUMENTO" << setw(20) << "NOTA 1" << setw(20) << "NOTA 2" << setw(20) << "NOTA 3" << setw(20) << "PROMEDIO" << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << alum[i][0] << setw(19) << alum[i][1] << setw(20) << alum[i][2] << setw(20) << alum[i][3] << setw(19) << alum[i][4] << endl;
	}
	return 0;
}
void datos(int alum[][5]){
	cout << "Datos de los alumnos" << endl;
	cout << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << "Alumno " << i+1 << endl;
		cout << "DNI: ";
		cin >> alum[i][0];
		for (int j = 1;j < 4;j++)
		{
			cout << "Nota " << j << ": ";
			cin >> alum[i][j];
		}
		cout << endl;
	}
}
void promedio(int alum[][5]){
	for (int i = 0;i < 3;i++)
	{
		alum[i][4] = (alum[i][1] + alum[i][2] + alum[i][3])/3;
	}
}
void ordenamiento(int alum[][5]){
	int aux;
	for (int i = 0;i < 2;i++)
	{
		for (int j = i+1;j < 3;j++)
		{
			if (alum[i][4] < alum[j][4])
			{
				for (int k = 0;k < 5;k++)
				{
					aux = alum[i][k];
					alum[i][k] = alum[j][k];
					alum[j][k] = aux;
				}
			}
		}
	}
}

