#include <iostream>

using namespace std;
/*Escribe un programa que lea de la entrada estandar dos números y muestre en la salida estándar su suma, resta,
 * multiplicacion y division*/
int main()
{
    int num1, suma, resta, mult;
    float num2, div;

    cout << "Ingrese dos numeros enteros: " << endl;
    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    cout << endl;
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1*num2;
    div = num1/num2;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << mult << endl;
    cout << "Division: " << div << endl;
    return 0;
}
