#include <iostream>
#include <ctime>
using namespace std;
/*Genere un arreglo de N elementos. Llénelo hasta la mitad con números al azar menores a
1000. Luego la mecánica del ejercicio será la siguiente: Genere 1 número al azar. Si el
número generado es mayor al último almacenado, agréguelo al arreglo, si es menor, elimine
ese último valor almacenado. Repita el procedimiento hasta que se dé 1 de las siguientes
condiciones:
1) el vector se vacíe.
2) el vector se llene.
3) se generen N*10 números al azar.
Informe: cantidad inicial de elementos, cantidad de elementos agregados, cantidad de
elementos eliminados, cantidad final de elementos.
El valor N se ingresa como primer dato.*/
int main(int argc, char *argv[]) {
	//Declaración de variables
	int vector[200], mitad, nro, N, elementosfin;
	cout << "Ingrese la cantidad de elementos para el areglo: ";
	cin >> N;
	srand(time(NULL));//Semilla para generar numeros aleatorios
	mitad = N/2;//Se divide la cantidad de elementos a la mitad
	//Se llena el vector hasta la mitad con números aleatorios
	for (int i = 0;i < mitad;i++)
	{
		vector[i] = (rand() % 1000) + 1;
	}
	//Acumuladores
	int cont = mitad, agre = 0, elim = 0, nrogenerados = 0;
	while ((cont < N) && (cont > 0) && (nrogenerados < 10)) 
	{
		//Nro aleatorio
		nro = (rand() % 1000) + 1;
		nrogenerados++;//Acumulador para la cantidad de nros generados
		//Si el nro generado es mayor que el ultimo nro almacenado, se almacena en el arreglo
		if (nro > vector[cont-1])
		{
			vector[cont] = nro;
			cont++;//Se incrementa el contador para avanzar a la siguiente posición del arreglo
			agre++;//Acumulador para los nros agregados
		}
		else//Si el nro generado es menor que el ultimo nro almacenado, se elimina el ultimo valor almacenado
		{
			cont--;//Se decrementa el contador para volver a generar un nuevo nro
			elim++;//Acumulador para los nros eliminados
		}
	}
	elementosfin = mitad - elim + agre;//Cantidad final de elementos
	for (int i = 0;i < elementosfin;i++)
	{
		cout << "Elemento " << i+1 << ": " << vector[i] << endl;
	}
	//Informe
	cout << "----------------------------------------------------" << endl;
	cout << "Cantidad inicial de elementos: " << mitad << endl;
	cout << "Cantidad de elementos agregados: " << agre << endl;
	cout << "Cantidad de elementos eliminados: " << elim << endl;
	cout << "Cantidad final de elementos: " << elementosfin;
	return 0;
}

