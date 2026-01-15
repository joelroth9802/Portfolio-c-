#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cNom1, cNom2;
	float nPun1Equ1, nPun1Equ2, nPun2Equ1, nPun2Equ2, nPun3Equ1, nPun3Equ2;
	float nSetEq1, nSetEq2, nTotPuntos1, nTotPuntos2;
	cout << "Ingrese el nombre del 1er equipo: ";
	getline(cin, cNom1);
	cout << "Ingrese el nombre del 2do equipo: ";
	getline(cin, cNom2);
	cout << "Ingrese los puntos del equipo " << cNom1 << " en el 1er Set: ";
	cin >> nPun1Equ1;
	cout << "Ingrese los puntos del equipo " << cNom2 << " en el 1er Set: ";
	cin >> nPun1Equ2;
	cout << "Ingrese los puntos del equipo " << cNom1 << " en el 2do Set: ";
	cin >> nPun2Equ1;
	cout << "Ingrese los puntos del equipo " << cNom2 << " en el 2do Set: ";
	cin >> nPun2Equ2;
	nSetEq1 = 0;
	nSetEq2 = 0;
	if (nPun1Equ1 > nPun1Equ2)
	{
		nSetEq1 = nSetEq1 + 1;
	}
	else
	{
		nSetEq2 = nSetEq2 + 1;
	}
	if (nPun2Equ1 > nPun2Equ2)
	{
		nSetEq1 = nSetEq1 + 1;
	}
	else
	{
		nSetEq2 = nSetEq2 + 1;
	}
	if (nSetEq1 == nSetEq2)
	{
		cout << "Ingrese los puntos del equipo " << cNom1 << " en el 3er Set: ";
	    cin >> nPun3Equ1;
	    cout << "Ingrese los puntos del equipo " << cNom2 << " en el 3er Set: ";
	    cin >> nPun3Equ2;
	    if (nPun3Equ1 > nPun3Equ2)
		{
			nSetEq1 = nSetEq1 + 1;
		}
	    else
		{
		    nSetEq2 = nSetEq2 + 1;
	    }
	}
	else
    {
		nPun3Equ1 = 0;
	    nPun3Equ2 = 0;
	}
	nTotPuntos1 = nPun1Equ1 + nPun2Equ1 + nPun3Equ1;
	nTotPuntos2 = nPun1Equ2 + nPun2Equ2 + nPun3Equ2;
	if (nSetEq1 > nSetEq2)
	{
		cout << "Ganador equipo " << cNom1 << endl;
	    if (nTotPuntos2 > nTotPuntos1)
		{
			cout << "DATO ESTADISTICO: Equipo perdedor hizo mas puntos que el ganador.";
	    }
	}
	else
	{
		cout << "Ganador equipo " << cNom2 << endl;
	    if (nTotPuntos1 > nTotPuntos2)
		{
			cout << "DATO ESTADISTICO: Equipo perdedor hizo mas puntos que el ganador.";
	    }
	}
	return 0;
}

