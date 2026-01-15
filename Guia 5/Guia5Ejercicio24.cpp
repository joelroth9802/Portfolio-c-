#include <iostream>
#include <iomanip>
using namespace std;
/*Cuenta la leyenda que el inventor del ajedrez le exigió al rey como pago por su invento 1
grano de trigo en el primer casillero y en el siguiente casillero el doble al anterior, repitiendo
este procedimiento por cada casillero del tablero.
Muestre en una matriz cuadrada de 8x8 la cantidad de granos correspondiente a cada
casillero e informe la cantidad total de granos que recibió el inventor.*/
int main(int argc, char *argv[]) {
	//Declaración de variables
	//unsigned long long se utiliza para nros muy grandes enteros positivos
	unsigned long long matriz[8][8], total, aux;
	//Acumuladores
	total = 0; aux = 1;
	for (int i = 0;i < 8;i++)
	{
		cout << "Fila: "<< i+1 << ": ";
		for (int j = 0;j < 8;j++)
		{
			matriz[i][j] = aux;
			cout << setw(24) << matriz[i][j]; 
			total += aux;
			aux *= 2;//Se incremente X 2 el resultado
			
		}
		cout << endl;
	}
	cout << endl;
    cout << "El inventor recibio: " << total << " granos";
	return 0;
}

