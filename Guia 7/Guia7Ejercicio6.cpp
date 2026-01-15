#include <iostream>
#include <iomanip>
using namespace std;
/*Realice una función que ordene los elementos de un vector, la función recibe de parámetros el
vector y la cantidad de elementos del mismo*/
void ordenar(int vector[], int n);//Prototipo
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
	//Llamada de la función
	ordenar(vector, n);
	return 0;
}
void ordenar(int vector[], int n){
	int aux;
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
	//Informe del vector ordenado
	cout << "Vector ordenado: ";
	for (int i = 0;i < n;i++)
	{
		cout << setw(5) << vector[i];
	}
}

