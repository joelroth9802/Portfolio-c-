#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string men;
	float fechaN, fechaV;
	int ddN, mmN, aaN, ddV, mmV, aaV; 
	float aux, aux1, aux2;
	cout << "Ingrese la fecha de nacimiento con formato (ddmmaa): ";
	cin >> fechaN;
	ddN = floor(fechaN/10000);
	aux = fechaN - (ddN*10000);
	mmN = floor(aux/100);
	aaN = aux - (mmN*100);
	printf("Fecha de vencimiento: %d/%d/%d \n",ddN,mmN,aaN);
	cout << "----------------------------------------------" << endl;
	cout << "Ingrese la fecha de la votación: ";
	cin >> fechaV;
	ddV = floor(fechaV/10000);
	aux1 = fechaV - (ddV*10000);
	mmV = floor(aux1/100);
	aaV = aux1 - (mmV*100);
	printf("Fecha de votación: %d/%d/%d \n",ddV,mmV,aaV);
	cout << "----------------------------------------------" << endl;
	if ((aaN > 0) && (aaN <= 24))
	{
		aaN += 2000;
	}
	else
	{
		aaN += 1900;
	}
	if ((aaV > 0) && (aaV <= 24))
	{
		aaV += 2000;
	}
	else
	{
		aaV += 1900;
	}
	aux2 = aaV - aaN;
	if (aux2 <= 18)
	{
		if (mmN <= mmV)
		{
			men = "Vota";
			if (ddN <= ddV)
			{
				men = "Vota";
				aux2 += 1;
			}
			else
			{
				men = "No vota";
			}
		}
	}
	else
	{
		men = "Vota";
	}
	printf("Fecha de nacimiento: %d/%d/%d \n",ddN,mmN,aaN);
	printf("Fecha de vencimiento: %d/%d/%d \n",ddV,mmV,aaV);
	cout << "Edad: " << aux2 << endl;
	cout << "Resultado: " << men;
	return 0;
}

