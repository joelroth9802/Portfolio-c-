#include <iostream>
/*La serie de Fibonacci se calcula de la forma siguiente:
1 + 1 + 2 + 3 + 5 + 8 + 13 +…
Donde cada término i se calcula sumando los 2 anteriores: ti=ti-1+ti-2, y los 2 términos
iniciales valen 1.
Escriba una función recursiva para calcular la serie de Fibonacci y luego escriba un
programa cliente que la utilice.*/
using namespace std;
int fibonacci(int ant);
int main()
{
    int num;
    cout << "Ingrese un valor para calcular Fibonacci: ";
    cin >> num;
    cout << endl;
    cout << "Resultado: " << fibonacci(num) << endl;
    return 0;
}
int fibonacci(int ant){
    if (ant == 1 || ant == 2){
        return 1;
    }
    if (ant <= 0){
        return 0;
    }
    else{
        return fibonacci(ant-1) + fibonacci(ant-2);
    }
}
