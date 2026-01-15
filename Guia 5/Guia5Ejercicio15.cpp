#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
using namespace std;
/*La Municipalidad de Paraná desea obtener información sobre las multas pagadas durante
un mes. Existen 10 tipos de multas, codificadas de 1 a 10, y para cada una se ha fijado su
importe en función de litros de nafta súper. Para realizar el proceso solicitado se ingresa por
cada tipo de multa, la cantidad de litros de nafta a cobrar (ordenados por tipo de multa).
Además se ingresan los datos de las multas pagadas durante el mes: día, número de carnet
de conductor, apellido y nombre y tipo de multa (1..10). Estos datos se ingresan, ordenados 
por día y para un mismo día pueden venir varias multas. El fin de datos está dado por día =
99. El precio del litro de nafta súper se ingresa al principio como primer dato.
Se desea:
a) Obtener el siguiente informe:
DIA  APELLIDO Y NOMBRE  CARNET  TIPO   MONTO
XX   XXXXXXXXXXXX       XXXXXX  XXXXX  XXXXXX
TOTAL DEL DIA 1: $ XXXXX
DIA  APELLIDO Y NOMBRE  CARNET   TIPO   MONTO
XX   XXXXXXXXXXXX       XXXXXX   XXXXX  XXXXXX
TOTAL DEL DIA 2: $ XXXXX
....................................................
TOTAL DEL MES: $ XXXXX
b) Informar además por cada tipo de multa el monto total mensual.
c) Proponga lote de prueba y salida esperada.-*/
int main(int argc, char *argv[]) {
	//Se declaran las variables y los vectores
	int prenafta, litros[10], totaldia, totalmes, acumtipomulta[10], dia, nrocarnet, tmulta, ant, monto;
	string ayn;
	//Se leen las cargas de los datos
	cout << "Ingrese precio del litro de nafta súper: ";
	cin >> prenafta;
	cout << "Ingrese por cada tipo de multa, la cantidad de litros de nafta a cobrar: " << endl;
	for(int i = 0;i < 10;i++)
	{
		printf("Tipos de multas, %d de %d: ",i+1,10);
		cin >> litros[i];
		acumtipomulta[i] = 0;//Se inicializa el acumulador para cada tipo de multa
	}
	totalmes = 0;
	cout << endl;
	cout << "Ingrese datos de las multas pagadas durante el mes: " << endl;
	cout << "Ingrese día de la multa: ";
	cin >> dia;
	//Se cargan los datos mediante un corte de control
	while (dia != 99)
	{
		printf("Día %d:\n",dia);
		ant = dia; totaldia = 0;
		while (dia == ant)
		{
			cout << "Ingrese número de carnet: ";
			cin >> nrocarnet;
			cin.ignore();
			cout << "Ingrese apellido y nombre: ";
			getline(cin, ayn);
			cout << "Ingrese tipo de multa: ";
			cin >> tmulta;
			--tmulta;
			monto = litros[tmulta]*prenafta;//Calculo para sacar el monto de la multa
			totaldia += monto;//Acumulador para el total recaudado del día
			acumtipomulta[tmulta] += monto;//Acumulador para la recaudación para los diferentes tipos de multas
			cout << "----------------------------------------------------------------------------------------" << endl;
			//Se muestra en pantalla los datos de la multa y el monto
			cout << "DIA" << setw(22) << "APELLIDO Y NOMBRE" << setw(17) << "CARNET" << setw(18) << "TIPO" << setw(19) << "MONTO" << endl;
			cout << setw(2) << dia << setw(23) << ayn << setw(17) << nrocarnet << setw(18) << tmulta+1 << setw(19) << monto << endl;
			cout << endl;
			cout << "Ingrese día de la multa: ";
			cin >> dia;
			cout << endl;
		}
		printf("TOTAL DEL DIA %d: $ %d \n",ant,totaldia);//Se muestra en pantalla el total recaudado del día
		cout << "----------------------------------------------------------------------------------------" << endl;
		totalmes += totaldia;//Acumulador para el total recaudado del mes
	}
	//Se muestra en pantalla el monto total del mes y el monto total para cada tipo de multa utilizando un bucle for
	cout << "TOTAL DEL MES: $ " << totalmes << endl;
	cout << "MONTO TOTAL MENSUAL POR MULTA" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << "MULTA " << i+1 << ": $ " << acumtipomulta[i] << endl;
	}
	return 0;
}

