#include <iostream>
/*Hacer un programa que calcule y muestre el total a pagar por la compra de
pantalones, se debe pedir como entrada el valor del pantalón y la cantidad de
pantalones comprados, además si se compra 5 pantalones o mas se le aplica un
descuento de 25% al monto total a pagar y si son menos de 5 pantalones el descuento
es de 10% al monto total a pagar..*/
using namespace std;

int main()
{
    int valorP, cantP, desc, montoT;
    cout << "Datos para la compra de pantalones: " << endl;
    cout << "Valor: ";
    cin >> valorP;
    cout << "Cantidad: ";
    cin >> cantP;
    cout << endl;
    montoT = valorP*cantP;
    if (cantP >= 5){
        desc = montoT*0.25;
        montoT -= desc;
    }
    else{
        desc = montoT*0.10;
        montoT -= desc;
    }
    cout << "---------------------------------------------" << endl;
    cout << "Total a pagar: $" << montoT << endl;
    cout << "Descuento: $" << desc << endl;
    return 0;
}
