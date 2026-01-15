#include <iostream>
#include <ctime>
using namespace std;
/*Realice una función que reciba como parámetros un vector de enteros, la cantidad de
elementos y un valor a buscar. La función debe devolver – POR PARÁMETRO – cuantas veces se
encuentra el valor buscado en el vector*/
//Prototipo
int busqueda(int vector[], int n, int busq);
int main(int argc, char *argv[]) {
	int vector[100], n, busq;
	//Carga de datos
	cout << "Ingrese la cantidad de elementos para el vector: ";
	cin >> n;
	srand(time(NULL));//Semilla
	cout << "Ingrese valores para cada elemento del vector: " << endl;
	for (int i = 0;i < n;i++)
	{
		vector[i] = (rand() % 50) + 1;//Generador de números aleatorios
		cout << "Elemento " << i+1 << ": " << vector[i] << endl;
	}
	cout << endl;
	cout << "Ingrese un valor para saber las repeticiones en el vector: ";
	cin >> busq;
	cout << endl;
	//Llamada de la función
	cout << "Repeticiones: " << busqueda(vector, n, busq);
	return 0;
}
int busqueda(int vector[], int n, int busq){
	int rep = 0;
	for (int i = 0;i < n;i++)
	{
		if (busq == vector[i])
		{
			rep++;
		}
	}
	return rep;
}

