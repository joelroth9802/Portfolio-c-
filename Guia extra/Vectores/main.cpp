#include <iostream>
/*Escribe un programa que defina un vector de números y calcule la suma de sus elementos*/
using namespace std;

int main()
{
    int numeros[10] = {}, acum = 0;

    cout << "Ingrese valores para el siguiente vector: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
        acum += numeros[i];
    }
    cout << endl;
    cout << "Resultado: " << acum << endl;
    return 0;
}
