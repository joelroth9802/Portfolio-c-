#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cantMatApro, nota, promG, acumNotas,cont1, cont2, cont3, contAlum, porcI;
	string mat, nyaAlum;
	cout << "Ingrese nombre y apellido del alumno: ";
	getline(cin, nyaAlum);
	cont1 = 0; contAlum = 0; cont3 = 0;
	while (nyaAlum != "zzz")
	{
		cout << "Ingrese cantidad de materias aprobadas: ";
		cin >> cantMatApro;
		acumNotas = 0; cont2 = 0;
		do
		{
			cin.ignore();
			cout << "Ingrese nombre de la materia: ";
			getline(cin, mat);
			cout << "Ingrese nota obtenida: ";
			cin >> nota;
			cont2++;
			acumNotas += nota;
			if (mat == "Ingles")
			{
				cont3++;
			}
		} while(cont2 < cantMatApro);
		promG = round(acumNotas/cantMatApro);
		cout << "Promedio general del alumno: " << promG << endl;
		cout << "-----------------------------------------" << endl;
		if (cantMatApro > 10)
		{
			cont1++;
		}
		contAlum++;
		cin.ignore();
		cout << "Ingrese nombre y apellido del alumno: ";
		getline(cin, nyaAlum);
	}
	porcI = (cont3/contAlum)*100;
	cout << "------------------------------------------" << endl;
	cout << "Alumnos que aprobaron más de 10 materias: " << cont1 << endl;
	cout << "Porcentaje de alumnos que aprobo ingles: % " << porcI;
	return 0;
}

