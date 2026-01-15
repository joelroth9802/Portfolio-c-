#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int peso, alum, minPeso, cont;
	float altu, maxAltu;
	string nya, nMaxAltu, nMinPeso;
	cout << "Ingrese cantidad de alumnos del jardin: ";
	cin >> alum;
	cont = 0; maxAltu = 0; minPeso = 999;
	do
	{
		cin.ignore();
		cout << "Ingrese nombre y apellido del alumno: ";
		getline(cin, nya);
		cout << "Ingrese peso del alumno: ";
		cin >> peso;
		cout << "Ingrese altura del alumno: ";
		cin >> altu;
		cont++;
		if (peso < minPeso)
		{
			minPeso = peso;
			nMinPeso = nya;
		}
		if (altu > maxAltu)
		{
			maxAltu = altu;
			nMaxAltu = nya;
		}
	} while(cont < alum);
	cout << "-------------------------------------------------" << endl;
	cout << "Alumno más alto: " << nMaxAltu << endl;
	cout << "Alumno con menor peso: " << nMinPeso;
	return 0;
}

