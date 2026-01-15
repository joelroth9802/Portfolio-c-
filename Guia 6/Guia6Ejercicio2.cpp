#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
/*Se dispone de una lista con los 25 números de documentos de un grupo de alumnos, guardados en
un vector DNI. Además, por cada alumno se tiene las 3 calificaciones obtenidas en los exámenes
parciales de una materia, las cuales se almacenan en una matriz llamada NOTA. Se desea conocer el
promedio de un alumno del que se lee su número de documento como dato. Si el número de documento
buscado no se encuentra mostrar un mensaje que indique que el mismo no fue hallado*/
int main(int argc, char *argv[]) {
	//Declaración de arreglos
	int DNI[25], NOTA[25][3], i, num;
	float prom[25];
	//Se leen los datos de cada alumno
	cout << "Ingrese el documento de los 25 alumnos: " << endl;
	for (int i = 0;i < 25;i++)
	{
		printf("Alumno %d de %d: ",i+1,25);
		cin >> DNI[i];
		cout << endl;
		cout << "Ingrese las 3 notas obtenidas del alumno: " << endl;
		for (int j = 0;j < 3;j++)
		{
			printf("Nota %d de %d: ",j+1,3);
			cin >> NOTA[i][j];
		}
		//Calculo para obtener el promedio de cada alumno
		prom[i] = round((NOTA[i][0] + NOTA[i][1] + NOTA[i][2])/3);
		cout << endl;
	}
	//Se lee el dato para encontrar el num deseado
	cout << "Ingrese el núm. de documento que desea encontrar: ";
	cin >> num;
	for (i = 0;(i < 25) && (num != DNI[i]);i++)
		;
	//Informe
	cout << "------------------------------------------------------" << endl;
	if (i == 25)
	{
		cout << "El núm. de documento ingresado, no fue encontrado.";
	}
	else
	{
		cout << "Promedio del alumno: " << prom[i];
	}
	return 0;
}

