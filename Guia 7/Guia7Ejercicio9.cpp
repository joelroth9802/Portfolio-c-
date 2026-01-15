#include <iostream>
#include <string>
using namespace std;
/*Realice una función que reciba un string como parámetro que contenga una frase y devuelva –
POR PARÁMETRO – la cantidad de palabras que posea*/
int cantpalabras(string frase);//Prototipo
int main(int argc, char *argv[]) {
	string frase;
	//Carga de datos
	cout << "Ingrese una frase para el recuento de palabras: ";
	getline(cin, frase);
	cout << endl;
	//LLamada de la función
	cout << "Cantidad de palabras: " << cantpalabras(frase);
	return 0;
}
int cantpalabras(string frase){
	int p = 1;
	for (int i = 0;frase[i] != '\0';i++)
	{
		if (frase[i] == ' ')
		{
			p++;
		}
	}
	return p;
}

