#include <iostream>
//Recursividad
using namespace std;
int factorial(int n);
int main()
{
    int num;
    cout << "Ingrese un valor para calcular el factorial: ";
    cin >> num;
    cout << endl;
    cout << "Resultado: " << factorial(num) << endl;
    return 0;
}
int factorial(int n){
    if (n == 0){//Caso base
        return 1;
    }
    else{//Caso general
        return n*factorial(n-1);
    }
}
