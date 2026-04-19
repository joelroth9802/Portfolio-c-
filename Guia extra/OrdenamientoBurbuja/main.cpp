#include <iostream>

using namespace std;

int main()
{
    int vector[] ={3,4,6,7,2,5,8}, aux;
    cout << "Vector desordenado: ";
    for (int i = 0;i < 7;i++){
        cout << vector[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 6;i++){
        for (int j = i+1;j < 7;j++){
            if (vector[i] > vector[j]){
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
    cout << endl;
    cout << "Vector ordenado: ";
    for (int i = 0;i < 7;i++){
        cout << vector[i] << ' ';
    }
    cout << endl;
    return 0;
}
