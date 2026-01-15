#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;
/* Realice una aplicación que muestre varios arreglos que previamente ha sido llenado con nombres,
documentos, materias aprobadas y año de ingreso, el tipo de dato de los arreglos defínalos de acuerdo a
su conveniencia. Luego ingrese un valor (1, 2, 3, 4 ó 5). Si se ingresó 1, ordene por nombre. Si se
ingresó 2, ordene por documento. Si se ingresó 3, ordene por materias aprobadas. Si se ingresó 4,
ordene por año de ingreso. Luego del ordenamiento vuelva a mostrar los datos. Si se ingresa 5, termine
la aplicación.*/
int main(int argc, char *argv[]) {
	//Variables
	int docacnio[10][2], valor, aux1;
	string desc[10][2], aux;
	//Carga de datos
	cout << "Ingrese datos de los alumnos: " << endl;
	for (int i = 0;i < 10;i++)
	{
		printf("Alumno %d de %d\n",i+1,10);
		cout << "Nombre: ";
		getline(cin, desc[i][0]);
		cout << "Documento: ";
		cin >> docacnio[i][0];
		cin.ignore();
		cout << "Materias aprobada: ";
		getline(cin, desc[i][1]);
		cout << "Año de ingreso: ";
		cin >> docacnio[i][1];
		cin.ignore();
		cout << endl;
	}
	//Si el valor es 5, se termina de ejecutar la aplicación
	cout << "Ingrese un valor (1, 2, 3, 4 o 5): ";
	cin >> valor;
	while ((valor != 5) && (valor > 0) && (valor <= 4))
	{
		//Depende el valor ingresado, se ejecuta el ordenamiento que corresponda
		if (valor == 1)
		{
			for (int i = 0;i < (10-1);i++)
			{
				for (int j = i+1;j < 10;j++)
				{
					if (desc[i][0] > desc[j][0])
					{
						for (int k = 0;k < 2;k++)
						{
							aux = desc[i][k];
							desc[i][k] = desc[j][k];
							desc[j][k] = aux;
							
							aux1 = docacnio[i][k];
							docacnio[i][k] = docacnio[j][k];
							docacnio[j][k] = aux1;
						}
					}
				}
			}
		}
		else
		{
			if (valor == 2)
			{
				for (int i = 0;i < (10-1);i++)
				{
					for (int j = i+1;j < 10;j++)
					{
						if (docacnio[i][0] > docacnio[j][0])
						{
							for (int k = 0;k < 2;k++)
							{
								aux1 = docacnio[i][k];
								docacnio[i][k] = docacnio[j][k];
								docacnio[j][k] = aux1;
								
								aux = desc[i][k];
								desc[i][k] = desc[j][k];
								desc[j][k] = aux;
							}
						}
					}
				}
			}
			else
			{
				if (valor == 3)
				{
					for (int i = 0;i < (10-1);i++)
					{
						for (int j = i+1;j < 10;j++)
						{
							if (desc[i][1] > desc[j][1])
							{
								for (int k = 0;k < 2;k++)
								{
									aux = desc[i][k];
									desc[i][k] = desc[j][k];
									desc[j][k] = aux;
									
									aux1 = docacnio[i][k];
									docacnio[i][k] = docacnio[j][k];
									docacnio[j][k] = aux1;
								}
							}
						}
					}
				}
				else
				{
					if (valor == 4)
					{
						for (int i = 0;i < (10-1);i++)
						{
							for (int j = i+1;j < 10;j++)
							{
								if (docacnio[i][1] > docacnio[j][1])
								{
									for (int k = 0;k < 2;k++)
									{
										aux1 = docacnio[i][k];
										docacnio[i][k] = docacnio[j][k];
										docacnio[j][k] = aux1;
										
										aux = desc[i][k];
										desc[i][k] = desc[j][k];
										desc[j][k] = aux;
									}
								}
							}
						}
					}
				}
			}
		}
		//Informe
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "Nombres" << setw(30) << "Documentos" << setw(30) << "Materias aprob." << setw(30) << "Año Ingreso" << endl;
		for (int i = 0;i < 10;i++)
		{
			cout << desc[i][0] << setw(19) << docacnio[i][0] << setw(29) << desc[i][1] << setw(31) << docacnio[i][1] << endl;
		}
		cout << endl;
		cout << "Ingrese un valor (1, 2, 3, 4 o 5): ";
		cin >> valor;
	}
	return 0;
}

