#include <iostream>

using namespace std;
/*Escribe la siguiente expresión como expresión en c++ [a+(b/c)]/[d+(e/f)]*/
int main()
{
    float a, b, c, d, e, f, result = 0;

    cout << "Ingrese un valor para las siguientes variables: " << endl;
    cout << "Variable a: ";
    cin >> a;
    cout << "Variable b: ";
    cin >> b;
    cout << "Variable c: ";
    cin >> c;
    cout << "Variable d: ";
    cin >> d;
    cout << "Variable e: ";
    cin >> e;
    cout << "Variable f: ";
    cin >> f;
    cout << endl;
    result = (a + (b/c))/(d + (e/f));
    cout.precision(3);
    cout << "Resultado: " << result << endl;
    return 0;
}
