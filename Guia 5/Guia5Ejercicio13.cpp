#include <iostream>
#include <string>
using namespace std;
/*Se ha solicitado ingresar los siguientes datos correspondientes a 500 personas inscriptas
en un curso de gimnasia: Apellido y nombre, Domicilio, Edad, Documento, Sexo y Altura.
Estos datos se ingresan sin ningún orden y se solicita que dicha información sea guardada en
matrices. Informar un listado con los siguientes datos: Apellido y nombre – Documento 
Sexo, de las personas cuya altura supera el promedio general de las mismas.*/
int main(int argc, char *argv[]) {
	int valores[20][2];
	float acumAlt = 0, altura[20];
	string desc[20][3];
	for(int i = 0;i < 20;i++)
	{
		cout << "Curso de gimnasia|Inscripto " << i+1 << endl;
		cout << "Ingrese apellido y nombre: ";
		getline(cin, desc[i][0]);
		cout << "Ingrese domicilio: ";
		getline(cin, desc[i][1]);
		cout << "Ingrese edad: ";
		getline(cin, valores[i][0]);
		cout << "Ingrese documento: ";
		cin >> valores[i][1];
		cin.ignore();
		cout << "Ingrese sexo: ";
		getline(cin, desc[i][2]);
		cout << "Ingrese altura: ";
		cin >> altura[i];
		cin.ignore();
	}
	
	return 0;
}

