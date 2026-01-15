#include <iostream>
#include <iomanip>
using namespace std;
/*Ingresar en un vector de 10 elementos número enteros. Ordénelo utilizando el método de mínimos
sucesivos y infórmelo completo cada vez que realiza un cambio en los valores (para ver el progreso del
ordenamiento).*/
int main(int argc, char *argv[]) {
	//Variables
	int num[10], aux;
	//Carga de datos
	cout << "Ingrese 10 números enteros: " << endl;
	cout << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "Numero " << i+1 << ": ";
		cin >> num[i];
	}
	cout << endl;
	//Ordenamiento
	for (int i = 0;i < (10-1);i++)
	{
		for (int j = i+1;j < 10;j++)
		{
			if (num[i] > num[j])
			{
				//Se muestra el proceso de intercambio de los números
				cout << "Se intercambia el nro " << num[i] << " por el nro " << num[j] << endl;
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	//Informe
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Vector ordenado: ";
	for (int i = 0;i < 10;i++)
	{
		cout << setw(4) << num[i];
	}
	return 0;
}

