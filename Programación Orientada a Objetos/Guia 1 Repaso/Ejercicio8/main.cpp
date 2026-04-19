#include <iostream>
#include <cmath>
/*Escriba una función recursiva para calcular la potencia de exponente entero de un
número. La potencia puede ser negativa. Pruebe la función en un programa C++.
Recuerde que a^n=a * a^(n-1)*/
using namespace std;
//Prototipo
float potencia(int n, int p);
int main()
{
    int num, exp;
    cout << "Ingrese un valor para calcular la potencia: ";
    cin >> num;
    cout << "Potencia: ";
    cin >> exp;
    cout << endl;
    cout << "Resultado: " << potencia(num, exp) << endl;//Llamada
    return 0;
}
//Funcion secundaria
float potencia(int n, int p){
    if (p == 0){//Caso base
        return 1;
    }
    if (p < 0){//Manejo de exponentes negativos
        return 1/potencia(n, -p);
    }
    else{//Caso recursivo
        return n*potencia(n, p-1);
    }
}
