#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
using namespace std;
/* En una escuela secundaria se quiere realizar el cierre de notas de los alumnos en matemáticas de
una comisión, para ello se ingresa al inicio dni y nota del 1º semestre, de los N alumnos de la misma,
ordenados por dni. El valor N se ingresa como primer dato. 
Luego se ingresan las notas del 2º semestre: dni y nota, sin tener un orden en especial. 
Se desea obtener: 
a) Un listado con los dni y la nota total de cada  alumno (promedio entre el 1º y el 2º semestre)
b) Cuantos alumnos no aprobaron el curso (promedio menor a 6)
c) Un listado ordenado en forma decreciente por nota total obtenida sólo con los alumnos que aprobaron
el curso*/
int main(int argc, char *argv[]) {
	//Variables
	int dni[20], n, des, aux1;
	float notas[20][3], aux;
	des = 0;//Alumnos desaprobados
	cout << "Ingrese la cantidad de alumnos de la comisión: ";
	cin >> n;
	cout << endl;
	//Datos
	for (int i = 0;i < n;i++)
	{
		printf("Alumno %d de %d\n",i+1,n);
		cout << "DNI: ";
		cin >> dni[i];
		cout << "Nota del primer semestre: ";
		cin >> notas[i][0];
		cout << "Nota del segundo semestre: ";
		cin >> notas[i][1];
		cout << endl;
		//Promedio
		notas[i][2] = round((notas[i][0] + notas[i][1])/2);
		//Desaprobados
		if (notas[i][2] < 6)
		{
			des++;
		}
	}
	//Punto a)
	cout << "--------------------------------------------------------------------" << endl;
	cout << setw(5) << "DNI" << setw(20) << "PROMEDIO" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << dni[i] << setw(14) << notas[i][2] << endl;
	}
	cout << endl;
	//Punto b)
	cout << "Alumnos que no aprobaron el curso: " << des << endl;
	cout << endl;
	cout << "ALUMNOS APROBADOS" << endl;
	cout << setw(5) << "DNI" << setw(20) << "PROMEDIO" << endl;
	//Ordenamiento
	for (int i = 0;i < (n-1);i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (notas[i][2] < notas[j][2])
			{
				aux = notas[i][2];
				notas[i][2] = notas[j][2];
				notas[j][2] = aux;
				
				aux1 = dni[i];
				dni[i] = dni[j];
				dni[j] = aux1;
			}
		}
	}
	//Punto c)
	for (int i = 0;i < n;i++)
	{
		if (notas[i][2] >= 6)
		{
			cout << dni[i] << setw(14) << notas[i][2] << endl;
		}
	}
	return 0;
}

