#include <iostream>
using namespace std;
/*Generar un vector numérico de N elementos, luego ingrese por cada elemento: posición en
el vector y valor a asignar. El valor N se ingresa como primer dato.*/
int main(int argc, char *argv[]) {
	//Se genera e ingresa valor para el vector
	int vector[20], n;
	cout << "Ingrese un valor que represente la cantidad de elementos del vector: ";
	cin >> n;
	//Se ingresa la posición y el valor a asignar
	int pos;
	for (int i = 0;i < n;i++)
	{
		cout << endl;
		cout << "Ingrese una posición del vector: ";
		cin >> pos;
		pos--;
		cout << "Ingrese un valor para la posición del vector seleccionado: ";
		cin >> vector[pos];
	}
	cout << "-------------------------------------------------------" << endl;
	//Se muestra el vector generado en pantalla
	int p = 0;
	for (int i = 0;i < n;i++)
	{
		cout << "Posición " << ++p << ": " << vector[i] << endl;
	}
	return 0;
}

