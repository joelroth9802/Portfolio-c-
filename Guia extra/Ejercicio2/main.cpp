#include <iostream>

using namespace std;
/*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida el precio
 * del producto al aplicarle el IVA.*/
int main()
{
    int precio;

    cout << "Ingrese el precio del producto unitario: ";
    cin >> precio;
    precio *= 1.21;
    cout << endl;
    cout << "Precio mas IVA: " << precio << endl;
    return 0;
}
