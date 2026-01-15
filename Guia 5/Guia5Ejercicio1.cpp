#include <iostream>
using namespace std;
/*a) Declarar un vector llamado números con la capacidad suficiente para almacenar las
edades de todos los alumnos de la comisión.
b) Ingresar la cantidad de alumnos que posee la comisión y luego almacenar en el vector las
edades de todos los alumnos.
c) Ingresar una posición y informar la edad almacenada en ella. Repetir c) hasta que se
ingrese una posición no válida.*/
int main(int argc, char *argv[]) {
	//Punto a)
	int numeros[200], alumnos, pos;
	//Punto b)
	cout << "Ingrese la cantidad de alumnos que posee la comisión: ";
	cin >> alumnos;
	cout << endl;
	cout << "Ingrese las edades de los alumnos: " << endl;
	for (int i = 0;i < alumnos;i++)
	{
		cin >> numeros[i];
	}
	//Punto c)
	cout << "Ingrese una posición para informar la edad almacenada en ella: ";
	cin >> pos;
	while ((pos > 0) && (pos <= alumnos))
	{
		cout << "Edad almacenada: " << numeros[--pos] << " años" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "Ingrese una posición para informar la edad almacenada en ella: ";
		cin >> pos;
	}
	return 0;
}

