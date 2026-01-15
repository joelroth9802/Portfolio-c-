#include <iostream>
#include <iomanip>
using namespace std;
/*Una empresa textil, dedicada al hilado de lana ovina, recibe su materia prima de distintos criaderos
de ovejas distribuidos en el país.
Mensualmente, se ingresan sin orden alguno, los siguientes datos de los N criaderos de oveja: Nro de
criadero (de 1 a N), tipo de oveja (1: Merino, 2: Texel, 3: Dorset), cantidad de kilos lana. Se sabe que
puede venir más de una entrada de lana, para un mismo criadero y un mismo tipo de oveja. También
puede ser que algún criadero no haya enviado alguno de los tipos de lana. El fin de datos está dado por
Nro de criadero = 999. 
El valor N se ingresa como primer dato.
Se desea:
a) Emitir un listado ordenado en forma decreciente, por costo a abonar a cada criadero, sabiendo que el
kilo de lana se abona a razón de $800, independientemente del tipo de lana. El formato es el siguiente:
Nro. Criadero     Costo total ($)
xxxxxx            xxxx
b) Dado un tipo de lana (1, 2 ó 3) que se ingresa como dato, buscar entre los criaderos, si al menos uno
de ellos no ha enviado ese tipo de lana (valor 0). Informar con las siguientes leyendas alusivas según el
caso: “TODOS ENVIARON” ó “NO TODOS ENVIARON”.
Utilizar funciones en los ítems (a) y (b).*/
int main(int argc, char *argv[]) {
	//Variables
	int ovejas[50][5] = {0}, n, criadero, toveja, klana, aux, busqueda;
	cout << "Ingrese la cantidad de criaderos de ovejas: ";
	cin >> n;
	cout << endl;
	//Datos
	cout << "Ingrese número de criadero: ";
	cin >> criadero;
	while (criadero != 999)
	{
		--criadero;
		if (criadero < n)
		{
			cout << "Ingrese tipo de lana ( 1: Merino - 2: Texel - 3: Dorset): ";
		    cin >> toveja;
		    cout << "Ingrese cantidad de kilos de lana: ";
		    cin >> klana;
			//Los nros de criaderos se almacenan en un arreglo para despues ordenarlos segun el costo total
			ovejas[criadero][0] = criadero;
			ovejas[criadero][toveja] += klana;//Acumulador para los tipos de lanas
			ovejas[criadero][4] += 800*klana;//Acumulador para el costo total
		}
		else
		{
			cout << "El número de criadero ingresado es incorrecto." << endl;
		}
		cout << endl;
		cout << "Ingrese número de criadero: ";
		cin >> criadero;
	}
	//Ordenamiento según el costo total
	for (int i = 0;i < (n-1);i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (ovejas[i][4] < ovejas[j][4])
			{
				for (int k = 0;k < 5;k++)
				{
					aux = ovejas[i][k];
					ovejas[i][k] = ovejas[j][k];
					ovejas[j][k] = aux;
				}
			}
		}
	}
	//Informe
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Nro. Criadero" << setw(15) << "Costo Total" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << setw(7) << ovejas[i][0]+1 << setw(18) << ovejas[i][4] << endl;
	}
	cout << endl;
	//Busqueda para verificar si el tipo de lana ingresado los enviaron todos los criaderos o algunos
	cout << "Ingrese el tipo de lana que desea verificar: ";
	cin >> busqueda;
	int i = 0;
	for (i = 0;(i < n) && (ovejas[i][busqueda] != 0);i++)
		;
	if (i < n)
	{
		cout << "NO TODOS ENVIARON";
	}
	else
	{
		cout << "TODOS ENVIARON";
	}
	return 0;
}
