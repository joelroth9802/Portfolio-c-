#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, retorne un vector con el doble
de elementos y los nuevos elementos deben ser una copia de los anteriores.*/
using namespace std;
void vector_doble(int *&vector, int &cant);
int main()
{
    int *vector, cant;
    cout << "Ingrese la cantidad de elementos para el vector: ";
    cin >> cant;
    vector = new int[cant];
    cout << endl;
    cout << "Ingrese los valores del vector:" << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    vector_doble(vector, cant);
    delete[] vector;
    return 0;
}
void vector_doble(int *&vector, int &cant){
    int *vector2 = new int[cant*2];
    for (int i = 0;i < cant;i++){
        vector2[i] = vector[i];
    }
    int c = cant;
    for (int i = 0;i < cant;i++){
        vector2[c++] = vector[i];
    }
    cant *= 2;
    cout << "Vector: ";
    for (int i = 0;i < cant;i++){
        cout << vector2[i] << ' ';
    }
    cout << endl;
    delete[] vector;
    vector = vector2;
}
