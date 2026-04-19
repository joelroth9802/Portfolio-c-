#include <iostream>
/*Dado un valor numérico ingresado por pantalla, indicar si el número es primo o no.*/
using namespace std;

int main()
{
    int num, divisor = 2;
    bool resto0 = false;
    cout << "Ingrese un numero para saber si es primo: ";
    cin >> num;
    cout << endl;
    //Si el numerador es menor a 1, no es primo.
    if (num <= 1){
        cout << "No es primo" << endl;
        return 0;
    }
    //Si el numerador que ingresamos es multiplo de algunos de los numeros del denominador o divisor entonces
    //La condicion es true y no es primo.
    while (divisor < num){
        if (num%divisor == 0){
            resto0 = true;
        }
        divisor++;
    }
    if (resto0){
        cout << "El numero no es primo" << endl;
    }
    else{
        cout << "El numero es primo" << endl;
    }
    return 0;
}
