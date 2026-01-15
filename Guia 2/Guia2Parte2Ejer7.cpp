#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int dia, sdia;
	string mend, mens;
	cout << "Ingrese un valor del día entre 1 y 7: ";
	cin >> dia;
	cout << "Ingrese un valor que represente la cantidad de días a saltar: ";
	cin >> sdia;
	sdia = dia + sdia;
	switch (dia)
	{
		case 1: 
			mend = "Domingo";
			break;
		case 2: 
			mend = "Lunes";
			break;
		case 3: 
			mend = "Martes";
			break;
		case 4: 
			mend = "Miercoles";
			break;
		case 5: 
			mend = "Jueves";
			break;
		case 6: 
			mend = "Viernes";
			break;
		case 7: 
			mend = "Sabado";
			break;
	}
	switch (sdia)
	{
		case 1: 
			mens = "Domingo";
			break;
		case 2: 
			mens = "Lunes";
			break;
		case 3: 
			mens = "Martes";
			break;
		case 4: 
			mens = "Miercoles";
			break;
		case 5: 
			mens = "Jueves";
			break;
		case 6: 
			mens = "Viernes";
			break;
		case 7: 
			mens = "Sabado";
			break;
	}
	cout << "---------------------------------------------" << endl;
	cout << "Nombre del día de la semana ingresado: " << mend << endl;
	cout << "Nombre del día de la semana luego del salto: " << mens;
	return 0;
}

