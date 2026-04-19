#include <iostream>
/*Realice un método que retorne el mayor elemento de un vector de 10 enteros. Utilice
recursividad.*/
using namespace std;
int mayor_num(int vector[], int tam, int maxValor);
int main()
{
    int vector[10], tam = 0, maxValor = 0;;
    cout << "Ingrese 10 valores: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Valor maximo: " << mayor_num(vector, tam, maxValor) << endl;
    return 0;
}
int mayor_num(int vector[], int tam, int maxValor){
    if (tam == 10){
        return maxValor;
    }
    if (vector[tam] > maxValor){
        maxValor = vector[tam];
    }
    return mayor_num(vector, tam + 1, maxValor);
}
