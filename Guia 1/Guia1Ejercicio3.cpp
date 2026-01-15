#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float hora, min, seg, hora1, min1, seg1, prom, aux;
	char patente[10];
	cout << "Ingrese patente del vehiculo: ";
	cin >> patente;
	cout << "Ingrese horas, minutos y segundos del paso por el primer puesto: ";
	cin >> hora >> min >> seg;
	cout << "Ingrese horas, minutos y segundos del paso por el segundo puesto: ";
	cin >> hora1 >> min1 >> seg1;
	hora += (min/60) + (seg/3600);
	hora1 += (min1/60) + (seg1/3600);
	aux = hora1 - hora;
	prom = round(7.5/aux);
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Patente del vehiculo: " << patente << endl;
	cout << "Velocidad promedio del vehiculo: " << prom << " km";
	return 0;
}

