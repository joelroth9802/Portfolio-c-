#include <iostream>
#include <cstdio>
using namespace std;
/*Ingresar 5 números enteros por teclado. Luego, generar un nuevo arreglo, donde sus
elementos sean los del arreglo anterior, pero multiplicados por 3. Mostrar por pantalla el
segundo arreglo.*/
int main(int argc, char *argv[]) {
	int num[5], c, aux;
	//Leer los números enteros
	cout << "Ingrese 5 números enteros: " << endl;
	c = 0;
	for (int i = 0;i < 5;i++)
	{
		cout << "Número " << ++c << ": ";
		cin >> num[i];
	}
	cout << "---------------------------------------------" << endl;
	//Generar segundo arreglo para multiplicarlo por 3
	for (int i = 0;i < 5;i++)
	{
		aux = num[i]*3;
		printf( "%d x 3 = %d \n",num[i],aux);
	}
	return 0;
}

