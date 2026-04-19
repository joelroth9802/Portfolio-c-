#include <iostream>
#include <cmath>
/*Escriba los prototipos de funciones C++ que cumplan con las características siguientes.
Proponga Ud. los elementos no especificados en el enunciado:
a) Una función llamada division_entera() que devuelve el cociente entero y el resto
de la división entre 2 enteros (int).
b) Nombre de la función: facto(). Propósito: calcular el factorial de un número (int).
c) Función hipot() que devuelve la hipotenusa de un triángulo rectángulo.
d) Función intercambio() que permite intercambiar los contenidos de 2 parámetros
tipo char, modificando simultáneamente los 2 parámetros de llamada. No devuelve
otro resultado.*/
using namespace std;
//Prototipos
void division_entera(int val1, int val2, float &p1, float &p2);
int facto(int p1);
float hipot(float p1, float p2);
void intercambio(char &p1, char &p2);
int main()
{
    //a)
    int n1, n2;
    float cociente, resto;
    cout << "Ingrese 2 valores para determinar el cociente y el resto: " << endl;
    cout << "Valor 1: ";
    cin >> n1;
    cout << "Valor 2: ";
    cin >> n2;
    division_entera(n1, n2, cociente, resto);
    cout << endl;
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
    cout << "------------------------------------------------------------" << endl;
    //b)
    int num;
    cout << "Ingrese un valor para calcular el factorial: ";
    cin >> num;
    cout << endl;
    cout << "Resultado: " << facto(num) << endl;
    cout << "------------------------------------------------------------" << endl;
    //c
    float catA, catO;
    cout << "Ingrese los valores para calcular la hipotenusa: " << endl;
    cout << "Cateto Adyacente: ";
    cin >> catA;
    cout << "Cateto Opuesto: ";
    cin >> catO;
    cout << endl;
    cout << "Resultado: " << hipot(catA, catO) << endl;
    cout << "------------------------------------------------------------" << endl;
    //d)
    char letra1, letra2;
    cout << "Ingrese 2 letras para intercambiar: " << endl;
    cout << "Letra 1: ";
    cin >> letra1;
    cout << "Letra 2: ";
    cin >> letra2;
    cout << endl;
    intercambio(letra1, letra2);
    cout << "Letra 1: " << letra1 << endl;
    cout << "Letra 2: " << letra2 << endl;
    return 0;
}
//Funciones secuandarias
void division_entera(int val1, int val2, float &p1, float &p2){
    p1 = val1/val2;
    p2 = val1 % val2;
}
int facto(int p1){
    int factor = 1;
    for (int i = 1;i <= p1;i++){
        factor *= i;
    }
    return factor;
}
float hipot(float p1, float p2){
    return sqrt(pow(p1,2) + pow(p2,2));
}
void intercambio(char &p1, char &p2){
    char aux;
    aux = p1;
    p1 = p2;
    p2 = aux;
}
