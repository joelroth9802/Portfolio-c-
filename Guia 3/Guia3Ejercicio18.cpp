#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	long ingreso, egreso, saldomen, saldofinal;
	int cont;
	string mes;
	cont = 0; saldofinal = 0;
	do
	{
		cont++;
		switch (cont)
		{
		case 1: 
				mes = "Enero";
				break;
		case 2: 
			mes = "febrero";
			break;
		case 3: 
			mes = "Marzo";
			break;
		case 4: 
			mes = "Abril";
			break;
		case 5: 
			mes = "Mayo";
			break;
		case 6: 
			mes = "Junio";
			break;
		case 7: 
			mes = "Julio";
			break;
		case 8: 
			mes = "Agosto";
			break;
		case 9: 
			mes = "Septiembre";
			break;
		case 10: 
			mes = "Octubre";
			break;
		case 11: 
			mes = "Noviembre";
			break;
		case 12: 
			mes = "Diciembre";
			break;
		}
		cout << "Mes de " << mes << ": " << endl;
		cout << "Ingresan: ";
		cin >> ingreso;
		cout << "Egresan: ";
		cin >> egreso;
		saldomen = ingreso - egreso;
		cout << "Saldo mensual: " << saldomen << endl;
		if (saldomen < 0)
		{
			cout << "Balance NEGATIVO" << endl;
		}
		else
		{
			cout << "Balance POSITIVO" << endl;
		}
		cout << "-------------------------------------------------" << endl;
		saldofinal += saldomen;
	} while(cont < 12);
	cout << "Saldo final: $ " << saldofinal;
	return 0;
}

