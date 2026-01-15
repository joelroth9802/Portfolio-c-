#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cantMiliLlov, diaLLuvia, prom, maxCantMiliLlov;
	float acumCantMiliLlov, cantCiudLluv, promG, acumGenLluv, cont, cantLluvMes;
	string men, nomCiudad, ant; long minCantMiliLlov;
	cout << "Ciudades donde se produjeron lluvias: " << endl;
	cout << "Ingrese nombre de la ciudad: ";
	getline(cin, nomCiudad);
	cantCiudLluv = 0; acumGenLluv = 0; cantLluvMes = 0;
	while (nomCiudad != "zzz")
	{
		cont = 0; acumCantMiliLlov = 0; minCantMiliLlov = 999999; maxCantMiliLlov = 0;
		ant = nomCiudad;
		while (nomCiudad == ant)
		{
			cont++;
			cantLluvMes++;
			cout << "Lluvia " << cont << endl;
			cout << "Ingrese día de la lluvia: ";
			cin >> diaLLuvia;
			cout << "Ingrese cantidad de milimetros llovidos: ";
			cin >> cantMiliLlov;
			acumCantMiliLlov += cantMiliLlov;
			if (cantMiliLlov < minCantMiliLlov)
			{
				minCantMiliLlov = cantMiliLlov;
			}
			if (cantMiliLlov > maxCantMiliLlov)
			{
				maxCantMiliLlov = cantMiliLlov;
			}
			cin.ignore();
			cout << "Ingrese nombre de la ciudad: ";
			getline(cin, nomCiudad);
		}
		prom = round(acumCantMiliLlov/cont);
		cout << "----------------------------------------------" << endl;
		cout << "Nombre de la ciudad: " << ant << endl;
		cout << "Media aritmetica: " << prom << " mil" << endl;
		cout << "Menor cantidad de milímetros llovidos: " << minCantMiliLlov << " mil" << endl;
		cout << "Mayor cantidad de milímetros llovidos: " << maxCantMiliLlov << " mil" << endl;
		cout << "----------------------------------------------" << endl;
		acumGenLluv += acumCantMiliLlov;
		if (cont > 20)
		{
			men = "Se registraron más de 20 lluvias en el mes en una ciudad o más";
		}
		cantCiudLluv++;
	}
	promG = round(acumGenLluv/cantLluvMes);
	cout << "Cantidad de ciudades donde se registraron lluvias: " << cantCiudLluv << endl;
	cout << "Promedio de todas las lluvias de todas las ciudades: " << promG << " mil." << endl;
	cout << men;
	return 0;
}

