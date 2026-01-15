#include <iostream>
using namespace std;
/*Realice una función que implemente una busqueda binaria en un arreglo. La función recibirá
un arreglo, la cantidad de elementos, el valor a buscar. Devolverá en el nombre, la posición del
elemento buscado, -1 en el caso de no encontrarlo.*/
int busqbinaria(int vector[], int n, int busq);//Prototipos
int main(int argc, char *argv[]) {
	int vector[100], n, busq;
	//Carga de datos
	cout << "Ingrese la cantidad de elementos para el vector: ";
	cin >> n;
	cout << "Ingrese los valores para cada elemento: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Elemento " << i+1 << ": ";
		cin >> vector[i];
	}
	cout << endl;
	cout << "Ingrese un valor para realizar la busqueda en el vector: ";
	cin >> busq;
	cout << endl;
	//Informe y llamada de la función
	cout << "El valor ingresado se encuentra en la posición: " << busqbinaria(vector, n, busq);
	return 0;
}
//Función
int busqbinaria(int vector[], int n, int busq){
	int aux, num;
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
	//Busqueda binaria
	int li = 0, ls = n - 1, medio = (li + ls)/2;
	while ((li <= ls) && (vector[medio] != busq))
	{
		if (busq < vector[medio])
			ls = medio - 1;
		else li = medio + 1;
		medio = (li + ls)/2;
	}
	if (li > ls)
	{
		num = -1;
	}
	else
	{
		num = medio + 1;
	}
	return num;
}

