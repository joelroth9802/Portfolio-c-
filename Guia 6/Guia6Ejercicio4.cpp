#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
/*Rehacer los ejercicios 2 y 3, considerando que los datos se ingresan ordenados, y aplique el método
de búsqueda binaria*/
int main(int argc, char *argv[]) {
	//Ejercicio 2
	//Declaración de arreglos
	int DNI[5], NOTA[5][3], num, inf, sup, medio;
	float prom[5];
	//Se leen los datos de cada alumno
	cout << "Ingrese el documento de los 5 alumnos: " << endl;
	for (int i = 0;i < 5;i++)
	{
		printf("Alumno %d de %d: ",i+1,5);
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
	inf = 0; sup = 5; medio = (inf + sup)/2;
	while ((inf <= sup) && (num != DNI[medio]))
	{
		if (num < DNI[medio])
			sup = medio - 1;
		else inf = medio + 1;
		medio = (inf + sup)/2;
	}
	//Informe
	cout << "------------------------------------------------------" << endl;
	if (inf > sup)
	{
		cout << "El núm. de documento ingresado, no fue encontrado.";
	}
	else
	{
		cout << "Promedio del alumno: " << prom[medio] << endl;;
	}
	cout << endl;
	//Ejercicio 3
	//Arreglos
	int clientes[20][2], cant, cod, inf2, sup2, medio2;
	//Datos
	cout << "Ingrese la cantidad de clientes: ";
	cin >> cant;
	cout << endl;
	cout << "Ingrese los datos de cada cliente: " << endl;
	for (int i = 0;i < cant;i++)
	{
		cout << "Cliente nro " << i+1 << endl;
		cout << "Código: ";
		cin >> clientes[i][0];
		cout << "Saldo: ";
		cin >> clientes[i][1];
		cout << endl;
	}
	cout << "Ingrese código de cliente: ";
	cin >> cod;
	inf2 = 0; sup2 = cant; medio2 = (inf2 + sup2)/2;
	while ((inf2 <= sup2) && (cod != clientes[medio2][0]))
	{
		if (cod < clientes[medio2][0])
			sup2 = medio2 - 1;
		else inf2 = medio2 +1;
		medio2 = (inf2 + sup2)/2;
	}
	//Informe
	cout << "------------------------------------------------------" << endl;
	if (inf2 > sup2)
	{
		cout << "El código ingresado, no fue encontrado.";
	}
	else
	{
		cout << "Saldo: $ " << clientes[medio2][1];
	}
	return 0;
}

