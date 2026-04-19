#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, remueva la primera
coincidencia de un elemento pasado por parámetro.*/
using namespace std;
void removerCoincidencia(int *&vector, int cant, int valor);
int main()
{
    int *vector, cant, valor;
    cout << "Ingrese la cantidad de elementos para el vector: ";
    cin >> cant;
    cout << endl;
    vector = new int[cant];
    cout << "Ingrese los valores del vector:" << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Ingrese el valor que desea eliminar del vector: ";
    cin >> valor;
    removerCoincidencia(vector, cant, valor);
    delete[] vector;
    return 0;
}
void removerCoincidencia(int *&vector, int cant, int valor){
    int i;
    for (i = 0;(i < cant) && (valor != vector[i]);i++);
    if (i == cant){
        cout << "El dato ingresado no se encuentra en el vector" << endl;
    }
    else{
        int *vector2 = new int[cant-1], c = 0;
        for (int j = 0;j < i;j++){
            vector2[c++] = vector[j];
        }
        for (int j = i+1;j < cant;j++){
            vector2[c++] = vector[j];
        }
        cout << "Vector: ";
        for (int j = 0;j < cant-1;j++){
            cout << vector2[j] << ' ';
        }
        cout << endl;
        delete[] vector;
        vector = vector2;
    }
}
