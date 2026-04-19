#include <iostream>
#include <climits>
/*Realice un método que retorne el menor elemento de un vector de 10 enteros. Utilice
recursividad.*/
using namespace std;
int valor_min(int vector[], int tam, int valorMin);
int main()
{
    int vector[10], valorMin = INT_MAX, tam = 0;
    cout << "Ingrese 10 valores: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Valor minimo: " << valor_min(vector, tam, valorMin) << endl;
    return 0;
}
int valor_min(int vector[], int tam, int valorMin){
    if (tam == 10){
        return valorMin;
    }
    if (vector[tam] < valorMin){
        valorMin = vector[tam];
    }
    return valor_min(vector, tam + 1, valorMin);
}
