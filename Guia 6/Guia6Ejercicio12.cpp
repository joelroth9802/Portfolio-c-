#include <iostream>
#include <iomanip>
using namespace std;
/*Un negocio de venta de vinos desea realizar un control de sus ventas y compras realizadas a
proveedores, en el último mes. 
Los precios por botella de cada vino que vende y la cantidad de botellas que tiene actualmente, se
ingresan al principio, sin orden alguno: Código de Vino (1..500), Precio por Botella, Cantidad de Botellas
Además,  por cada movimiento realizado se ingresan los siguientes datos: Cód. Vino (1..500), Tipo de
Movimiento (1: Venta  2:Compra al proveedor), Cantidad de Botellas. Pueden ingresarse varios datos
para un mismo Código de Vino y, dichos datos no se encuentran ordenados. El fin de datos se produce
cuando se ingresa un Cód. Vino =9999
Se pide: 
a) Informar para cada vino:
Cód. Vino:         Cant. Botellas Vendidas:          Cantidad Botellas Compradas:
xxxxxxxx           xxxxxxxxxxxx                      xxxxxxxxxx
b) Indicar la cantidad total de botellas vendidas y total recaudado.
c) Realizar un listado con los siguientes datos, ordenado en forma decreciente por cantidad de Botellas
Existentes:
Cód. Vino:            Cantidad Botellas Existentes:      Monto $:     (*)
xxxxxxx                xxxxxxxxxxxxxxx                   xxxxxxxxx
(*) Cantidad Botellas existentes: se obtiene de sumar a la cantidad total de botellas ingresadas al principio, la 
cantidad de botellas compradas y restar la cantidad de botellas vendidas.
Obs: se deben utilizar al menos dos funciones.*/
int main(int argc, char *argv[]) {
	//Variables
	int vinos[10][6] = {0}, cod, tmov, cant, aux;
	cout << "Ingrese los datos de cada botella de vino: " << endl;
	cout << endl;
	//Carga de datos
	for (int i = 0;i < 10;i++)
	{
		cout << "Tipo de vino " << i+1 << endl;
		cout << "Código de vino: ";
		cin >> vinos[i][0];
		cout << "Precio por botella: ";
		cin >> vinos[i][1];
		cout << "Cantidad botellas existentes: ";
		cin >> vinos[i][2];
		cout << endl;
	}
	cout << "Datos de compra y venta" << endl;
	cout << "Ingrese código de vino: ";
	cin >> cod;
	int p = 0, totalbot = 0, totalrec = 0;//Totales
	while (cod != 999)
	{
		//Busqueda para verificar si el codigo ingresado se encuentra en el arreglo
		for (p = 0;(p < 10) && (cod != vinos[p][0]);p++)
			;
		//Si el código esta en el arrelgo, se procede con la carga de datos
		if (p < 10)
		{
			cout << "Ingrese tipo de movimiento (1: Venta - 2: Compra al proveedor): ";
			cin >> tmov;
			cout << "Ingrese cantidad de botellas: ";
			cin >> cant;
			//Depende el tipo de movimiento, se incrementan los acumuladores
			if (tmov == 1)
			{
				vinos[p][3] += cant;
				totalbot += cant;
				totalrec += cant*vinos[p][1];
			}
			else
			{
				vinos[p][4] += cant;
			}
		}
		else
		{
			cout << "El código de vino ingresado es incorrecto, por favor ingrese un código que se encuentre en la base de datos." << endl;
		}
		p = 0;
		cout << endl;
		cout << "Ingrese código de vino: ";
		cin >> cod;
	}
	for (int i = 0;i < 10;i++)
	{
		vinos[i][2] += (vinos[i][4] - vinos[i][3]);//Acumulador para las botellas existentes
		vinos[i][5] += vinos[i][2]*vinos[i][1];//Acumulador para el costo total de las botellas existentes
	}
	//Informe
	cout << "--------------------------------------------------------------------------------------------" << endl;
	cout << "Cód. Vino" << setw(30) << "Cant. Botellas Vendidas" << setw(30) << "Cant. Botellas Compradas" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << setw(6) << vinos[i][0] << setw(22) << vinos[i][3] << setw(29) << vinos[i][4] << endl;
	}
	cout << endl;
	cout << "Cantidad total de botellas vendidas: " << totalbot << endl;
	cout << "Total recaudado de las botellas vendidas: $ " << totalrec << endl;
	cout << endl;
	//Ordenamiento según la cantidad de botellas existentes en forma decreciente
	for (int i = 0;i < (10-1);i++)
	{
		for (int j = i+1;j < 10;j++)
		{
			if (vinos[i][2] < vinos[j][2])
			{
				for (int k = 0;k < 6;k++)
				{
					aux = vinos[i][k];
					vinos[i][k] = vinos[j][k];
					vinos[j][k] = aux;
				}
			}
		}
	}
	cout << "Cód. Vino" << setw(30) << "Cant. Botellas Existentes" << setw(19) << "Monto $" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << setw(6) << vinos[i][0] << setw(22) << vinos[i][2] << setw(29) << vinos[i][5] << endl;
	}
	return 0;
}

