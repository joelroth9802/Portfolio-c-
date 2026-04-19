#include <iostream>
#include <cmath>
/*Escriba una función llamada al_cuadrado que calcule el cuadrado del valor que se le transmite y
 * despliegue el resultado. La función debera de ser capaz de elevar al cuadrado números flotantes.*/
using namespace std;
//Prototipos
void pedirValores(float &p1);
float al_cuadrado(float p1);
//Funcion Principal
int main()
{
    float n1;
    pedirValores(n1);
    cout << endl;
    cout << "Resultado: " << al_cuadrado(n1) << endl;
    return 0;
}
//Funciones secundarias
void pedirValores(float &p1){
    cout << "Ingrese un valor: ";
    cin >> p1;
}
float al_cuadrado(float p1){
    float result;
    result = pow(p1, 2);
    return result;
}
