#include <iostream>
#include <ctime>
using namespace std;
/*Genere un vector de 1000 elementos con números al azar. Ordénelo. Luego ingrese un valor y
búsquelo en el vector realizando una búsqueda binaria. Informar si se encontró y cuantos elementos
comparó hasta encontrar el valor buscado.*/
int main(int argc, char *argv[]) {
	//Variables
	int num[1000] = {}, valor, medio, li, ls, c, aux;
	srand(time(NULL));//Semilla para generar los números aleatorios
	//Carga de números aleatorios
	for (int i = 0;i < 1000;i++)
	{
		num[i] += (rand() % 1000) + 1;
	}
	//Ordenamiento
	for (int i = 0;i < (1000-1);i++)
	{
		for (int j = i+1;j < 1000;j++)
		{
			if (num[i] > num[j])
			{
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	//Busqueda
	cout << "Ingrese un valor para buscar en el arreglo: ";
	cin >> valor;
	cout << endl;
	li = 0; ls = 1000; medio = (li + ls)/2; c = 0;
	while ((li <= ls) && (valor != num[medio]))
	{
		if (valor < num[medio])
			ls = medio - 1;
		else li = medio + 1;
		medio = (li + ls)/2;
		c++;
	}
	if (li > ls)
	{
		cout << "El número ingresado no se encuentra en el arreglo.";
	}
	else
	{
		cout << "El número fue encontrado." << endl;
		cout << "Cantidad de comparaciones: " << c;
	}
	return 0;
}

