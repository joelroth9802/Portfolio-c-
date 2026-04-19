#include <iostream>
/*Realice una función que, dado 2 vectores de enteros, los concatene. Utilice recursividad.*/
using namespace std;
void concatenar(int v1[], int v2[], int v3[], int c);
int main()
{
    int vector1[5], vector2[5], vector3[10], cant = 0;
    cout << "Ingrese 2 vectores: " << endl;
    cout << "Vector 1" << endl;
    for (int i = 0;i < 5;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector1[i];
    }
    cout << endl;
    cout << "Vector 2" << endl;
    for (int i = 0;i < 5;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector2[i];
    }
    cout << endl;
    concatenar(vector1, vector2, vector3, cant);
    cout << "Resultado: ";
    for (int i = 0;i < 10;i++){
        cout << vector3[i] << ' ';
    }
    cout << endl;
    return 0;
}
void concatenar(int v1[], int v2[], int v3[], int c){
    if (c == 10){
        return;
    }
    if (c < 5){
      v3[c] = v1[c];
    }
    else{
        v3[c] = v2[c-5];
    }
    concatenar(v1, v2, v3, c + 1);
}
