#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Declaración de variables
	string desc[2500][2], cod;
	int stock[2500][4], total, cant;
	total = 0;//Acumulador para la recaudación total
	//Se leen los datos de los productos
	cout << "Ingrese los datos de los productos: " << endl;
	cout << endl;
	for (int i = 0;i < 2500;i++)
	{
		printf("Producto %d de %d \n",i+1,2500);
		cout << "Ingrese codigo de producto alfanumerico: ";
		getline(cin, desc[i][0]);
		cout << "Ingrese descripción: ";
		getline(cin, desc[i][1]);
		cout << "Ingrese stock inicial: ";
		cin >> stock[i][0];
		cout << "Ingrese precio unitario de venta: ";
		cin >> stock[i][1];
		stock[i][2] = 0;//Acumulador para el stock final de cada producto
		stock[i][3] = 0;//Acumulador para obtener el valor total del sotck final
		cout << endl;
		cin.ignore();
	}
	cout << endl;
	//Se leen las ventas de cada producto
	cout << "Ingrese codigo de producto: ";
	cin >> cod;
	int i = 0;
	while((cod != "X975ZR") || (cod == desc[i][0]))
	{
		cout << "Ingrese cantidad vendida: ";
		cin >> cant;
		stock[i][2] += stock[i][0] - cant;//Calculo para obtener el stock final
		total += cant*stock[i][1];//Calculo para obtener la recaudación total
		stock[i][3] += stock[i][2]*stock[i][1];//Calculo para obtener el valor total del stock final
		i++;
		cout << endl;
		cout << "Ingrese codigo de producto: ";
		cin >> cod;
	}
	//Informe
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout << "CGO. PRODUCTO" << setw(30) << "DESCRIPCION" << setw(30) << "STOCK INICIAL" << setw(30) << "STOCK FINAL" << endl;
	for (int i = 0;i < 2500;i++)
	{
		cout << setw(9) << desc[i][0] << setw(31) << desc[i][1] << setw(28) << stock[i][0] << setw(31) << stock[i][2] << endl;
	}
	cout << endl;
	cout << "Total recaudado por ventas: $ " << total << endl;
	cout << endl;
	cout << "CGO. PRODUCTO" << setw(30) << "STOCK FINAL PONDERADO" << endl;
	for (int i = 0;i < 2500;i++)
	{
		cout << setw(9) << desc[i][0] << setw(26) << stock[i][3] << endl;
	}
	return 0;
}
