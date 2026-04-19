#include <iostream>
/*Transmisión de Direcciones
 * Ejemplo: Intercambiar el valor de 2 variables.*/
using namespace std;
void intercambio(float *dirNm1, float *dirNm2); //Prototipo
int main()
{
    float num1 = 20.8, num2 = 6.78;

    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    intercambio(&num1, &num2);//Llamada a la funcion intercambio

    cout << endl;
    cout << "Despues del intercambio: " << endl;
    cout << "El nuevo valor de num1: " << num1 << endl;
    cout << "El nuevo valor de num2: " << num2 << endl;
    return 0;
}
void intercambio(float *dirNm1, float *dirNm2){
    float aux;

    //Intercambiar los valores de las variables
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}
