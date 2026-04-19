#include <iostream>
/*Rellenar un array de 10 números, posteriormente utilizando punteros, indicar cuales son números pares y su posicion
 * de memoria*/
using namespace std;

int main()
{
    int numeros[10], *dir_numeros;
    cout << "Ingrese 10 valores: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> numeros[i];
    }
    cout << endl;
    dir_numeros = numeros;
    for (int i = 0;i < 10;i++){
        if (*dir_numeros%2 == 0){
            cout << "Numero par: " << *dir_numeros << endl;
            cout << "Posicion de memoria: " << dir_numeros << endl;
            cout << endl;
        }
        dir_numeros++;
    }
    return 0;
}
