#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float promCom, numCom, cantAlumCom, nota, acumNota, acumNotaF, contA, contC, promF;
	acumNotaF = 0; contC = 0;
	cout << "Ingrese el número de la comisión: ";
	cin >> numCom;
	while (numCom != 999)
	{
		cout << "Ingrese la cantidad de alumnos: ";
		cin >> cantAlumCom;
		contC++;
		acumNota = 0; contA = 0;
		cout << "Ingrese las notas obtenidas de los alumnos: " << endl;
		do
		{
			contA++;
			cout << "Alumno " << contA << ": ";
			cin >> nota;
			acumNota += nota;
		} while(contA < cantAlumCom);
		promCom = floor(acumNota/contA);
		cout << "Promedio de la comisión " << contC << ": " << promCom << endl;
		acumNotaF += promCom;
		cout << "Ingrese el número de la comisión: ";
		cin >> numCom;
	}
	promF = floor(acumNotaF/contC);
	cout << "------------------------------------------" << endl;
	cout << "Promedio total: " << promF;
	return 0;
}

