#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cantLluvMes, cantMiliLlov, diaLLuvia, maxCantMiliLlov, impar;
	float acumCantMiliLlov, cantCiudLluv, acumGenLluv, cont, mediana, par;
	string men, nomCiudad; float promG, prom; long minCantMiliLlov;
	cout << "Ciudades donde se produjeron lluvias: " << endl;
	cout << "Ingrese nombre de la ciudad: ";
	getline(cin, nomCiudad);
	cantCiudLluv = 0; acumGenLluv = 0;
	while (nomCiudad != "zzz")
	{
		cout << "Ingrese cantidad de lluvias que se produjeron en el mes: ";
		cin >> cantLluvMes;
		cont = 0; acumCantMiliLlov = 0; minCantMiliLlov = 999999; maxCantMiliLlov = 0; mediana = 0;
		do
		{
			cout << "Ingrese día de la lluvia: ";
			cin >> diaLLuvia;
			cout << "Ingrese cantidad de milimetros llovidos: ";
			cin >> cantMiliLlov;
			cont++;
			acumCantMiliLlov += cantMiliLlov;
			if (cantMiliLlov < minCantMiliLlov)
			{
				minCantMiliLlov = cantMiliLlov;
			}
			if (cantMiliLlov > maxCantMiliLlov)
			{
				maxCantMiliLlov = cantMiliLlov;
			}
			par = cantLluvMes/2; impar = (cantLluvMes/2) + 0.5;
			if (cont == par)
			{
				mediana = cantMiliLlov;
			}
			else
			{
				if (cont == impar)
				{
					mediana = cantMiliLlov;
				}
			}
		} while(cont < cantLluvMes);
		prom = floor(acumCantMiliLlov/cantLluvMes);
		cout << "---------------------------------------------" << endl;
		cout << "Nombre de la ciudad: " << nomCiudad << endl;
		cout << "Media aritmetica: " << prom << endl;
		cout << "Mediana: " << mediana << endl;
		cout << "Menor cantidad de milimetros llovidos: " << minCantMiliLlov << endl;
		cout << "Mayor cantidad de milimetros llovidos: " << maxCantMiliLlov << endl;
		cout << "---------------------------------------------" << endl;
		acumGenLluv += acumCantMiliLlov;
		if (cantLluvMes > 20)
		{
			men = "Se registraron más de 20 lluvias en el mes en una ciudad";
		}
		cantCiudLluv++;
		cin.ignore();
		cout << "Ingrese nombre de la ciudad: ";
		getline(cin, nomCiudad);
	}
	promG = floor(acumGenLluv/cantCiudLluv);
	cout << "Cantidad de ciudades donde se registraron lluvias: " << cantCiudLluv << endl;
	cout << "Promedio de todas las lluvias de todas las ciudades: " << promG << endl;
	cout << men;
	return 0;
}

