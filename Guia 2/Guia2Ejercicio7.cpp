#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float monto, horast, salario, aux, aum;
	cout << "Ingrese monto por hora: ";
	cin >> monto;
	cout << "Ingrese total de horas trabajadas: ";
	cin >> horast;
	if (horast > 40)
	{
		aux = horast - 40;
		aum = monto*1.50;
		salario = (40*monto) + (aum*aux);
	}
	else
	{
		salario = horast*monto;
	}
	cout << "-----------------------------------------" << endl;
	cout << "Slario a cobrar por el trabajador: " << salario;
	return 0;
}

