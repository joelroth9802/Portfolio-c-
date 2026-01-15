#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float comp, num, tiempototal, nat, carr, bic, hhtiempo, hhtotal;
	float pNat, pCarr, pBic, mmtiempo, mmtotal, maxTiempo;
	int numMinTiempo, tNat, tCarr, tBic, cont; long minTiempo;
	cont = 0; minTiempo = 999999; maxTiempo = 0; tNat = 0; tCarr = 0; tBic = 0;
	cout << "Ingrese la cantidad de competidores: ";
	cin >> comp;
	do
	{
		cout << "Ingrese el número de competidor: ";
		cin >> num;
		cout << "Tiempo en natación: ";
		cin >> nat;
		cout << "Tiempo de la carrera: ";
		cin >> carr;
		cout << "Tiempo en bicicleta: ";
		cin >> bic;
		tiempototal = nat + carr + bic;
		hhtiempo = floor(tiempototal/60);
		mmtiempo = (tiempototal/60) - hhtiempo;
		mmtiempo *= 60;
		cout << "Timepo total: " << hhtiempo << " hs " << mmtiempo << " min." << endl;
		cout << "---------------------------------------------------" << endl;
		if (tiempototal < minTiempo)
		{
			minTiempo = tiempototal;
			numMinTiempo = num;
		}
		if (tiempototal > maxTiempo)
		{
			maxTiempo = tiempototal;
		}
		tNat += nat;
		tCarr += carr;
		tBic += bic;
		cont++;
	} while(cont < comp);
	pNat = tNat/cont;
	pCarr = tCarr/cont;
	pBic = tBic/cont;
	hhtotal = floor(maxTiempo/60);
	mmtotal = (maxTiempo/60) - hhtotal;
	mmtotal *= 60;
	cout << "--------------------------------------------------" << endl;
	cout << "Tiempo total del ganador: " << minTiempo << " min., Número: " << numMinTiempo << endl;
	cout << "Hora en que finalizo la competencia: " << hhtotal+17 << " hs " << mmtotal << " min." << endl;
	cout << "Tiempo promedio utilizado por los competidores en cada deporte: " << endl;
	cout << "Natación: " << pNat << " min." << endl;
	cout << "Carrrera: " << pCarr << " min." << endl;
	cout << "Bicicleta: " << pBic << " min.";
	return 0;
}

