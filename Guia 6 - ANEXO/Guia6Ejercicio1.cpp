#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;
/*Realice una aplicación que muestre el contenido de dos vectores que previamente ha sido llenado con
nombres y documentos. Luego ingrese un valor (1, 2 ó 3). Si se ingresó 1, ordene los vectores por el
contenido del vector de nombres y vuelva a mostrarlos. Si se ingresó 2, ordene los vectores por el
contenido del vector de documentos y vuelva a mostrarlos. Si se ingresa 3, termine la aplicación.*/
int main(int argc, char *argv[]) {
	//Variables
	int dni[10], valor, aux1;
	string nombres[10], aux;
	//Carga de datos
	cout << "Ingrese los datos de las 10 personas: " << endl;
	for (int i = 0;i < 10;i++)
	{
		printf("Persona %d de %d\n",i+1,10);
		cout << "Nombre : ";
		getline(cin, nombres[i]);
		cout << "Documento: ";
		cin >> dni[i];
		cin.ignore();
		cout << endl;
	}
	//Si el valor ingresado es 3, se termina de ejecutar la aplicación
	cout << "Ingrese un valor (1, 2 ó 3): ";
	cin >> valor;
	while ((valor != 3) && (valor > 0) && (valor <= 2))
	{
		//Si se ingresa 1, el ordenamiento se ejecuta según los nombres
		if (valor == 1)
		{
			for(int i = 0;i < (10-1);i++)
			{
				for (int j = i+1;j < 10;j++)
				{
					if (nombres[i] > nombres[j])
					{
						aux = nombres[i];
						nombres[i] = nombres[j];
						nombres[j] = aux;
						
						aux1 = dni[i];
						dni[i] = dni[j];
						dni[j] = aux1;
					}
				}
			}
		}
		else
		{//Si el valor ingresado es 2, el ordenamiento se ejecuta según los documentos
			for(int i = 0;i < (10-1);i++)
			{
				for (int j = i+1;j < 10;j++)
				{
					if (dni[i] > dni[j])
					{
						aux1 = dni[i];
						dni[i] = dni[j];
						dni[j] = aux1;
						
						aux = nombres[i];
						nombres[i] = nombres[j];
						nombres[j] = aux;
					}
				}
			}
		}
		//Informe
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Nombres" << setw(30) << "Documentos" << endl;
		for (int i = 0;i < 10;i++)
		{
			cout << nombres[i] << setw(18) << dni[i] << endl;
		}
		cout << endl;
		cout << "Ingrese un valor (1, 2 ó 3): ";
		cin >> valor;
	}
	
	return 0;
}

