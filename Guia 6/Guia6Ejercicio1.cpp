#include <iostream>
using namespace std;
/*Escriba un algoritmo que lea una lista de N datos numéricos (sin ordenar) y determine la posición de
un número que se lee como dato. Si el dato buscado no se encuentra mostrar un mensaje que indique
que el mismo no fue hallado*/
int main(int argc, char *argv[]) {
	//Se inicializa el arreglo con los elementos requeridos y las variables
	int lista[10] = {2, 5, 7, 4, 8, 13, 15, 17, 35, 39};
	int num, i;
	//Se lee el número que se quiere encontrar
	cout << "Ingrese el número que está buscando: ";
	cin >> num;
	//Se recorre el arreglo, mientras que el número que se desea encontrar sea diferente a los números del arreglo
	//Si el número es igual a algún num del arreglo, la condiciónda por falsa y el bucle deja de iterar
	//Quedando la varible "i" con la posición del número encontrado
	for (i = 0;(i < 10) && (num != lista[i]);i++)
		;
	//Informe
	cout << "--------------------------------------------------------" << endl;
	if (i == 10)
	{
		cout << "El dato que ingreso, no se encuentra en el arreglo.";
	}
	else
	{
		cout << "El dato ingresado se encuentra en la posición: " << i;
	}
	return 0;
}

