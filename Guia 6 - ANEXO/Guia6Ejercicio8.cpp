#include <iostream>
using namespace std;
/*Una clínica pediátrica desea realizar un control sobre los N nacimientos que se produjeron en el último
mes.
A cada niño se le realizaron 10 mediciones.
Primero se ingresan los documentos de los N niños. Luego sin orden se ingresan las mediciones, 
ingresándose por cada una DNI, valor de la medición.
Finalizada la carga, se pide informár por cada niño, el número de medición donde se obtuvo el mayor 
valor.*/
int main(int argc, char *argv[]) {
	//Variables
	int nac[50][11], max, med[10] = {}, n;
	//Carga de datos
	cout << "Ingrese los nacimientos que se produjeron en el ultimos mes: ";
	cin >> n;
	cout << endl;
	max = 0;
	cout << "Ingrese DNI y mediciones de cada niño: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Niño " << i+1 << endl;
		cout << "DNI: ";
		cin >> nac[i][0];
		cout << "Mediciones" << endl;
		for (int j = 1;j < 11;j++)
		{
			cout << "Medición " << j << ": ";
			cin >> nac[i][j];
			if (nac[i][j] > max)
			{
				max = nac[i][j];
				med[i] = max;
			}
		}
		max = 0;
		cout << endl;
	}
	//Informe
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Máximo valor que se obtuvo de cada niño: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Niño " << i+1 << endl;
		cout << "DNI: " << nac[i][0] << endl;
		cout << "Valor máximo: " << med[i] << endl;
		cout << endl;
	}
	return 0;
}

