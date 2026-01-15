#include <iostream>
using namespace std;
/*Realice una función que implemente una busqueda secuencial en un arreglo. La función
recibirá un arreglo, la cantidad de elementos, el valor a buscar. Devolverá en el nombre, la
posición del elemento buscado, -1 en el caso de no encontrarlo*/
int busqsecuencial(int vector[], int n, int busq);//Prototipo
int main(int argc, char *argv[]) {
	int vector[100], n, busq;
	//Carga de datos
	cout << "Ingrese la cantidad de elementos para el vector: ";
	cin >> n;
	cout << "Ingrese los valores para cada elemento: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Elemento: " << i+1 << ": ";
		cin >> vector[i];
	}
	cout << endl;
	cout << "Igrese un valor para realizar la busqueda en el vector: ";
	cin >> busq;
	cout << endl;
	//Informe y llamada de la función
	cout << "El valor ingresado se encuentra en la posición: " << busqsecuencial(vector, n, busq);
	return 0;
}
//Función
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

