#include <iostream>
#include <iomanip>
#include <string>
/*Escriba un programa C++ que exhiba en pantalla el siguiente menú:
    CALCULOS
        A- Calcular el doble del dato.
        B- Determinar si es par.
        C- Determinar si es primo.
        D- Salir.
    Elija una Opción (A..DE): _
El programa debe ingresar un dato y presentar el menú. Luego, de acuerdo a la
selección el usuario debe resolver las opciones propuestas en el menú. Además
debe validar la entrada de la opción (A..D) indicando un mensaje de error si
corresponde. Resuelva cada opción del menú con una función C++ creada por Ud.*/
using namespace std;
int doble(int v1);
string esPar(int n1);
string esPrimo(int p1);
int main()
{
    int valor;
    char letra;
    cout << "Ingrese un valor: ";
    cin >> valor;
    cout << endl;
    cout << "CALCULOS" << endl;
    cout << setw(34) << "A- Calcular el doble del dato." << endl;
    cout << setw(28) << "B- Determinar si es par." << endl;
    cout << setw(30) << "C- Determinar si es primo." << endl;
    cout << setw(13) << "D- Salir." << endl;
    cout << endl;
    cout << "Opcion: ";
    cin >> letra;
    cout << endl;
    switch (letra){
    case 'A':  cout << doble(valor) << endl;
        break;
    case 'B': cout << esPar(valor) << endl;
        break;
    case 'C': cout << esPrimo(valor) << endl;
        break;
    default: cout << "Error al ingresar la letra." << endl;
    }
    return 0;
}
int doble(int v1){
    return v1*2;
}
string esPar(int n1){
    string mensaje;
    if (n1%2 == 0){
        mensaje = "El valor ingresado es par.";
    }
    else{
        mensaje = "El valor ingresado no es par.";
    }
    return mensaje;
}
string esPrimo(int p1){
    int divisor = 2;
    bool resto0 = false;
    string mensaje;
    //Si el numerador es menor a 1, no es primo.
    if (p1 <= 1){
        mensaje = "No es primo";
    }
    //Si el numerador que ingresamos es multiplo de algunos de los numeros del denominador o divisor entonces
    //La condicion es true y no es primo.
    while (divisor < p1){
        if (p1%divisor == 0){
            resto0 = true;
        }
        divisor++;
    }
    if (resto0){
        mensaje = "El numero no es primo";
    }
    else{
        mensaje = "El numero es primo";
    }
    return mensaje;
}
