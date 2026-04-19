#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, remueva una cantidad de
elementos pasados por parámetros. Dicha función debe comenzar a eliminar elementos
desde el final.*/
using namespace std;
void remover_valores(int *&vector, int &cant, int cValores);
int main()
{
    int *vector, cant, cValores;
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
    cout << "Ingrese la cantidad de elementos que desea remover: ";
    cin >> cValores;
    cout << endl;
    remover_valores(vector, cant, cValores);
    delete[] vector;
    return 0;
}
void remover_valores(int *&vector, int &cant, int cValores){
    if (cValores > cant){
        cout << "Ingrese una cantidad de elementos a romover acorde a la cantidad de elementos del vector" << endl;
        return;
    }
    cant -= cValores;
    int *vector2 = new int[cant];
    for (int i = 0;i < cant;i++){
        vector2[i] = vector[i];
    }
    for (int i = 0;i < cant;i++){
        cout << vector2[i] << ' ';
    }
    cout << endl;
    delete[] vector;
    vector = vector2;
}
