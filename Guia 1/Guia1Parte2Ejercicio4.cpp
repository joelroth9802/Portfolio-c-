#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float popular, platea, preplatea;
	float valorpop, valorplat, valorpre;
	long total;
	cout << "Ingrese el precio de la platea: ";
	cin >> valorplat;
	cout << "Ingrese la cantidad de preplateas vendidas: ";
	cin >> preplatea;
	valorpop = valorplat*0.50;
	valorpre = valorplat*0.15;
	valorpre = valorplat - valorpre;
	popular = 3000*valorpop;
	platea = 1000*valorplat;
	preplatea *= valorpre;
	total = popular + platea + preplatea;
	cout << "---------------------------------------------" << endl;
	cout << "Recaudación total del recital: $ " << total;
	return 0;
}

