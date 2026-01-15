#include <iostream>
#include <climits>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	//Declaración de variables
	int precios[7], tipo, dia, cabina, cant[31][3], subTotTipo1, totTipo1, totTipo7, minCant, minCantDia;
	float porcTipo7;
	//Acumuladores generales
	subTotTipo1 = 0; totTipo7 = 0; minCant = INT_MAX;
	//Se leen los precios de cada tipo de vehículo
	cout << "Ingrese los precios de cada tipo de vehículo: " << endl;
	for (int i = 0;i < 7;i++)
	{
		cout << "Tipo " << i+1 << ": ";
		cin >> precios[i];
	}
	//Acumuladores para las cantidades por día
	for (int i = 0;i < 31;i++)
	{
		cant[i][0] = 0;
		cant[i][1] = 0;
		cant[i][2] = 0;
	}
	cout << endl;
	//Se leen los datos de cada vehículo
	cout << "Ingrese nro de tipo de vehículo: ";
	cin >> tipo;
	float cont = 0;
	while (tipo != 0)
	{
		--tipo;
		cout << "Ingrese día del paso del vehículo por la cabina: ";
		cin >> dia;
		--dia;
		cout << "Ingrese nro de cabina: ";
		cin >> cabina;
		--cabina;
		cont++;
		//Se incrementa en 1 el día y la cabina por la que pasa el vehículo
		cant[dia][cabina]++;
		//Si el vehículo es de tipo I, se incrementa el acumulador para obetener el precio total
		if (tipo + 1 == 1)
		{
			subTotTipo1++;
		}
		//Si el vehículo es de tipo VII, se incrementa en 1 el total para luego obtener el porcentaje
		if (tipo + 1 == 7)
		{
			totTipo7++;
		}
		//Calculo para obtener el dia en que la cabina I, registro la menor cantidad de vehículos
		if (cant[dia][0] < minCant)
		{
			minCant = cant[dia][0];
			minCantDia = dia;
		}
		cout << endl;
		cout << "Ingrese nro de tipo de vehiculo: ";
		cin >> tipo;
	}
	totTipo1 = subTotTipo1*precios[0];//Calculo para obtener el total recaudado en el mes por vehículos tipo I
	porcTipo7 = round((totTipo7/cont)*100);//Calculo para obtener el porcentaje de vehículos tipo VII
	cout << "---------------------------------------------------------------" << endl;
	//Informe
	cout << "DIA" << setw(30) << "CABINA 1" << setw(30) << "CABINA 2" << setw(30) << "CABINA 3" << endl;
	for (int i = 0;i < 31;i++)
	{
		cout << setw(3) << i+1 << setw(26) << cant[i][0] << setw(31) << cant[i][1] << setw(30) << cant[i][2] << endl;
	}
	cout << endl;
	cout << "Total recaudado en el mes por vehiculos tipo I: $ " << totTipo1 << endl;
	cout << "Porcentaje vehículos TIPO VII sobre el total de vehículos: % " << porcTipo7 << endl;
	cout << "Día en que la cabina 1 registró la menor cantidad de vehículos: " << minCantDia;
	return 0;
}

