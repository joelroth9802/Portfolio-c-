#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*La Junta Electoral quiere contar con una aplicación para las siguientes elecciones. La misma debe
permitir ingresar por cada departamento de la provincia su nombre y cantidad de votantes; el ingreso se
realiza ordenado por el código del dpto (desde 1 a 17).
También debe permitir ingresar por cada partido político: su número de lista y su nombre. Se finaliza la
carga de datos al ingresar un nro de lista igual a 0.
Finalmente debe permitir ingresar por cada votante: DNI, código de departamento, número de lista a la
que votó. Se finaliza la carga de los votos al ingresar un DNI igual a 0.
La aplicación debe informar
- Por cada departamento: el porcentaje de votantes.
- El departamento que tenga el mayor porcentaje de votantes.
- Por cada partido: la cantidad total de votantes.
- Por cada departamento: el candidato de que partido es el ganador de las elecciones.
- La cantidad total de votantes.
La aplicación debe cumplir con las siguientes reglas:
- en el ingreso de los partidos políticos debe validar que no se ingrese un número de lista repetido.
- En el ingreso de los votos, se deben validar los ingresos: del DNI (que no haya votado aún), del
  código de departamento (de 1 a 17), y del número de lista (que exista).
- En la lista de votantes que se va formando, los DNI se deben insertar en el lugar que
  corresponda (de manera que la lista quede ordenada)
- la búsqueda por DNI se realice en forma binaria.*/
int main(int argc, char *argv[]) {
	int vot[17], nrolista[50] = {}, nro, maxdep, dni, coddep, doc[100] = {}, nro1;
	string prov[17], nom[50];
	float porcvot[17], acumvot, maxporvot;
	acumvot = 0; maxporvot = 0;
	cout << "Ingrese los datos de cada departamento: " << endl;
	for (int i = 0;i < 17;i++)
	{
		cout << "Departamento " << i+1 << endl;
		cout << "Nombre: ";
		getline(cin, prov[i]);
		cout << "Cantidad de votantes: ";
		cin >> vot[i];
		acumvot += vot[i];
		cin.ignore();
		cout << endl;
	}
	for (int i = 0;i < 17;i++)
	{
		porcvot[i] = round((vot[i]/acumvot)*100);
		if (porcvot[i] > maxporvot)
		{
			maxporvot = porcvot[i];
			maxdep = i+1;
		}
	}
	cout << "Ingrese los datos de cada partido político: " << endl;
	cout << "Ingrese número de lista: ";
	cin >> nro;
	int c = 0;
	while (nro != 0)
	{
		int i = 0;
		for (i = 0;(i < 50) && (nro != nrolista[i]);i++)
			;
		if (i < c)
		{
			cout << "Número de lista ingresado repetido." << endl;
		}
		else
		{
			nrolista[c] += nro;
			cin.ignore();
			cout << "Nombre del partido político: ";
			getline(cin, nom[c]);
			c++;
		}
		cout << endl;
		cout << "Ingrese número de lista: ";
		cin >> nro;
	}
	cout << endl;
	cout << "Datos de los votantes" << endl;
	cout << "Ingrese DNI del votante: ";
	cin >> dni;
	int cantPart[50] = {}, maxCantPart[17][50] = {}, m = 0;
	while (dni != 0)
	{
		int li = 0, ls = m - 1, medio = (li + ls)/2;
		while ((li <= ls) && (dni != doc[medio]))
		{
			if (dni < doc[medio])
				ls = medio - 1;
			else li = medio + 1;
			medio = (li + ls)/2;
		}
		if (li > ls)
		 {
			
			cout << "Ingrese código del departamento (1 al 17): ";
			cin >> coddep;
			--coddep;
			if ((coddep > 0) && (coddep < 17))
			{
				cout << "Ingrese nro de lista al que votó: ";
				cin >> nro1;
				int j = 0;
				for (j = 0;(j < c) && (nro1 != nrolista[j]);j++)
					;
				if (j < c)
				{
					int k = m;
					while ((k > 0) && (doc[k - 1] > dni)) 
					{
						doc[k] = doc[k - 1];
						k--;
					}
					doc[k] += dni;
					cantPart[j]++;
					maxCantPart[coddep][j]++;
					m++;
				}
				else
				{
					cout << "El nro de lista ingresado, no se encuentra en la base de datos." << endl;
				}
			}
		}
	    else
	    {
			cout << "El nro de documento ingresado ya se encuentra en la base de datos." << endl;
		}
		cout << endl;
		cout << "Ingrese DNI del votante: ";
		cin >> dni;
	}
	string nomMaxPart[17];
	for (int i = 0;i < 17;i++)
	{
		int maxPart = 0;
		for ( int j = 0;j < c;j++)
		{
			if (maxCantPart[i][j] > maxPart)
			{
				maxPart = maxCantPart[i][j];
				nomMaxPart[i] = nom[j];
			}
		}
	}
	cout << "--------------------------------------------------------------------------------------------" << endl;
	cout << "Porcentaje de votantes por cada departamento:" << endl;
	for (int i = 0;i < 17;i++)
	{
		cout << "Departamento " << i+1 << ": % " << porcvot[i] << endl;
	}
	cout << "Departamento con mayor porcentaje de votantes: " << maxdep << endl;
	cout << "Cantidad total de votantes por cada partido: " << endl;
	for (int i = 0;i < c;i++)
	{
		cout << "Partido " << i+1 << ": " << cantPart[i] << endl;
	}
	cout << endl;
	cout << "Partido ganador de cada departamento: " << endl;
	for (int i = 0;i < 17;i++)
	{
		cout << "Departamento " << i+1 << ": " << nomMaxPart[i] << endl;
	}
	cout << endl;
	cout << "Cantidad total de votantes: " << acumvot;
	return 0;
}

