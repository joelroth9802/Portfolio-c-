#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int hhmmss, hh, mm, ss, sstotal, aux;
	cout << "Ingrese una hora determinada de la forma hhmmss: ";
	cin >> hhmmss;
	hh = hhmmss/10000;
	aux = hhmmss - (hh*10000);
	mm = aux/100;
	ss = aux - (mm*100);
	hh *= 3600;
	mm *= 60;
	sstotal = hh + mm + ss;
	cout << "--------------------------------------------------" << endl;
	cout << "El número total de segundos es de : " << sstotal << " ss";
	return 0;
}

