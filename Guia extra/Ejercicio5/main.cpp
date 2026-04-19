#include <iostream>
/*Escribe la siguiente expresión como expresión en c++ a/b + 1*/
using namespace std;

int main()
{
    float a, b, result = 0;

    cout << "Ingrese un valor para la variable a: ";
    cin >> a;
    cout << "Ingrese un valor para la variable b: ";
    cin >> b;
    cout << endl;
    result = (a/b) + 1;
    cout.precision(3);//redondea a tres numeros despues de la coma decimal
    cout << "Resultado: " << result << endl;
    return 0;
}
