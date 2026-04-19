#include <iostream>
/*Realice un método que retorne el promedio de un vector de 10 enteros*/
using namespace std;
int prom(int vector[]);
int main()
{
    int vector[10];
    cout << "Ingrese 10 valores: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Promedio: " << prom(vector) << endl;
    return 0;
}
int prom(int vector[]){
    int acum = 0;
    for (int i = 0;i < 10;i++){
        acum += vector[i];
    }
    return acum/10;
}
