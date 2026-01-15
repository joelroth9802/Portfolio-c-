#include <iostream>
#include <ctime>
using namespace std;
/*Realice una función que calcule la moda (valor que tiene más frecuencia, o sea que más se
repite) de un vector, la función recibe de parámetros el vector y la cantidad de elementos del
mismo*/
int moda(int vector[],int n);//Prototipo
int main(int argc, char *argv[]) {
	int vector[50], n;
	//Carga de datos con valores aleatorios
	cout << "Ingrese la cantidad de elementos para el vector: ";
	cin >> n;
	srand(time(NULL));//Semilla
	for (int i = 0;i < n;i++)
	{
		vector[i] = (rand() % 50) + 1;
		cout << "Elemento " << i+1 << ": " << vector[i] << endl;
	}
	cout << endl;
	//Llamada de la función moda
	cout << "Valor más repetido: " << moda(vector, n);
	return 0;
}
int moda(int vector[],int n){
	int c[50] = {}, vector1[50], max = 0, valor;
	for (int i = 0;i < n;i++)
	{
		//Copio los elementos del primer vector a otro vector
		vector1[i] = vector[i];
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			//Si el elemento del vector es igual a algunos de los elementos del otro vector
			if (vector1[i] == vector[j])
			{
				//El vector de elementos repetidos se incrementa
				c[i]++;
			}
		}
		//Calculo para saber el elemento que más repeticiones tuvo
		if (c[i] > max)
		{
			max = c[i];
			valor = vector1[i];
		}
	}
	return valor;
}

