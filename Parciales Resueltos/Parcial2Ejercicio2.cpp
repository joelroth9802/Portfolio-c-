#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <climits>
using namespace std;

int main(int argc, char *argv[]) {
	//Declaración de variables
	int precios[5], cant[30][6], tipo, dia, surtidor, litros, totTipoI, minCant, minDia; 
	float totTipoV, total, porc;
	//Acumuladores
	totTipoI = 0; totTipoV = 0; total = 0; minCant = INT_MAX; cant[30][6] = {0};
	//Se leen los precios
	cout << "Ingrese los precios de cada tipo de combustible: " << endl;
	for (int i = 0;i < 5;i++)
	{
		printf("Tipo de combustible %d de %d: ",i+1,5);
		cin >> precios[i];
	}
	cout << endl;
	//Se ingresan las ventas
	cout << "Ingrese las ventas realizadas durante el mes: " << endl;
	cout << "Ingrese tipo de combustible: ";
	cin >> tipo;
	while (tipo != 0)
	{
		--tipo;
		cout << "Ingrese dia del 1 al 30: ";
		cin >> dia;
		--dia;
		cout << "Ingrese surtidor: ";
		cin >> surtidor;
		--surtidor;
		cout << "Ingrese cantidad de litros: ";
		cin >> litros;
		//Se incrementas las cantidades
		cant[dia][surtidor] += litros;
		//Si el tipo de combustible es el 1, se acumula la recaudación
		if (tipo + 1 == 1)
		{
			totTipoI += cant[dia][surtidor]*precios[0];
		}
		//Acumulador para obtener la cant. total de combustible vendido
		total += litros;
		//Si el tipo de combustible es el 5, se acumulan los litros vendidos
		if (tipo + 1 == 5)
		{
			totTipoV += litros;
		}
		//Calculo para obtener el minimo
		if ((cant[dia][5] < minCant) && (cant[dia][5] != 0)) 
		{
			minCant = cant[dia][5];
			minDia = dia + 1;
		}
		cout << endl;
		cout << "Ingrese tipo de combustible: ";
		cin >> tipo;
	}
	//Calculo para obtener el porcentaje del cimbustible tipo V vendido sobre el total
	porc = round((totTipoV/total)*100);
	//Informe
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "TOTAL DE LITROS" << endl;
	cout << "DIA" << setw(15) << "Surt. 1" << setw(15) << "Surt. 2" << setw(15) << "Surt. 3" << setw(15) << "Surt. 4" << setw(15) << "Surt. 5" << setw(15) << "Surt. 6" << endl;
	for (int i = 0;i < 30;i++)
	{
		cout << setw(2) << i+1 << setw(14) << cant[i][0] << setw(15) << cant[i][1] << setw(15) << cant[i][2] << setw(15) << cant[i][3] << setw(15) << cant[i][4] << setw(15) << cant[i][5] << endl;
	}
	cout << endl;
	cout << "Total recaudado en el mes por combustible TIPO I: $ " << totTipoI << endl;
	cout << "Porcentaje de litros de combustible TIPO V vendidos: % " << porc << endl;
	cout << "Día en el que el surtidor 6 registro la menor cantidad de ventas: día " << minDia; 
	return 0;
}

