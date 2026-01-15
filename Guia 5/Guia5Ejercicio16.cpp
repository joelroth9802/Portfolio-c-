#include <iostream>
#include <string>
using namespace std;
/*Una empresa que se dedica a la venta de reactivos químicos posee un plantel de 50
vendedores que realizan sus ventas a laboratorios de todo el país y del exterior. Cada
vendedor posee un número de código entre 1 y 50.
La empresa comercializa 15 tipos de reactivos, los que se encuentran codificados de 1 a 15, y
cuyos precios se ingresan al principio, ordenados por código.
Se conocen además los apellidos y nombres de los vendedores, con su código
correspondiente, sin orden alguno.
Luego se conocen las ventas realizadas por la empresa, ingresándose por cada una: Código
de vendedor (1 a 50), código de reactivo (1 a 15), cantidad vendida y tipo de venta (N:
Nacional o I: Internacional). Pueden venir varias ventas para un mismo vendedor y para un
mismo reactivo. Las ventas se ingresan sin ningún orden. El fin de datos está dado por un
código de vendedor = 99.
Se desea conocer:
a) Por cada venta, el total vendido en cantidad y monto, indicando el apellido y nombre del
vendedor que la realizó.
b) Monto total de ventas nacionales y monto total de ventas internacionales.
c) Cantidad total vendida de cada reactivo.*/
int main(int argc, char *argv[]) {
	//Declaracion de vectores y variables
	int reactivos[15], acumreactivo[15], codvendedor, codreactivo, cantvendida, monto, totinter, totnacional;
	string nombres[50], tipoventa;
	cout << "Ingrese precios para cada tipo de reactivo:" << endl;
	for (int i = 0;i < 15;i++)
	{
		cout << "Reactivo " << i+1 << ": ";
		cin >> reactivos[i];//Se leen los precios para cada tipo de reactor
		acumreactivo[i] = 0;//Se inicializa el acumulador de cantidades para cada tipo de reactivo en 0
	}
	cout << endl;
	cin.ignore();
	cout << "Ingrese apellido y nombre de los vendedores:" << endl;
	for (int i = 0;i < 50;i++)
	{
		cout << "Vendedor " << i+1 << ": ";
		getline(cin, nombres[i]);//Se leen nombres y apellidos de los vendedores
	}
	cout << endl;
	totinter = 0; totnacional = 0;//Se inicializa acumuladores generales de ventas en 0
	cout << "Ingrese código de vendedor del 1 al 50: ";
	cin >> codvendedor;
	--codvendedor;
	while (codvendedor != 98)
	{
		//Se cargan los datos de cada venta
		cout << "Ingrese código de reactivo: ";
		cin >> codreactivo;
		--codreactivo;
		cout << "Ingrese cantidad vendida de reactivos: ";
		cin >> cantvendida;
		cin.ignore();
		cout << "Ingrese tipo de venta, N: Nacional - I: Internacional: ";
		getline(cin, tipoventa);
		monto = reactivos[codreactivo]*cantvendida;//Calculo para obtener el precio de la venta
		cout << "------------------------------------------------------------------" << endl;
		//Se muestra en pantalla el recibo de cada venta
		cout << "Vendedor " << codvendedor+1 << endl;
		cout << "Nombre y apellido: " << nombres[codvendedor] << endl;
		cout << "Total vendido en cantidad: " << cantvendida << endl;
		cout << "Monto de la venta: $ " << monto << endl;
		cout << "------------------------------------------------------------------" << endl;
		//Se inicializa un if para acumular los montos de cada tipo de venta
		if (tipoventa == "N")
		{
			totnacional += monto;
		}
		else
		{
			totinter += monto;
		}
		acumreactivo[codreactivo] += cantvendida;//Acumulador para saber la cantidad de veces que se vendio cada reactivo
		cout << "Ingrese código de vendedor del 1 al 50: ";
		cin >> codvendedor;
		--codvendedor;
	}
	cout << "------------------------------------------------------------------" << endl;
	//Se muestra en pantalla los datos generales de cada venta
	cout << "Monto total de ventas nacionales: $ " << totnacional << endl;
	cout << "Monto toal de ventas internacionales: $ " << totinter << endl;
	cout << endl;
	//Mediante la utilización de un bucle for, se muestra en pantalla la cantidad de ventas para cada tipo de reactivo
	cout << "Total cantidad vendida de cada reactivo:" << endl;
	for(int i = 0;i < 15;i++)
	{
		cout << "Reactivo " << i+1 << ": " << acumreactivo[i] << endl;
	}
	return 0;
}

