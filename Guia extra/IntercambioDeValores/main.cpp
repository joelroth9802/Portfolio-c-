#include <iostream>
/*Escriba un fragmento de programa que intercambie los valores de dos variables*/
using namespace std;

int main()
{
    int varA, varB, aux;

    cout << "Ingrese un valor para cada variable: " << endl;
    cout << "Variable a: ";
    cin >> varA;
    cout << "Variable b: ";
    cin >> varB;
    cout << endl;
    aux = varA;
    varA = varB;
    varB = aux;
    cout << "Interambios: " << endl;
    cout << "Variable a: " << varA << endl;
    cout << "Variable b: " << varB << endl;
    return 0;
}
