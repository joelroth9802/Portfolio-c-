#include <iostream>
/*Comprobar si un numero es par o impar, y señalar la posición de memoria donde se esta guardando el número. Con punteros*/
using namespace std;

int main()
{
    int val, *dir_num;

    cout << "Ingrese un valor: ";
    cin >> val;
    cout << endl;

    dir_num = &val;//Guardando la posicion de memoria
    //Con el * decimos que nos muestre el contenido de esa posicion de memoria, y despues corroboramos si es par
    if (*dir_num%2 == 0){
        cout << "Par" << endl;
    }
    else{
        cout << "Impar" << endl;
    }
    cout << "Posicion de memoria: " << dir_num << endl;
    return 0;
}
