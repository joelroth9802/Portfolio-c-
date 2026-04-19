#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en la primera posición.*/
using namespace std;
void agregar_valor(int *&pvector, int cant, int valor);
int main()
{
    int *pvector, cant, valor;
    cout << "Ingrese la cantidad de elementos para el vector: ";
    cin >> cant;
    cout << endl;
    pvector = new int[cant];
    cout << "Ingrese los valores del vector: " << endl;
    for (int i = 0;i < cant;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> pvector[i];
    }
    cout << endl;
    cout << "Ingrese un valor para agregar en la primera posicion del vector: ";
    cin >> valor;
    cout << endl;
    agregar_valor(pvector, cant, valor);
    delete[] pvector;
    return 0;
}
void agregar_valor(int *&pvector, int cant, int valor){
    int *pvector2 = new int[cant+1], c = 0;
    for (int i = 1;i <= cant;i++){
        pvector2[i] = pvector[c++];
    }
    pvector2[0] = valor;
    cout << "Vector: ";
    for (int i = 0; i < cant+1;i++){
        cout << pvector2[i] << ' ';
    }
    cout << endl;
    delete[] pvector;
    pvector = pvector2;
}
