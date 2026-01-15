#include <iostream>
#include <fstream>
using namespace std;
/*Una empresa posee N empleados y de cada uno de ellos los siguientes datos: Código de
empleado (numérico), cantidad de horas normales trabajadas, cantidad de horas extras trabajadas.
La cantidad de empleados y el valor de la hora normal de trabajo se leen como primeros datos
Se pide:
- Generar un archivo SUELDOS.TXT donde figure Cod de empleado, sueldo a cobrar.
Tenga en cuenta que las horas extras se pagan el doble que las horas normales de trabajo*/
int main(int argc, char *argv[]) {
	ofstream empresa;//Archivo para escritura
	int cantEmpl, codEmpl, montoHor, horExtras, horNorm, sueldo;
	cout << "Datos de la empresa" << endl;
	cout << "Ingrese cantidad de empleados: ";
	cin >> cantEmpl;
	cout << "Ingrese valor de la hora normal de trabajo: ";
	cin >> montoHor;
	empresa.open("SUELDOS.txt");//Se abre archivo
	if (empresa.fail())
	{
		cout << "Error en la apertura del archivo";
	}
	else
	{
		for (int i = 0;i < cantEmpl;i++)
		{
			cout << "Empleado " << i+1 << endl;
			cout << "Ingrese código de empleado: ";
			cin >> codEmpl;
			cout << "Ingrese cantidad de horas trabajadas: ";
			cin >> horNorm;
			cout << "Ingrese cantidad de horas extras trabajadas: ";
			cin >> horExtras;
			cout << endl;
			sueldo = (horNorm*montoHor) + (montoHor*2*horExtras);//Sueldo
			empresa << codEmpl << " " << sueldo << endl;//Se leen los codigos y los sueldos
		}
	}
	empresa.close();//Se cierra el archivo
	return 0;
}

