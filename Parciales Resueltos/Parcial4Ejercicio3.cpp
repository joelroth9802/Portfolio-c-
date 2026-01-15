#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Variable
	int vector[50], n;
	//Carga de datos
	cout << "Ingrese la cantidad de valores para el arreglo: ";
	cin >> n;
	cout << "Ingrese valores de menor a mayor:" << endl;
	cout << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Valor " << i+1 << ": ";
		cin >> vector[i];
	}
	cout << endl;
	//Busqueda
	int busqueda, li = 0, ls = n, medio = (li + ls)/2, c = 0;
	cout << "Ingrese un valor para buscar: ";
	cin >> busqueda;
	while ((li <= ls) && (busqueda != vector[medio]))
	{
		if (busqueda < vector[medio])
			ls = medio - 1;
		else li = medio + 1;
		medio = (li + ls)/2;
		c++;//Acumulador de comparaciones
	}
	//Informe
	cout << "----------------------------------------------------------------" << endl;
	if (li > ls)
	{
		cout << "El valor ingresado no fue hallado en el arreglo";
	}
	else
	{
		cout << "Valor encontrado en la posición " << medio+1 << endl;
		cout << "Cantidad de comparaciones que se realizaron: " << c;
	}
	return 0;
}

