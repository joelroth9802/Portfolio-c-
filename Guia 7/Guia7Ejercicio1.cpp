#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*1. Escriba los prototipos de funciones C++ que cumplan con las características siguientes.
Proponga Ud. los elementos no especificados en el enunciado:
a) Función hipot() que devuelve la hipotenusa de un triángulo rectángulo.
b) Función: facto().Propósito: calcular el factorial de un número (int), sabiendo que el factorial
de un valor n es : n! = n*(n-1) * (n-2) -…..*1
c) Función division_entera() que devuelve el cociente entero y el resto de la división entre 2
enteros (int).
d) Función intercambio() que permite intercambiar los contenidos de 2 parámetros tipo char,
modificando simultáneamente los 2 parámetros de llamada. No devuelve otro resultado.
e) Función suma_vecto() que devuelve como resultado una variable que se obtiene de acumular
los valores enteros de un vector, dicho vector y la cantidad real de elementos del mismo se pasan
como parámetros.*/
//Prototipos
int hipot(int p1, int p2);
int facto(int p1);
void division_entera(int p1, int p2, int &div, int &resto);
void intercambio( char &p2,char &p1);
int suma_vecto(int p1[]);
int main(int argc, char *argv[]) {
	//a)
	int lado1, lado2;
	cout << "Ingrese 2 lados del triangulo para calcular la hipotenusa: " << endl;
	cout << "Lado 1: ";
	cin >> lado1;
	cout << "Lado 2: ";
	cin >> lado2;
	cout << endl;
	cout << "La hipotenusa mide " << hipot(lado1, lado2) << " cm." << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	//b)
	int num;
	cout << "Ingrese un valor para calcular el factorial: ";
	cin >> num;
	cout << endl;
	cout << "El factorial de " << num << " es " << facto(num) << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	//c)
	int valor1, valor2, div, resto;
	cout << "Ingrese dos valores para calcular el cociente y el resto: " << endl;
	cout << "Valor 1: ";
	cin >> valor1;
	cout << "Valor 2: ";
	cin >> valor2;
	division_entera(valor1, valor2, div, resto);
	cout << endl;
	cout << "El resultado de la división es " << div << " y el resto es " << resto << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	//d)
	char letra1, letra2;
	cout << "Ingrese 2 palabras para intercambiarlas: " << endl;
	cout << "Letra 1: ";
	cin >> letra1;
	cout << "Letra 2: ";
	cin >> letra2;
	intercambio(letra1, letra2);
	cout << endl;
	cout << "Letra 1: " << letra1 << endl;
	cout << "Letra 2: " << letra2 << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	//e)
	int vec[10] = {20,40,54,14,64,76,43,74,34,76};
	cout << "Vector: ";
	for (int i = 0;i < 10;i++)
	{
		cout << setw(5) << vec[i];
	}
	cout << endl;
	cout << "Suma del vector: " << suma_vecto(vec);
	return 0;
}
//a)
int hipot(int p1, int p2){
	return sqrt(pow(p1, 2) + pow(p2, 2));
}
//b)
int facto(int p1){
	int fac = 1;
	for (int i = 1;i <= p1;i++)
	{
		fac *= i;
	}
	return fac;
}
//c)
void division_entera(int p1, int p2, int &div, int &resto){
	div = p1/p2;
	resto = p1 % p2;
}
//d)
void intercambio( char &p2,char &p1){
	char aux;
	aux = p1;
	p1 = p2;
	p2 = aux;
}
//e)
int suma_vecto(int p1[]){
	int acum = 0;
	for (int i = 0;i < 10;i++)
		{
			acum += p1[i];
		}
	return acum;
}
