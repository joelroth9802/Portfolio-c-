#include <iostream>
using namespace std;
/*Diseñe una función C++ que determine el mayor de 3 números enteros dados. La función
recibe 3 números enteros y devuelve en otra variable diferente, el mayor valor. Utilice para ello la
cantidad de parámetros por referencia que crea conveniente.*/
int maximo(int vector[]);//Prototipo
int main(int argc, char *argv[]) {
	int vector[3];
	//Carga de datos
	cout << "Ingrese 3 valores numericos: " << endl;
	for(int i = 0;i < 3;i++)
	{
		cout << "Valor " << i+1 << ": ";
		cin >> vector[i];
	}
	cout << endl;
	//Llamada de la función
	cout << "Máximo valor: " << maximo(vector);
	return 0;
}
//Función
int maximo(int vector[]){
	int max = 0;
	for (int i = 0;i < 3;i++)
	{
		//Máximo
		if (vector[i] > max)
		{
			max = vector[i];
		}
	}
	return max;
}

