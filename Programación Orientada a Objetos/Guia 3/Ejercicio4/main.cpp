#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, remueva el elemento que se
encuentra en una posición pasada por parámetro. Si la posición es mayor a la cantidad de
elementos, la función no debe remover ningún elemento.*/
using namespace std;
void removerValor(int *&vector, int cant, int pos);
int main()
{
    int *vector, cant, pos;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> cant;
    vector = new int[cant];
    cout << endl;
    cout << "Ingrese los valores del vector: " << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Ingrese la posicion del vector que desea remover: ";
    cin >> pos;
    cout << endl;
    removerValor(vector, cant, pos);
    delete[] vector;
    return 0;
}
void removerValor(int *&vector, int cant, int pos){
    if (pos > cant || pos < 1){
        cout << "Posicion invalida. El vector queda igual." << endl;
        cout << "Vector: ";
        for (int i = 0;i < cant;i++){
            cout << vector[i] << ' ';
        }
        cout << endl;
    }
    else{
        pos--;
        int c = 0;
        int *vector2 = new int[cant-1];
        for (int i = 0;i < pos;i++){
            vector2[c++] = vector[i];
        }
        for (int i = pos+1;i < cant;i++){
            vector2[c++] = vector[i];
        }
        cout << "Vector: ";
        for (int i = 0;i < cant-1;i++){
            cout << vector2[i] << ' ';
        }
        cout << endl;
        delete[] vector;
        vector = vector2;
    }
}
