#include <iostream>
#include <ctime>
using namespace std;
/*Debe generar un vector de N posiciones con números obtenidos al azar entre 1 y C con las
siguientes restricciones:
- el vector debe ir llenándose en orden desde la posición 1 hasta la N.
- los números obtenidos podrán almacenarse si dicho número es mayor al almacenado en la
posición anterior.
- los números obtenidos podrán almacenarse sólo si permiten que el vector pueda ser llenado
en su totalidad (sin pasar el valor C en la posición N)
Los valores de N y C se ingresan al inicio.*/
int main(int argc, char *argv[]) {
	int vector[200], n, c;
	cout << "Ingrese un valor para N: ";
	cin >> n;
	cout << "Ingrese un valor para C: ";
	cin >> c;
	srand(time(NULL));
	vector[0] = 0;
	int cont = 0, i = 1;
	do{
		vector[i] = ((rand() % c) + 1);
		if (vector[i] > vector[i - 1])
		{
			vector[0] = vector[i];
			cout << "Elemento nro " << ++cont << ": " << vector[i] << endl;
			i++;
		}
	}while(i < n);
	return 0;
}

