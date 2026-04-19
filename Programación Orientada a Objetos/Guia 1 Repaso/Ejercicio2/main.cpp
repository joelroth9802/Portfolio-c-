#include <iostream>
#include <iomanip>
/*Escribir un programa C++ que calcule el importe de una factura sabiendo que el IVA
a aplicar es del 13% y que si el importe bruto de la factura es superior a 50, se debe
realizar un descuento del 5%.*/
using namespace std;

int main()
{
    float imporBruto, desc = 0, iva;
    cout << "Ingrese el importe bruto de la factura: ";
    cin >> imporBruto;
    cout << endl;
    cout << fixed << setprecision(2);
    if (imporBruto > 50){
        desc = imporBruto * 0.05;
        imporBruto -= desc;
    }
    iva = imporBruto*0.13;
    imporBruto += iva;
    cout << "Importe: $ " << imporBruto << endl;
    cout << "IVA: $ " << iva << endl;
    cout << "Descuento: " << desc << endl;
    return 0;
}
