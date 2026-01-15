#include <iostream>
#include <string>
using namespace std;
/*Realice una función llamada EsImpar que devuelva verdadero si es impar el valor pasado como
parámetro, caso contrario devuelva falso*/
string Esimpar(int n1);//Prototipo
int main(int argc, char *argv[]) {
	int n1;
	//Carga de datos
	cout << "Ingrese un valor para saber si es impar: ";
	cin >> n1;
	cout << endl;
	//Informe
	cout << Esimpar(n1);
	return 0;
}
string Esimpar(int n1){
	string impar;
	//Si el resto es 0, es impar
	if (n1%3 == 0)
	{
		impar = "Verdadero";
	}
	else
	{
		impar = "Falso";
	}
	return impar;
}

