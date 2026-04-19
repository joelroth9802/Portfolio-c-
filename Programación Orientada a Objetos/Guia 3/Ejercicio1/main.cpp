#include <iostream>
/*Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en la ultima posición.*/
using namespace std;
void agregar_valor(int num, int *&vector, int ultvalor);
int main()
{
    int num, *vector, ultvalor;
    cout << "Ingrese la cantidad de enteros para el vector: ";
    cin >> num;
    vector = new int[num];
    cout << endl;
    cout << "Ingrese valores del vector: " << endl;
    for (int i = 0;i < num;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Ingrese un valor para agregar al vector: ";
    cin >> ultvalor;
    agregar_valor(num, vector, ultvalor);
    cout << endl;
    delete[] vector;
    return 0;
}
void agregar_valor(int num, int *&vector, int ultvalor){
    int *vector2 = new int[num+1];
    for (int i = 0;i < num;i++){
        vector2[i] = vector[i];
    }
    vector2[num] = ultvalor;
    cout << "Vector: ";
    for (int i = 0;i < num+1;i++){
        cout << vector2[i] << ' ';
    }
    delete[] vector;
    vector = vector2;
}
