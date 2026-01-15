#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;
/*Escriba un programa C++ que exhiba en pantalla el siguiente menú:
CALCULOS
A- Calcular el doble del dato.
B- Determinar si es par.
C- Determinar su 5ta potencia.
D- Salir.
Elija una Opción (A..D): _
El programa debe ingresar un dato y presentar el menú. Luego, de acuerdo a la elección del
usuario, debe resolver las opciones propuestas en el menú.
Además, debe validar la entrada de la opción (A..D) indicando un mensaje de error si
corresponde. Para cada opción del menú, deberá proponerse una función que la resuelva*/
//Prototipos
int doble(int n);
string espar(int n);
int potencia(int n);
void salir();
int main(int argc, char *argv[]) {
	int n;
	char letra;
	//Se imprime el menu en pantalla
	cout << "-------------Menu-------------" << endl;
	cout << "A - Calcular el doble del dato" << endl;
	cout << "B - Determinar si es par" << endl;
	cout << "C - Determinar su 5ta potencia" << endl;
	cout << "D - Salir" << endl;
	cout << endl;
	//Carga de datos
	cout << "Opción: ";
	cin >> letra;
	//Si el usuario ingresa una letra en minuscula, la funcion toupper lo convierte en mayuscula
	letra = toupper(letra);
	if ((letra == 'A') || (letra == 'B') || (letra == 'C'))
	{
		cout << "Valor: ";
		cin >> n;
	}
	cout << endl;
	//Informes y llamadas de las funciones utilizando switch
	switch (letra)
	{
	case 'A': cout << "Resultado: " << doble(n);
	break;
	case 'B': cout << "Resultado: " << espar(n);
	break;
	case 'C': cout << "Resultado: " << potencia(n);
	break;
	case 'D': cout << "Saliendo del programa..." << endl;
	salir();
	break;
	default: cout << "Opción no valida" << endl;
	}
	return 0;
}
//Función A
int doble(int n){
	return n*2;
}
//Función B
string espar(int n){
	if (n%2 == 0)
	{
		return "El dato ingresado es par";
	}
	else
	{
		return "El dato ingresado no es par";
	}
}
//Función C
int potencia(int n){
	return pow(n, 5);
}
//Funcion D
void salir(){
	exit(0);//Función para salir del programa
}

