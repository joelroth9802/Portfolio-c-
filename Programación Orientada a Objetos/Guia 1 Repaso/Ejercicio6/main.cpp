#include <iostream>
#include <cmath>
#include <iomanip>
/*a) Escriba una función C++ que determine el interés a obtener por un depósito de
dinero en un banco a interés compuesto. Se conoce el período en meses (n), la tasa
de interés mensual (i) y el monto inicial o capital a depositar (c).
b) Utilice la función en un programa que permita el ingreso del monto inicial del
depósito y la tasa de interés e informe para distintos períodos (2 a 24 meses) el total
que debe reintegrar el banco.*/
using namespace std;
//Prototipo
float interes_compuesto(int m, float i, int mI);
int main()
{
    int meses = 24, montoI;
    float totales[25][2] = {}, interesMensual;
    cout << "Ingrese los datos para el deposito: " << endl;
    cout << "Tasa de interes mensual: ";
    cin >> interesMensual;
    cout << "Capital a depositar: ";
    cin >> montoI;
    cout << endl;
    cout << fixed << setprecision(2);//Fijar 2 numeros despues del punto float
    interesMensual /= 100;
    for (int i = 1;i <= meses;i++){
        totales[i][0] = interes_compuesto(i, interesMensual, montoI);
        totales[i][1] = totales[i][0] - montoI;
    }
    //Informe
    cout << setw(10) << "Mes" << setw(25) << "Total a reintegrar" << setw(25) << "Ganancia" << endl;
    for (int i = 2;i <= meses;i++){
        cout << setw(10) << i << setw(25) << right << totales[i][0] << setw(25) << right << totales[i][1] << endl;
    }
    return 0;
}
//Funcion secundaria
float interes_compuesto(int m, float i, int mI){
    float montoF = mI*pow(1+i,m);
    return montoF;
}
