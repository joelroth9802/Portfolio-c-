#include <iostream>
#include <ctime>
using namespace std;
/* Genere un vector de 1000 elementos con números al azar. Luego ingrese un valor y búsquelo en el
vector. Informar si se encontró y cuantos elementos comparó hasta encontrar el valor buscado.*/
int main(int argc, char *argv[]) {
	//Variables
	int num[1000] = {0}, valor;
	srand(time(NULL));//Semilla para generar el número aleatorio
	//Generación de números aleatorios en el arreglo
	for (int i = 0;i < 1000;i++)
	{
		num[i] += (rand() % 1000) + 1;
	}
	cout << endl;
	//Valor para buscar en el arreglo
	cout << "Ingrese un valor para buscar en el arreglo: ";
	cin >> valor;
	cout << endl;
	int i = 0;
	for (i = 0;(i < 1000) && (valor != num[i]);i++)
		;
	if (i < 1000)
	{
		cout << "El número fue encontrado." << endl;
		cout << "Cantidad de comparaciones: " << i+1;
	}
	else
	{
		cout << "El número ingresado no se encuentra en el arreglo.";
	}
	return 0;
}
