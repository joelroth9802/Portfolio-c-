#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float suc1sem1, suc1sem2, suc2sem1, suc2sem2;
	float emplsucur1, emplcucur2, bon1, bon2;
	long suc1, suc2;
	cout << "Primera sucursal: " << endl;
	cout << "Ingrese las ventas del primer semestre: ";
	cin >> suc1sem1;
	cout << "Ingrese las ventas del segundo semestre: ";
	cin >> suc1sem2;
	cout << "Ingrese la cantidad de empleados: ";
	cin >> emplsucur1;
	cout << "Segunda sucursal: " << endl;
	cout << "Ingrese las ventas del primer semestre: ";
	cin >> suc2sem1;
	cout << "Ingrese las ventas del segundo semestre: ";
	cin >> suc2sem2;
	cout << "Ingrese la cantidad de empleados: ";
	cin >> emplcucur2;
	suc1 = suc1sem1 + suc1sem2;
	bon1 = suc1*0.20;
	bon1 = round(bon1/emplsucur1);
	suc2 = suc2sem1 + suc2sem2;
	bon2 = suc2*0.20;
	bon2 = round(bon2/emplcucur2);
	cout << "-----------------------------------------------" << endl;
	cout << "Total de ventas de cada sucursal: " << endl;
	cout << "Sucursal 1: $ " << suc1 << setw(30) << "Sucursal 2: $ " << suc2 << endl;
	cout << "Bonificación a los empleados de la primera sucursal: $ " << bon1 << endl;
	cout << "Bonificación a los empleados de la segunda sucursal: $ " << bon2;
	return 0;
}

