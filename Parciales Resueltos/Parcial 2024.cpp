#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	float atletas[2][2], aux;
	string desc[2][2], cod, dis, record, aux1;
	int acumpart = 0, puesto, puestos[2][6] = {}, abandonaron[2] = {}, aband = 0, rec = 0;
	//Carga de datos
	cout << "Ingrese los datos de los paises participantes: " << endl;
	cout << endl;
	for (int i = 0;i < 2;i++)
	{
		printf("País participante %d de %d\n",i+1,2);
		cout << "Código de país (alfanumerico): ";
		getline(cin, desc[i][0]);
		cout << "Nombre del país: ";
		getline(cin, desc[i][1]);
		cout << "Cantidad de atletas que competirán: ";
		cin >> atletas[i][0];
		acumpart += atletas[i][0];
		cout << endl;
		cin.ignore();
	}
	int c = 0;
	cout << "Ingrese los datos de cada uno de los atletas participantes: " << endl;
	while (c < acumpart)
	{
		int i = 0;
		cout << "Código de país (alfanumerico): ";
		getline(cin, cod);
		//Busqueda para saber si el codigo ingresado se encuentra en el arreglo
		for (i = 0;(i < 2) && (cod != desc[i][0]);i++)
			;
		if (i < 2)
		{
			cout << "Disciplina del participante: ";
			getline(cin, dis);
			cout << "Puesto obtenido del 1 al 5 inclusive (0: Abandono la competencia): ";
			cin >> puesto;
			cin.ignore();
			if (puesto == 0)
			{
				abandonaron[i]++;
				aband++;
			}
			switch (puesto)
			{
			case 1: puestos[i][puesto]++;
			break;
			case 2: puestos[i][puesto]++;
			break;
			case 3: puestos[i][puesto]++;
			break;
			case 4: puestos[i][puesto]++;
			break;
			case 5: puestos[i][puesto]++;
			break;
			}
			if (puesto == 1)
			{
				cout << "Ingrese 'S' si logro batir el record mundial o 'N' en caso contrario: ";
				getline(cin, record);
				rec++;
			}
			c++;
		}
		else
		{
			cout << "El código ingresado no se encuentra en la base de datos" << endl;
		}
		cout << endl;
	}
	//Calculo para el porcentajes de podios
	for (int i = 0;i < 2;i++)
	{
		atletas[i][1] = ((atletas[i][0] - abandonaron[i])/acumpart)*100;
	}
	//Ordenamiento
	for (int i = 0;i < (2-1);i++)
	{
		for (int j = i+1;j < 2;j++)
		{
			if (atletas[i][1] < atletas[j][1])
			{
				for (int k = 0;k < 2;k++)
				{
					aux = atletas[i][k];
					atletas[i][k] = atletas[j][k];
					atletas[j][k] = aux;
				}
				aux1 = desc[i][0];
				desc[i][0] = desc[j][0];
				desc[j][0] = aux1;
			}
		}
	}
	//Informe
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "Nombre País" << setw(25) << "1er Puesto" << setw(25) << "2do Puesto" << setw(25) << "3er Puesto" << setw(25) << "4to Puesto" << setw(25) << "5to Puesto" << endl;
	for (int i = 0;i < 2;i++)
	{
		cout << desc[i][1] << setw(23) << puestos[i][1] << setw(25) << puestos[i][2] << setw(25) << puestos[i][3] << setw(25) << puestos[i][4] << setw(25) << puestos[i][5] << endl;
	}
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "Código País" << setw(30) << "Total Atletas" << setw(30) << "% Podios" << endl;
	for (int i = 0;i < 2;i++)
	{
		cout << desc[i][0] << setw(30) << atletas[i][0] << setw(35) << atletas[i][1] << endl;
	}
	cout << endl;
	cout << "Cantidad total de atletas que abandonaron: " << aband << endl;
	cout << "Cantidad total de atletas que hicieron record mundial: " << rec;
	return 0;
}

