#include <iostream>
#include <iomanip>
using namespace std;
/*Una empresa posee N empleados y de cada uno de ellos los siguientes datos: Código de empleado
(numérico), cantidad de horas normales trabajadas, cantidad de horas extras trabajadas. La cantidad de
empleados y el valor de la hora normal de trabajo se leen como primeros datos
Se pide:
a) Informar el sueldo a percibir por cada empleado, teniendo en cuenta que las horas extras se pagan el
doble que las horas normales de trabajo.
b) Realizar un informe ordenado por el sueldo a percibir por cada empleado de mayor a menor*/
int main(int argc, char *argv[]) {
	//Variables
	int empl[200][4], cant, monto, aux;
	//Datos
	cout << "Ingrese la cantidad de empleados que posee la empresa: ";
	cin >> cant;
	cout << "Ingrese el valor de la hora normal de trabajo: ";
	cin >> monto;
	cout << endl;
	cout << "Ingrese los datos de cada empleado: " << endl;
	for (int i = 0;i < cant;i++)
	{
		cout << "Ingrese código(numérico): ";
		cin >> empl[i][0];
		cout << "Cantidad de horas normales trabajadas: ";
		cin >> empl[i][1];
		cout << "Cantidad de horas extras trabajadas: ";
		cin >> empl[i][2];
		//Calculo para obtener el sueldo
		empl[i][3] = (empl[i][1]*monto) + (empl[i][2]*(monto*2));
	}
	//Ordenamiento en base al sueldo de cada empleado
	for (int i = 0;i < (cant-1);i++)
	{
		for (int j = i+1;j < cant;j++)
		{
			if (empl[i][3] < empl[j][3])
			{
				for (int k = 0;k < 4;k++)
				{
					aux = empl[i][k];
					empl[i][k] = empl[j][k];
					empl[j][k] = aux;
				}
			}
		}
	}
	//Informe
	cout << "---------------------------------------------------------------" << endl;
	for (int i = 0;i < cant;i++)
	{
		cout << "Empleado " << empl[i][0] << ": $ " << empl[i][3] << endl; 
	}
	return 0;
}

