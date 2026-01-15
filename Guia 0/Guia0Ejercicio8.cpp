#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cinco, diez, veinte, cinc, cien, total;
	cout << "Ingrese la cantidad de billetes de $5, $10, $20, $50, $100: ";
	cin >> cinco >> diez >> veinte >> cinc >> cien;
	cinco *= 5;
	diez *= 10;
	veinte *= 20;
	cinc *= 50;
	cien *= 100;
	total = cinco + diez + veinte + cinc + cien;
	cout << "-------------------------------------------------" << endl;
	cout << "Total existente de la caja de seguridad: $ " << total;
	return 0;
}

