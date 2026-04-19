#include <iostream>
/*Encontrar el mayor de dos numeros*/
using namespace std;

int encontrarMax(int x, int y);

int main()
{
    int x, y, result;

    cout << "Ingrese un valor para cada variable: " << endl;
    cout << "Variable x: ";
    cin >> x;
    cout << "Variable y: ";
    cin >> y;
    cout << endl;
    result = encontrarMax(x, y);
    cout << "Maximo valor: " << result << endl;
    return 0;
}

int encontrarMax(int x, int y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
    /*También se puede declarar una variable adentro de la funcion y retornar dicha variable con el máximo valor*/
}
