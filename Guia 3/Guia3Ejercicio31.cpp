#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float codEsc, sueldoDoc, subtotalEsc, cantDocPro, totalEsc, cantDoc10, ant;
	string ayn, nMes; int mes; long dni;
	cout << "Ingrese el mes a liquidar: ";
	cin >> mes;
	switch (mes)
	{
	case 1:
		nMes = "Enero";
		break;
	case 2:
		nMes = "Febrero";
		break;
	case 3:
		nMes = "Marzo";
		break;
	case 4:
		nMes = "Abril";
		break;
	case 5:
		nMes = "Mayo";
		break;
	case 6:
		nMes = "Junio";
		break;
	case 7:
		nMes = "Julio";
		break;
	case 8:
		nMes = "Agosto";
		break;
	case 9:
		nMes = "Septiembre";
		break;
	case 10:
		nMes = "Octubre";
		break;
	case 11:
		nMes = "Noviembre";
		break;
	case 12:
		nMes = "Diciembre";
		break;
	}
	cout << "Ingrese código de escuela: ";
	cin >> codEsc;
	totalEsc = 0; cantDoc10 = 0; cantDocPro = 0;
	while (codEsc != 999)
	{
		ant = codEsc; subtotalEsc = 0;
		while (codEsc == ant)
		{
			cout << "Ingrese documento del docente: ";
			cin >> dni;
			cin.ignore();
			cout << "Ingrese apellido y nombre del docente: ";
			getline(cin, ayn);
			cout << "Ingrese sueldo del docente: ";
			cin >> sueldoDoc;
			cantDocPro++;
			subtotalEsc += sueldoDoc;
			if (sueldoDoc > 10000)
			{
				cantDoc10++;
			}
			cout << "----------------------------------------------" << endl;
			cout << "Liquidación del mes de " << nMes << endl;
			cout << "Escuela: " << ant << endl;
			cout << "Documento" << setw(30) << "Apellido y nombre" << setw(30) << "Sueldo" << endl;
			cout << dni << setw(26) << ayn << setw(30) << "$ " << sueldoDoc << endl;
			cout << "Total a pagar en la escuela: $ " << subtotalEsc << endl;
			cout << "----------------------------------------------" << endl;
			cout << "Ingrese código de escuela: ";
			cin >> codEsc;
		}
		totalEsc += subtotalEsc;
	}
	cout << "Liquidación del mes de " << nMes << endl;
	cout << "Cantidad de docentes procesados: " << cantDocPro << endl;
	cout << "Total a pagar en todas las escuelas: " << totalEsc << endl;
	cout << "Cantidad de docentes que cobran más de $10000: " << cantDoc10;
	return 0;
}

