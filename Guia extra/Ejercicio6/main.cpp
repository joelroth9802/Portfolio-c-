#include <iostream>
/*Escribe la siguiente expresión matematica como expresión en c++ (a+b)/(c+d)*/
using namespace std;

int main()
{
    float a, b, c, d, result = 0;

    cout << "Ingrese un valor para las siguientes variables: " << endl;
    cout << "Variable a: ";
    cin >> a;
    cout << "Variable b: ";
    cin >> b;
    cout << "Variable c: ";
    cin >> c;
    cout << "Variable d: ";
    cin >> d;
    cout << endl;
    result = (a + b)/(c + d);
    cout.precision(3);
    cout << "Resultado: " << result << endl;
    return 0;
}
