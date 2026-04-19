#include <iostream>
/*Escribe un programa que define un vector de números y muestre en la salida el vector en orden inverso
 * del ultimo al primer elemento*/
using namespace std;

int main()
{
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Vector normal: ";
    for (int i = 0;i < 10;i++){
        cout << vector[i] << ' ';
    }
    cout << endl;
    cout << "Vector inverso: ";
    for (int i = 9;i >= 0;i--){
        cout << vector[i] << ' ';
    }
    cout << endl;
    return 0;
}
