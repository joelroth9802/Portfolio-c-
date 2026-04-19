#include <iostream>
/*Escriba una función recursiva para calcular el máximo común divisor (m.c.d.)de dos
números enteros dados aplicando las propiedades recurrentes.
Si a>b, entonces m.c.d.(a,b)=m.c.d.(a-b,b)
Si a<b, entonces m.c.d.(a,b)=m.c.d.(a, b-a)
Si a=b, entonces m.c.d.(a,b)=m.c.d.(b,a)=a=b*/
using namespace std;
int MaximoComunDivisor(int n1, int n2);
int main()
{
    int val1, val2;
    cout << "Ingrese dos valores para saber el m.c.d: " << endl;
    cout << "Valor 1: ";
    cin >> val1;
    cout << "Valor 2: ";
    cin >> val2;
    cout << endl;
    cout << "Maximo comun divisor: " << MaximoComunDivisor(val1, val2) << endl;
    return 0;
}
int MaximoComunDivisor(int n1, int n2){
    if (n1 == n2){
        return n1;
    }
    else{
        if (n1 > n2){
            return MaximoComunDivisor(n1 - n2, n2);
        }
        else{
            return MaximoComunDivisor(n1, n2 - n1);
        }
    }
}
