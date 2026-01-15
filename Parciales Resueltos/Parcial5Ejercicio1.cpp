#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	int cant[5][2], tipo, dia, mes, meses[5][4] = {}, dni, cant1[5][2] = {}, aux;
	float totales[5][2] = {};
	string pat[5], pat1[5], tmulta[5], patente, aux1;
	//Carga de datos
	cout << "Ingrese los datos de las motos registradas:" << endl;
	cout << endl;
	for (int i = 0;i < 5;i++)
	{
		printf("Moto registrada %d de %d \n",i+1,5);
		cout << "Patente: ";
		getline(cin, pat[i]);
		cout << "Nro de carnet del propietario: ";
		cin >> dni;
		cout << "Cantidad de multas: ";
		cin >> cant[i][1];
		cout << "Cantidad de acarreos: ";
		cin >> cant[i][2];
		pat1[i] = pat[i];//Se traspasan las patentes a otro arreglo para que no salgan ordenados
		cout << endl;
		cin.ignore();
	}
	tmulta[0] = "Exceso de velocidad";
	tmulta[1] = "Documentación vencida";
	tmulta[2] = "Conducir sin licencia";
	tmulta[3] = "Conducir sin casco";
	tmulta[4] = "Conducir alcoholizado";
	cout << "Tipos de multas" << endl;
	cout << "1: Exceso de velocidad" << endl;
	cout << "2: Documentación vencida" << endl;
	cout << "3: Conducir sin licencia" << endl;
	cout << "4: Conducir sin casco" << endl;
	cout << "5: Conducir alcoholizado" << endl;
	int acumgen = 0;
	cout << "Datos de las multas efectuadas" << endl;
	cout << "Ingrese patente de la moto: ";
	getline(cin, patente);
	while (patente != "X")
	{
		int i = 0;
		//Verificación para saber si se encuentra la patente
		for (i = 0;(i < 5) && (patente != pat[i]);i++)
			;
		if (i < 5)
		{
			cout << "Ingrese tipo de multa: ";
			cin >> tipo;
			cout << "Fecha de la multa:" << endl;
			cout << "Día: ";
			cin >> dia;
			cout << "Mes (1: Mayo - 2: Junio - 3: Julio - 4: Agosto): ";
			cin >> mes;
			if ((tipo == 3) || (tipo == 4) || (tipo == 5))
			{
				cant1[i][1]++;//Acumulador para los acarreos
				switch (mes)
				{
				case 1: meses[i][0]++;
				break;
				case 2: meses[i][1]++;
				break;
				case 3: meses[i][2]++;
				break;
				case 4: meses[i][3]++;
				break;
				}
			}
			else
			{
				cant1[i][0]++;
			}
			acumgen++;//Acumulador de las multas
			switch (tipo)
			{
			case 1: totales[0][0]++;
			break;
			case 2: totales[1][0]++;
			break;
			case 3: totales[2][0]++;
			break;
			case 4: totales[3][0]++;
			break;
			case 5: totales[4][0]++;
			break;
			}
		}
		else
		{
			cout << "La patente ingresada no se encuentra en la base de datos" << endl;
		}
		cout << endl;
		cin.ignore();
		cout << "Ingrese patente de la moto: ";
		getline(cin, patente);
	}
	float acumporc = 0;//Acumulador para los porcentajes
	for (int i = 0;i < 5;i++)
	{
		totales[i][1] += (totales[i][0]/acumgen)*100;
		acumporc += totales[i][1];
	}
	//Ordenamiento
	for (int i = 0;i < (5-1);i++)
	{
		for (int j = i+1;j < 5;j++)
		{
			if (cant1[i][0] < cant1[j][0])
			{
				for (int k = 0;k < 2;k++)
				{
					aux = cant1[i][k];
					cant1[i][k] = cant1[j][k];
					cant1[j][k] = aux;
				}
				
				aux1 = pat[i];
				pat[i] = pat[j];
				pat[j] = aux1;
			}
		}
	}
	//Informe
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "PATENTE" << setw(30) << "CANT. MULTAS" << setw(30) << "CANT. ACARREOS" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << pat[i] << setw(26) << cant1[i][0] << setw(30) << cant1[i][1] << endl;
	}
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "PATENTE" << setw(20) << "MAYO" << setw(20) << "JUNIO" << setw(20) << "JULIO" << setw(20) << "AGOSTO" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << pat1[i] << setw(19) << meses[i][0] << setw(20) << meses[i][1] << setw(20) << meses[i][2] << setw(20) << meses[i][3] << endl;
	}
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << setw(13) << "TIPO" << setw(34) << "TOTAL MULTAS" << setw(25) << "PORCENTAJES" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << setw(13) << tmulta[i] << setw(26) << totales[i][0] << setw(25) << totales[i][1] << endl;
	}
	cout << endl;
	cout << "TOTALES" << endl;
	cout << "Cantidad: " << acumgen << setw(20) << "Porcentajes: % " << acumporc;
	return 0;
}
