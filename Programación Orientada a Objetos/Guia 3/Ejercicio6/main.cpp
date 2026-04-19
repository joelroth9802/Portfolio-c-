#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, remueva un elemento pasado
por parámetro.*/
using namespace std;
void remover_valor(int *&vector, int &cant, int valor);
int main()
{
    int *vector, cant, valor;
    cout << "Ingrese la cantidad de elementos para el vector: ";
    cin >> cant;
    cout << endl;
    vector = new int[cant];
    cout << "Ingrese los valores del vector: " << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Ingrese el valor que desea remover: ";
    cin >> valor;
    cout << endl;
    remover_valor(vector, cant, valor);
    delete[] vector;
    return 0;
}
void remover_valor(int *&vector, int &cant, int valor){
    int c = 0;
    for(int i = 0;i < cant;i++){
        if (vector[i] == valor){
            c++;
        }
    }
    if (c == 0){
        cout << "El valor ingresado no se encuentra en el vector." << endl;
        return;
    }
    int *vector2 = new int[cant-c], aux = 0;
    for (int i = 0;i < cant;i++){
        if (valor != vector[i]){
            vector2[aux++] = vector[i];
        }
    }
    cant -= c;
    cout << "Vector: ";
    for (int i = 0;i < cant;i++){
        cout << vector2[i] << ' ';
    }
    cout << endl;
    delete[] vector;
    vector = vector2;
}
