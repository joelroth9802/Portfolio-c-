#include <iostream>
#include <string>
using namespace std;
/*Se desea generar una dirección de correo en base a la información ingresada por un
estudiante. Se ingresa: nombre, apellido, fecha de nacimiento (DD/MM/AAAA) y facultad.
La dirección de correo se forma de la siguiente manera:
Primer letra del nombre + Apellido + DDMM + “@” + facultad + “.edu.ar”*/
int main(int argc, char *argv[]) {
	string nombre, apell, facultad, fechaN;
	cout << "Ingrese nombre del estudiante: ";
	getline(cin, nombre);
	cout << "Ingrese apellido del estudiante: ";
	getline(cin, apell);
	cout << "Ingrese la fecha de nacimiento: ";
	getline(cin, fechaN);
	cout << "Ingrese nombre de la facultad: ";
	getline(cin, facultad);
	char primerL = nombre[0];
	string dia(fechaN,0,2);
	string mes(fechaN,3,2);
	string mail = primerL + apell + dia + mes + "@" + facultad + ".edu.ar";
	cout << "---------------------------------------------------" << endl;
	cout << "Dirección de correo electronico: " << mail;
	return 0;
}

