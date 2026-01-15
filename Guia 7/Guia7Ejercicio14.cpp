#include <iostream>
#include <iomanip>
using namespace std;
/*Realice una función que implemente una busqueda en un arreglo. La función recibirá un
areglo, la cantidad de elementos, el valor a buscar y un valor de bandera que indica si es
verdadero que el arreglo está ordenado o falso que indica que el arreglo está desordenado. De
acuerdo al valor de la bandera se buscará en forma binaria o secuencial. Invoque a las funciones
realizadas en los puntos anteriores.*/
//Prototipos
int busqsecuencial(int vector[], int n, int busq);
int busqbinaria(int vector[], int n, int busq);
int busqueda(int vector[], int n, int busq, bool band);
int main(int argc, char *argv[]) {
	int vector[100], n, busq, b;
	bool band = false;
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
	cout << "Ingrese un valor para realizar la busqueda: ";
	cin >> busq;
	cout << endl;
	//LLamada de la función principal
	b = busqueda(vector, n, busq, band);
	//Si la función es distinta de -1, se muestra el vector, y se muestra la posición del valor ingresado
	if (b != -1)
	{
		cout << "Vector: ";
		for (int i = 0;i < n;i++)
		{
			cout << setw(5) << vector[i];
		}
		cout << endl;
		cout << "El valor ingresado se encuentra en la posición: " << b; 
	}
	else
	{
		cout << "El valor ingresado no se encuentra en el arreglo.";
	}
	return 0;
}
//Función principal
int busqueda(int vector[], int n, int busq, bool band){
	int valor, ant;
	//Si el vector no esta ordenado, la bandera da verdadero
	for (int i = 0;i < n;i++)
	{
		ant = vector[i+1];
		if (vector[i] > ant)
		{
			band = true;
		}
	}
	//Si la bandera da verdadero, se aplica la busqueda binaria, sino se aplila la busqueda secuencial
	if (band == true)
	{
		//Llamada de función secundaria
		valor = busqbinaria(vector, n, busq);
	}
	else
	{
		//Llamada de función secundaria
		valor = busqsecuencial(vector, n, busq);
	}
	return valor;
}
//Función secundaria
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
//Función secundaria
int busqsecuencial(int vector[], int n, int busq){
	int i, num;
	//Busqueda secuencial
	for (i = 0;(i < n) && (busq != vector[i]);i++)
		;
	if (i < n)
	{
		num = i + 1;
	}
	else
	{
		num = -1;
	}
	return num;
}

