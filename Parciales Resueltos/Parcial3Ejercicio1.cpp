#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	string desc[54][2], cod, aux1, tip[54];
	float valor[54][2], dpto, cant, cantTipoP, cantTipoB, total, totalporc, aux, porcTipoB;
	//Acumuladores generales
	cantTipoP = 0; cantTipoB = 0; total = 0; totalporc = 0;
	//Datos
	cout << "Ingrese los datos de los 54 delitos efectuados: " << endl;
	for (int i = 0;i < 54;i++)
	{
		cout << "Delito " << i+1 << endl;
		cout << "Ingrese código de delito: ";
		getline(cin, desc[i][0]);
		cout << "Ingrese nombre del detenido: ";
		getline(cin, desc[i][1]);
		cout << "Ingrese tipificación (P: Persona - B: Bienes): ";
		getline(cin, tip[i]);
		valor[i][0] = 0;
		valor[i][1] = 0;
		cout << endl;
	}
	cout << "Datos relevados" << endl;
	cout << "Ingrese código del delito: ";
	getline(cin, cod);
	int i = 0;
	while (cod != "xxx")
	{
		//Si el código ingresado es igual a alguno de los ingresados anteriormente
		//la variable "i" queda con la posicion en la que se encontro dicho código
		for (i = 0;(i < 54) && (cod != desc[i][0]);i++)
			;
		//Si la variable "i" quedo en una posición menor a 54, se ingresan los datos restantes
		//Si no, si el la busqueda no se encontro y se completo el bucle, el codigo es incorrecto
		if (i < 54)
		{
			cout << "Ingrese código del Dpto (1 a 17): ";
		    cin >> dpto;
			cout << "Ingrese cantidad de información relevada: ";
		    cin >> cant;
		    valor[i][0] += cant;
		    if ((dpto == 15) && (tip[i] == "P"))
		    {
				cantTipoP++;
		    }
			if (tip[i] == "B")
		    {
			    cantTipoB++;
		    }
		    total += cant;
			cin.ignore();
		}
		else
		{
			cout << "Código incorrecto, ingrese un código que se encuentre en la base de datos." << endl;
		}
		cout << endl;
		i = 0;//Se inicializa en 0 nuevamente, para volver a hacer la busqueda
		cout << "Ingrese código del delito: ";
		getline(cin, cod);
	}
	//Porcentajes
	porcTipoB = round((cantTipoB/54)*100);
	for (int i = 0;i < 54;i++)
	{
		valor[i][1] += round((valor[i][0]/total)*100);
		totalporc += valor[i][1];
	}
	//Ordenamiento en base a la cant. de delitos
	for (int i = 0;i < (54-1);i++)
	{
		for (int j = i+1;j < 54;j++)
		{
			if (valor[i][0] < valor[j][0])
			{
				for(int k = 0;k < 2;k++)
				{
					aux = valor[i][k];
					valor[i][k] = valor[j][k];
					valor[j][k] = aux;
					
					aux1 = desc[i][k];
					desc[i][k] = desc[j][k];
					desc[j][k] = aux1;
				}
			}
		}
	}
	//Informe
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "CGO. DELITO" << setw(25) << "NOMBRE" << setw(15) << "CANTIDAD" << setw(15) << "PORCENTAJE" << endl;
	for (int i = 0;i < 54;i++)
	{
		cout << setw(9) << desc[i][0] << setw(27) << desc[i][1] << setw(12) << valor[i][0] << setw(13) << "%" << valor[i][1] << endl;
	}
	cout << endl;
	cout << "TOTALES: " << setw(39) << total << setw(15) << totalporc << endl;
	cout << "Cantidad de delitos de tipo P en el Departamento 15: " << cantTipoP << endl;
	cout << "Porcentaje de delitos de tipo B sobre el total de delitos: %" << porcTipoB;
	return 0;
}

