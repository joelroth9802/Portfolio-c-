#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;
/*Se ha solicitado ingresar los siguientes datos correspondientes a 500 personas inscriptas
en un curso de gimnasia: Apellido y nombre, Domicilio, Edad, Documento, Sexo y Altura.
Estos datos se ingresan sin ningún orden y se solicita que dicha información sea guardada en
matrices. Informar un listado con los siguientes datos: Apellido y nombre – Documento –
Sexo, de las personas cuya altura supera el promedio general de las mismas.*/
int main(int argc, char *argv[]) {
	//Se declaran las variables
	int valores[500][2]; 
	float altura[500], acumAlt, prom;
	string desc[500][3];
	acumAlt = 0;//Acumulador para sacar el promedio de alturas
	//Se cargan los datos
	for (int i = 0;i < 500;i++)
	{
		printf("Inscripto %d de %d: \n",i+1,3);
		cout << "Ingrese apellido y nombre: ";
		getline(cin,desc[i][0]);
		cout << "Ingrese domicilio: ";
		getline(cin, desc[i][1]);
		cout << "Ingrese edad: ";
		cin >> valores[i][0];
		cout << "Ingrese documento: ";
		cin >> valores[i][1];
		cin.ignore();
		cout << "Ingrese sexo: ";
		getline(cin, desc[i][2]);
		cout << "Ingrese altura: ";
		cin >> altura[i];
		acumAlt += altura[i];
		cout << "--------------------------------------------------------" << endl;
		cin.ignore();
	}
	prom = acumAlt/3;//Calculo para sacar el promedio
	cout << "Apellido y nombre" << setw(25) << "Documento" << setw(22) << "Sexo" << endl;
	//Se imprime en pantalla los datos que superen el promedio general de alturas
	for (int i = 0;i < 500;i++)
	{
		if (altura[i] > prom)
		{
			cout << setw(13) << desc[i][0] << setw(28) << valores[i][1] << setw(28) << desc[i][2] << endl;
		}
	}
	return 0;
}

