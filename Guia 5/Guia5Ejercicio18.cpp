#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;
/*Ingrese una lista de N palabras y almacénelas en un arreglo. Luego genere una matriz de
Nx3 donde se almacenará lo siguiente: en la columna 1 el largo de la palabra, en la columna 2
la cantidad de consonantes, en la 3 la cantidad de vocales.
Luego de finalizada la carga, realizar el siguiente informe:
Palabra Largo Consonantes Vocales Otros Caracteres
xxxxxxx 999   999         999     999
xxxxxxx 999   999         999     999
xxxxxxx 999   999         999     999
El valor N se ingresa como primer dato.*/
int main(int argc, char *argv[]) {
	string palabras[50];//Declaración del vector para las palabras
	int contadores[50][3], n;//Declaración para los contadores y la cantidad de palabras
	cout << "Ingrese la cantidad de palabras: ";
	cin >> n;
	cin.ignore();
	cout << "Ingrese la lista de palabras: " << endl;
	cout << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Palabra " << i+1 << ": ";
		getline(cin, palabras[i]);//Se leen las palabras
		//Matriz
		contadores[i][0] = palabras[i].size();
		contadores[i][1] = 0;
		contadores[i][2] = 0;
		//Debido a que un string, en realidad es un vector. La variable palabras se transforma en una matriz
		for(int j = 0;j < contadores[i][0];j++)
		{
			//Se usa la función isalpha para saber si es una letra
			if (isalpha(palabras[i][j]))
			{
				char letra = tolower(palabras[i][j]);//Se usa la función tolower para pasar las letras a minusculas
				bool vocal = (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u');
				if (vocal)
				{
					contadores[i][2]++;//Si es una vocal, aumenta el contador de vocales
				}
				else
				{
					contadores[i][1]++;//Si es una consonante, aumenta el contador de consonantes
				}
			}
			//Como la función isalpha no admite vocales acentuadas, se usa un else para controlar las volacales acentuadas
			else
			{
				char letra = tolower(palabras[i][j]);
				bool vocal = (letra == 'á' || letra == 'é' || letra == 'í' || letra == 'ó' || letra == 'ú');
				if (vocal)
				{
					contadores[i][2]++;//Si es una vocal acentuada, aumenta el contador de vocales
				}
			}
		}
	}
	//Se imprime el informe en pantalla
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(10) << "Palabra" << setw(17) << "Largo" << setw(20) << "Consonantes" << setw(15) << "Vocales" << setw(23) << "Otros Caracteres" << endl;
	int otros;
	for (int i = 0;i < n;i++)
	{
		//Se le resta al tamaño de la palabras, los contadores de consonantes y vocales, el resto son los otros caracteres
		otros = contadores[i][0] - (contadores[i][1] + contadores[i][2]);
		cout << setw(10) << palabras[i] << setw(15) << contadores[i][0] << setw(16) << contadores[i][1] << setw(18) << contadores[i][2] << setw(18) << otros << endl;
	}
	return 0;
}

