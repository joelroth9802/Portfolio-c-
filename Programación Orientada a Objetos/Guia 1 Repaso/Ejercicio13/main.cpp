#include <iostream>

using namespace std;
int funcionH(int p1);
int main()
{
    int x;
    cout << "Ingrese un valor para la funcion H(x): ";
    cin >> x;
    cout << endl;
    cout << "Resultado: " << funcionH(x) << endl;
    return 0;
}
int funcionH(int p1){
    if (p1 < 4){
        return 4*p1;
    }
    else{
        return 3*funcionH(p1-2) + 1;
    }
}
