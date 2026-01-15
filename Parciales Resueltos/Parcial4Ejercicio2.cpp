#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	//Variables
	string part[50][2], cod, prov, dto, nlista, busq;
	float votos[50][2] = {}, acumporc;
	int acumvotos, nrolista, tvotos;
	//Carga de datos
	cout << "Ingrese los datos de los partidos politicos: " << endl;
	cout << "Ingrese (z) para finalizar con la carga de datos." << endl;
	cout << "Partido 1" << endl;
	cout << "Código del partido politico: ";
	getline(cin, cod);
	int c = 1, j = 0;
	for (j = 0;cod != "z";j++)
	{
		part[j][0] = cod;
		cout << "Nombre del partido politico: ";
		getline(cin, part[j][1]);
		cout << endl;
		c++;
		cout << "Partido " << c << endl;
		cout << "Código del partido politico: ";
		getline(cin, cod);
	}
	cout << endl;
	cout << "Datos de los votos obtenidos" << endl;
	cout << "Ingrese (zzz) para finalizar con la carga de datos." << endl;
	cout << "Ingrese nombre de la provincia: ";
	getline(cin, prov);
	acumvotos = 0;
	while (prov != "zzz")
	{
		cout << "Nombre de dto: ";
		getline(cin, dto);
		cout << "Número de lista: ";
		cin >> nrolista;
		cin.ignore();
		cout << "Nombre de lista: ";
		getline(cin, nlista);
		cout << "Código del partido politico al que representa: ";
		getline(cin, busq);
		int i = 0;
		for (i = 0;(i < j) && (busq != part[i][0]);i++)
			;
		if (i < j)
		{
			cout << "Total de votos obtenidos: ";
			cin >> tvotos;
			votos[i][0] += tvotos;//Acumulador para la cantidad de votos por partido
			acumvotos += tvotos;//Acumulador general para los votos
			cin.ignore();
		}
		else
		{
			cout << "El código del partido politico no se encuentra en la base de datos" << endl;
		}
		cout << endl;
		cout << "Ingrese nombre de la provincia: ";
		getline(cin, prov);
	}
	acumporc = 0;
	for (int i = 0;i < j;i++)
	{
		votos[i][1] = (votos[i][0]/acumvotos)*100;
		acumporc += votos[i][1];//Acumulador para el porcentaje
	}
	//Informe
	cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Cód. Part. Político" << setw(30) << "Nom. Part. Político" << setw(30) << "Total Votos" << setw(30) << "Porcentaje" << endl;
	for(int i = 0;i < j;i++)
	{
		cout << setw(12) << part[i][0] << setw(37) << part[i][1] << setw(30) << votos[i][0] << setw(30) << votos[i][1] << endl;
	}
	cout << endl;
	cout << "TOTALES" << endl;
	cout << "Votos: " << acumvotos << setw(15) << "Porcentaje: % " << acumporc;
	return 0;
}

