#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float totdethora, totmovhora;
	float totmovmin, totdetmin, par1, par2, par3, aux1, aux2;
	cout << "Ingrese el tiempo total que el colectivo tardo en hacer el recorrido: ";
	cin >> totmovmin;
	cout << "Tiempo en la primera parada: ";
	cin >> par1;
	cout << "Tiempo en la segunda parada: ";
	cin >> par2;
	cout << "Tiempo en la tercera parada: ";
	cin >> par3;
	totdetmin = par1 + par2 + par3;
	totmovmin = totmovmin - totdetmin;
	totdethora = floor(totdetmin/60);
	aux1 = totdetmin/60;
	totdetmin = (aux1 - totdethora)*60;
	totmovhora = floor(totmovmin/60);
	aux2 = totmovmin/60;
	totmovmin = (aux2 - totmovhora)*60;
	cout << "-----------------------------------------------------" << endl;
	cout << "Tiempo total que el colectivo estuvo en movimiento: " << totmovhora << " horas, " << totmovmin << " min." << endl;
	cout << "Tiempo total que el colectivo estuvo detenido: " << totdethora << " horas, " << totdetmin << " min.";
	return 0;
}

