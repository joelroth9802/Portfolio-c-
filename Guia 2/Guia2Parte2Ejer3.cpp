#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int edad;
	string men, sexo;
	cout << "Ingrese edad de la persona: ";
	cin >> edad;
	cout << "Ingrese el sexo de la persona M o F: ";
	cin >> sexo;
	if ((sexo == "M") && (edad >= 65))
	{
		men = "Usted está en condiciones para jubilarse";
	}
	else
	{
		if ((sexo == "F") && (edad >= 62))
		{
			men = "Usted está en condiciones para jubilarse";
		}
		else
		{
			men = "Usted no está en condiciones para jubilarse";
		}
	}
	cout << "---------------------------------------------------" << endl;
	cout << men;
	return 0;
}

