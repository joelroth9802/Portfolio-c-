#include <iostream>
using namespace std;
/*Realice una función que obtenga la mediana de un vector (promedio entre los valores centrales
de un vector ordenado), la función recibe de parámetros el vector y la cantidad de elementos del
mismo.*/
int mediana(int vector[], int n);//Prototipo
int main(int argc, char *argv[]) {
	int vector[50], n;
	//Carga de datos
	cout << "Ingrese la cantidad de elementos para el vector: ";
	cin >> n;
	cout << endl;
	cout << "Ingrese los valores para cada elemento:" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Vector " << i+1 << ": ";
		cin >> vector[i];
	}
	cout << endl;
	cout << "Mediana del vector: " << mediana(vector, n);
	return 0;
}
int mediana(int vector[], int n){
	int aux, med, l, lim;
	//Ordenamiento
	for (int i = 0;i < (n-1);i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (vector[i] > vector[j])
			{
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
	//Si la cantidad de elementos es impar, el núm. del medio es la mediana
	if (n%2 != 0)
	{
		lim = (n/2) + 1;
		for (int i = 0;i < lim;i++)
		{
			med = vector[i];
		}
	}
	//Si la cantidad de elementos es par, en un vector[4] = {3,4,6,8} se suma 4+6 y se calcula el promedio (4+6)/2
	if (n%2 == 0)
	{
		l = (n/2) - 1;
		med = (vector[l] + vector[l+1])/2;
	}
	return med;
}

