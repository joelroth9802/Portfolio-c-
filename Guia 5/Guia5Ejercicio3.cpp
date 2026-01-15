#include <iostream>
using namespace std;
/*Escribir un programa que lea un vector de 10 números enteros. Deberá mostrar el mismo
vector por pantalla pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa
debería imprimir 10 9 8 7 6 5 4 3 2 1.*/
int main(int argc, char *argv[]) {
	int num[10], c;
	//Leer los números enteros
	cout << "Ingrese 10 números enteros: " << endl;
	c = 0;
	for (int i = 0;i < 10;i++)
	{
		cout << "Número " << ++c << ": ";
		cin >> num[i];
	}
	//Mostrar el vector en pantalla invertido
	cout << endl;
	c = 0;
	for (int i = 9;i >= 0;i--)
	{
		cout << "Número " << ++c << ": " << num[i] << endl;
	}
	return 0;
}

