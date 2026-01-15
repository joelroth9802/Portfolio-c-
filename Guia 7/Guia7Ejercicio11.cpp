#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*Modifique la función del punto anterior para que además devuelva en el nombre (por Return) si
el valor se encontró*/
void busqueda(int vector[],int n,int busq, int &rep, string &men, int &medio);//Prototipo
int main(int argc, char *argv[]) {
	//Variables
	int vector[100], n, busq, rep, medio;
	string men;
	//Carga de datos
	cout << "Ingrese la cantidad de elementos para el vector: ";
	cin >> n;
	cout << "Ingrese valores para cada elemento del vector: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Elemento " << i+1 << ": ";
		cin >> vector[i];
	}
	cout << endl;
	cout << "Ingrese un valor para verificar si se encuentra en el arreglo: ";
	cin >> busq;
	cout << endl;
	//Llamada de la función
	busqueda(vector, n, busq, rep, men, medio);
	//Informe
	cout << "Vector ordenado: ";
	for (int i = 0;i < n;i++)
	{
		cout << setw(5) << vector[i];
	}
	cout << endl;
	cout << men << "en la posición " << medio << endl,
	cout << "Cantidad de repeticiones: " << rep;
	return 0;
}
//Función por parametros de referencia
void busqueda(int vector[],int n,int busq, int &rep, string &men, int &medio){
	int aux;
	rep = 0;//Acumulador de repeticiones
	//Ordenamiento
	for (int i = 0;i < n;i++)
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
		if (busq == vector[i])
		{
			rep++;
		}
	}
	/*Con busqueda secuencial
	int i = 0;
	for (i = 0;(i < n) && (busq != vector[i]);i++);
	if (i < n)
	{
	men = "El valor ingresado fue encontrado ";
	}
	else
	{
	men = "El valor ingresado no se encuentra en el arreglo";
	}*/
	//Busqueda binaria
	int li = 0, ls = n;
	medio = (li + ls)/2;
	while ((li <= ls) && (vector[medio] != busq))
	{
		if (busq < vector[medio])
			ls = medio - 1;
		else li = medio + 1;
		medio = (li + ls)/2;
	}
	if (li > ls)
	{
		men = "El valor ingresado no se encuentra en el arreglo";
	}
	else
	{
		men = "El valor ingresado fue encontrado ";
	}
}

