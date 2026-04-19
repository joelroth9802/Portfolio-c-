#include <iostream>
#include <cmath>
/*Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x e y:
 * f(x,y) = raiz de x sobre y elevado al cuadrado menos uno.*/
using namespace std;

int main()
{
    float x, y, result = 0;
    cout << "Ingrese un valor para cada variable: " << endl;
    cout << "Variable x: ";
    cin >> x;
    cout << "Variable y: ";
    cin >> y;
    cout << endl;
    result = sqrt(x)/(pow(y,2) - 1);
    cout.precision(2);
    cout << "Resultado: " << result << endl;
    return 0;
}
