#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	int ger[10][2], cod, cant, dia, hora, monto, gersup = 0, maxger = 0;
	int saldo[10] = {};
	string nom[10], maxnom;
	//Carga de datos
	cout << "Ingrese los datos de cada gerente: " << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "Gerente " << i+1 << endl;
		cout << "Código (1 a 10): ";
		cin >> ger[i][0];
		cin.ignore();
		cout << "Nombre: ";
		getline(cin, nom[i]);
		cout << "Monto inicial acreditado: ";
		cin >> ger[i][1];
		saldo[i] += ger[i][1];//Acumulador de los saldos de cada gerente
		cout << endl;
	}
	cout << "Ingrese los datos de las llamadas efectuadas en el mes:" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "Código de gerente (1 a 10): ";
		cin >> cod;
		--cod;
		cout << "Ingrese cantidad de llamadas: ";
		cin >> cant;
		int acum = 0;
		for (int j = 0;j < cant;j++)
		{
			cout << "Llamada " << j+1 << endl;
			cout << "Ingrese día de la llamada: ";
			cin >> dia;
			cout << "Ingrese hora (0...23): ";
			cin >> hora;
			cout << "Ingrese monto de la llamada: ";
			cin >> monto;
			cout << endl;
			acum += monto;//Acumulador de los montos de las llamadas
		}
		saldo[cod] -= acum;//Se le resta el monto de las llamadas al soldo asignado a cada gerente
		//Calculo para obtener la cantidad de gerentes que superaron el monto inicial asignado
		if (acum > ger[cod][1])
		{
			gersup++;
		}
		//Calculo para obtener el máximo gasto de llamadas
		if (acum > maxger)
		{
			maxger = acum;
			maxnom = nom[cod];
		}
		cout << endl;
	}
	//Informe
	cout << "----------------------------------------------------------------------------------------------" << endl;
	cout << "Cgo. Gerente" << setw(30) << "Nombre del gerente" << setw(23) << "Mto Asignado" << setw(20) << "Saldo" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << setw(6) << ger[i][0] << setw(36) << nom[i] << setw(23) << ger[i][1] << setw(20) << saldo[i] << endl;
	}
	cout << endl;
	cout << "Cantidad de gerentes que superaron el monto inicial asignado: " << gersup << endl;
	cout << "Gerente que realizó el mayor gasto total en llamadas: " << maxnom;
	return 0;
}
