#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en una posición pasada por parámetros.*/
using namespace std;
void agregar_valor(int *&ptrvector, int cant, int valor, int pos);
int main()
{
    int *ptrvector, cant, valor, pos;
    cout << "Ingrese la cantidad de elementos para el vector: ";
    cin >> cant;
    ptrvector = new int[cant];
    cout << endl;
    cout << "Ingrese los valores del vector: " << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> ptrvector[i];
    }
    cout << endl;
    cout << "Ingrese el valor y la posicion en la que desea agregar dicho valor:" << endl;
    cout << "Valor: ";
    cin >> valor;
    cout << "Posicion: ";
    cin >> pos;
    pos--;
    agregar_valor(ptrvector, cant, valor, pos);
    delete[] ptrvector;
    return 0;
}
void agregar_valor(int *&ptrvector, int cant, int valor, int pos){
    int *ptrvector2 = new int[cant+1], c = 0;
    for (int i = 0;i < pos;i++){
        ptrvector2[i] = ptrvector[c++];
    }
    ptrvector2[pos] = valor;
    for (int i = pos+1;i <= cant;i++){
        ptrvector2[i] = ptrvector[c++];
    }
    cout << endl;
    cout << "Vector: ";
    for (int i = 0;i < cant+1;i++){
        cout << ptrvector2[i] << ' ';
    }
    cout << endl;
    delete[] ptrvector;
    ptrvector = ptrvector2;
}
