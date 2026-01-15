#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
	int diaact, mesact, anioact;
	string nom;
	float deuda, pago1, pago2;
	float pago, saldo, desc;
	cout << "Ingrese día, mes y año actual: ";
	cin >> diaact >> mesact >> anioact;
	cin.ignore();
	cout << "Ingrese nombre del cliente: ";
	getline(cin, nom);
	cout << "Ingrese el primer y segundo pago del cliente: ";
	cin >> pago1 >> pago2;
	cout << "Ingrese la deuda del cliente: ";
	cin >> deuda;
	pago = pago1 + pago2;
	saldo = pago - deuda;
	desc = saldo*0.10;
	saldo = saldo - desc;
	cout << "-----------------------------------------------" << endl;
	printf("Fecha: %d/%d/%d \n",diaact,mesact,anioact);
	cout << "Cliente: " << nom << setw(30) << "Deuda total: $ " << deuda << endl;
	cout << "Pagos realizados: $ " << pago << setw(25) << "Descuento 10%: $ " << desc << endl;
	cout << "Saldo a pagar: $ " << saldo;
	return 0;
}

