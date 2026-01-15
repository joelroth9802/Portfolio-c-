#include <iostream>
#include <string>
using namespace std;
/*Ingresar una cadena de caracteres que represente una dirección de correo electrónico. Se
desea validar la dirección para lo cual debe terminar en “.com”, debe tener una @ entre la
segunda posición y al menos una antes de “.com”. Y no debe tener espacios en blanco.*/
int main(int argc, char *argv[]) {
	string correo;
	cout << "Ingrese dirección de correo electronico: ";
	getline(cin, correo);
	int pos1 = correo.find(" ");
	if (pos1 == -1)
	{
		int pos = correo.find("@",1);
		if (pos != -1)
		{
			int pos3 = correo.find(".com",pos);
			if (pos3 != -1)
			{
				cout << "Correo válido";
			}
			else
			{
				cout << "El correo no posee .com";
			}
		}
		else
		{
			cout << "El correo no posee arroba";
		}
		
	}
	else
	{
		cout << "Correo invalido";
	}
	return 0;
}
