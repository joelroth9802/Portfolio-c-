#include <iostream>
/*Realice un método que retorne el acumulado de un vector de 10 enteros. Utilice recursividad.*/
using namespace std;
int suma_vector(int v1[], int i);
int main()
{
    int vector[10], i = 10;
    cout << "Ingrese 10 valores: " << endl;
    for (int i = 0;i < 10;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector[i];
    }
    cout << endl;
    cout << "Suma del vector: " << suma_vector(vector, i) << endl;
    return 0;
}
int suma_vector(int v1[], int i){
    if (i == 0){
        return 0;
    }
    else{
        return v1[i-1] + suma_vector(v1, i-1);
    }
}
