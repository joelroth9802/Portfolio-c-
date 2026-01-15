#include <iostream>
#include <string>
using namespace std;
/*Dadas 3 cadenas de caracteres, informar si alguna de las tres está incluída en alguna de
las otras.
Ayuda: Ver la operación find().*/
int main(int argc, char *argv[]) {
	string cadena1, cadena2, cadena3;
	cout << "Ingrese 3 cadenas de caracteres: " << endl;
	getline(cin, cadena1);
	getline(cin, cadena2);
	getline(cin, cadena3);
	cout << "----------------------------------------" << endl;
	int pos1 = cadena1.find(cadena2);
	int pos2 = cadena2.find(cadena1);
	int pos3 = cadena2.find(cadena3);
	int pos4 = cadena3.find(cadena2);
	int pos5 = cadena1.find(cadena3);
	int pos6 = cadena3.find(cadena1);
	if ((pos1 != -1) || (pos2 != -1) || (pos3 != -1) || (pos4 != -1) || (pos5 != -1) || (pos6 != -1))
	{
		cout << "Sí, algunas de las 3 cadena está incliuda en algunas de las otras";
	}
	else
	{
		cout << "No, ninguna cadena está incluida dentro de otra";
	}
	return 0;
}

