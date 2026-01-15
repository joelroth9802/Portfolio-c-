#include <iostream>
#include <string>
using namespace std;
/*Ingrese una cadena que contenga la palabra “pero”. Reemplace dicha palabra por “sin
embargo”.*/
int main(int argc, char *argv[]) {
	string cadena;
	cout << "Ingrese una cadena de caracteres que contenga la palabra 'pero': ";
	getline(cin, cadena);
	cout << "--------------------------------------------------" << endl;
	int pos = cadena.find("pero");
	cadena.replace(pos,4, "sin embargo");
	cout << cadena;
	return 0;
}

