#include <iostream>
#include <string>
using namespace std;
/*Escriba un programa que utilice una función llamada formalinea() que reciba 2
parámetros: uno de tipo entero y otro de tipo char. El programa debe escribir una línea con tantos
caracteres repetidos como indique el parámetro entero. El 2do parámetro es opcional; si no se lo
especifica en la llamada debe emplear ‘#’ para formar la secuencia.
Ejemplo de llamadas:
formalinea(7,’-‘); debe mostrar: -------
formalinea(10); debe escribir: ##########*/
string formalinea(int tam, char letra);//Prototipo
int main(int argc, char *argv[]) {
	char letra;
	int tam;
	//Carga de datos
	cout << "Ingrese la letra que quiere se se repita: ";
	letra = cin.get();
	cout << "Ingrese la cantidad veces que se va a repetir: ";
	cin >> tam;
	cout << endl;
	//Llamada de la función
	cout << "Letra repetida: " << formalinea(tam, letra);
	return 0;
}
//Función
string formalinea(int tam, char letra){
	string rep;
	//Si la letra ingresada es un salto de linea o enter, letra toma valor de #
	if (letra == '\n')
	{
		letra = '#';
	}
	for (int i = 0;i < tam;i++)
	{
		rep += letra;//Acumulador de letra
	}
	return rep;
}

