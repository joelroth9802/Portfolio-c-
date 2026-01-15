#include <iostream>
#include <string>
#include <cstdio>
#include <climits>
#include <iomanip>
#include <cmath>
using namespace std;
/*Un ente gubernamental desea emitir un informe sobre el estado de preparación del
gobierno ante el inicio de una nueva gestión de gobierno.
Posee los datos de las N reparticiones que tienen equipamiento informático, de la siguiente
manera: Nombre de la Repartición y Nombre del Responsable; ordenados por código de
repartición en forma creciente (de 1 a N).
Cada repartición tiene equipos instalados en las distintas áreas que la forman, donde por cada
una de esas áreas llegan los siguientes datos: Código de repartición (1 a N), Nombre del área,
cantidad de equipos i7, cantidad de i5, cantidad de i3, cantidad de Pentium o inferiores.
Finalizando con código de repartición = 9999. Estos datos no se ingresan ordenados por
repartición.
Se leen como primeros datos la cantidad de reparticiones (N) y el precio de un equipo i7, y se
sabe que se deben cambiar todos los equipos i3, Pentium e inferiores por equipos i7.
Se desea:
a) Obtener el siguiente informe:
Repartición   Cant.Áreas    i7    i5    i3    Pentium o Inf.   Total a cambiar    Porcent.
xxxxxxxxxx    xxxx          xxx   xxx   xxx   xxx              xxxx               xxxx
Porcentaje de cambio en total: xxxxx
Donde en la columna porcentaje se debe informar el porcentaje de los equipos a cambiar
sobre el total de equipos de cada repartición.
b) El gasto que cada repartición debe hacer en el cambio de equipamiento.
c) El responsable de la repartición que menos debe gastar.*/
int main(int argc, char *argv[]) {
	//Declaración de variables
	int reparticiones[15][8], subtotal[15], N, precioi7, cod, minpres;
	int canti7, canti5, canti3, cantpent;
	float porc[15], porctotal, total, totacambiar;
	string nombres[15][2], narea, minresp;
	total = 0; totacambiar = 0; minpres = INT_MAX;//Variable para calcular el minimo, INT_MAX seria lo mismo que poner 99999
	cout << "Ingrese la cantidad de reparticiones: ";
	cin >> N;
	cout << "Ingrese el precio de un equipo i7: ";
	cin >> precioi7;
	cout << endl;
	cin.ignore(); 
	//Se leen los nombres de la partición y los responsables
	for (int i = 0;i < N;i++)
	{
		printf("Repartición %d de %d \n",i+1,N);
		cout << "Ingrese nombre de la repartición: ";
		getline(cin, nombres[i][0]);
		cout << "Ingrese nombre del responsable: ";
		getline(cin, nombres[i][1]);
		reparticiones[i][0] = 0;//Acumulador para la cantidad de areas
		reparticiones[i][1] = 0;//Acumulador para la cantidad de i7
		reparticiones[i][2] = 0;//Acumulador para la cantidad de i5
		reparticiones[i][3] = 0;//Acumulador para la cantidad de i3
		reparticiones[i][4] = 0;//Acumulador para la cantidad de pentium o inf
		reparticiones[i][5] = 0;//Acumulador para el total de computadoras a cambiar
		subtotal[i] = 0;
	}
	cout << endl;
	for (int i = 0;i < N;i++)
	{
		printf("Carga de datos nro %d de %d \n",i+1,N);
		cout << endl;
		cout << "Ingrese código de repartición, (para el fin de datos ingrese '9999'): ";
		cin >> cod;
		while (cod != 9999)
		{
			--cod;
			cin.ignore();
			//Se leen las cantidades
			cout << "Ingrese nombre del área: ";
			getline(cin, narea);
			cout << "Ingrese cantidad de equipos i7: ";
			cin >> canti7;
			cout << "Ingrese cantidad de equipos i5: ";
			cin >> canti5;
			cout << "Ingrese cantidad de equipos i3: ";
			cin >> canti3;
			cout << "Ingrese cantidad de equipos pentium o inferiores: ";
			cin >> cantpent;
			//Se incrementan las variables
			reparticiones[cod][0]++;
			reparticiones[cod][1] += canti7;
			reparticiones[cod][2] += canti5;
			reparticiones[cod][3] += canti3;
			reparticiones[cod][4] += cantpent;
			cout << endl;
			cout << "Ingrese código de repartición, (para el fin de datos ingrese '9999'): ";
			cin >> cod;
		}
		//Se suman todas las computadoras para sacar el porcentaje por partición
		subtotal[i] += reparticiones[i][1] + reparticiones[i][2] + reparticiones[i][3] + reparticiones[i][4];
		//Se suman las computadoras a cambiar
		reparticiones[i][5] += reparticiones[i][2] + reparticiones[i][3] + reparticiones[i][4];
		reparticiones[i][6] = reparticiones[i][5]*precioi7;//Calculo para obtener el presupuesto por partición
		//Acumuladores generales para calcular el porcentaje general de equipos a cambiar
		total += subtotal[i];
		totacambiar += reparticiones[i][5];
		//Calculo para obtener el minimo
		if (reparticiones[i][6] < minpres)
		{
			minpres = reparticiones[i][6];
			minresp = nombres[i][1];
		}
	}
	for (int i = 0;i < N;i++)
	{
		//Pasamos los datos a variables realeas, para poder hacer el calculo
		float aux1 = reparticiones[i][5];
		float aux2 = subtotal[i];
		//Calculo para obtener el porcentaje por cada partición
		porc[i] = round((aux1/aux2)*100);
	}
	porctotal = round((totacambiar/total)*100);//Calculo para obtener el porcentaje total de computadoras a cambiar
	//Informe
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Repartición" << setw(17) << "Cant.Areas" << setw(15) << "i7" << setw(15) << "i5" << setw(15) << "i3" << setw(23) << "Pentium o Inf." << setw(22) << "Total a cambiar" << setw(21) << "Porcent." << setw(21) << "Presupuesto" << endl;
	for (int i = 0;i < 	N;i++)
	{
		cout << nombres[i][0] << setw(14) << reparticiones[i][0] << setw(19) << reparticiones[i][1] << setw(15) << reparticiones[i][2] << setw(15) << reparticiones[i][3] << setw(16) << reparticiones[i][4] << setw(22) << reparticiones[i][5] << setw(25) << porc[i] << setw(21) << reparticiones[i][6] << endl;
	}
	cout << endl;
	cout << "Porcentaje de cambio en total: % " << porctotal << endl;
	cout << "Responsable de la repartición con el menor presupuesto: " << minresp;
	return 0;
}

