#include <iostream>
#include <climits>
using namespace std;
/*Escribir un programa que pida 10 números enteros por teclado, los almacene en un vector
llamado NUM y luego emita los siguientes informes:
a) Cuántos de esos números son pares.
b) Cuál es el valor del número máximo.
c) Cuál es el valor del número mínimo.
d) Se ingrese un valor entero e indique si este número está entre los almacenados en el
arreglo.*/
int main(int argc, char *argv[]) {
	int num[10], pares, nMax, nMin, valor, t, c, pos;
	cout << "Ingrese 10 números enteros por teclado: " << endl;
	cout << endl;
	pares = 0; nMax = 0; nMin = INT_MAX; t = 0; c = 0;
	for (int i = 0;i < 10;i++)
	{
		cout << "Teclado " << ++t << ": ";
		cin >> num[i];
		//Punto a)
		if (num[i]%2==0)
		{
			pares++;
		}
		//Punto b)
		if (num[i] > nMax)
		{
			nMax = num[i];
		}
		//Punto c)
		if (num[i] < nMin)
		{
			nMin = num[i];
		}
	}
	//Punto d)
	cout << endl;
	cout << "Ingrese un valor entero para verificar si está almacenado en el arreglo: ";
	cin >> valor;
	cout << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Cantidad de números pares: " << pares << endl;
	cout << "Valor del número maximo: " << nMax << endl;
	cout << "Valor del número minimo: " << nMin << endl;
	//Verificación para saber si el número ingresado se encuentra en el arreglo
	for (int i = 0;i < 10;i++)
	{
		if (num[i] == valor)
		{
			c++;
			pos = i;
		}
	}
	cout << endl;
	if (c != 0)
	{
		cout << "Si, el número ingresado está en el arreglo y se encuentra en la posición " << ++pos;
	}
	else
	{
		cout << "No, el número ingresado no está en el arreglo";
	}
	return 0;
}

