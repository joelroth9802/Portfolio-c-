#include <iostream>
/*Escriba 3 funciones sobrecargando el nombre intercambio(..) de modo que cada una
de ellas pueda ser invocada y produzca el intercambio de 2 datos que se pasan
como parámetros: 2 datos de tipo char, 2 datos enteros, dos arreglos de flotantes.*/
using namespace std;
void intercambio(char &p1, char &p2);
void intercambio(int &p1, int &p2);
void intercambio(float p1[], float p2[]);
int main()
{
    //Intercambio de letras
    char letra1, letra2;
    cout << "Ingrese 2 letras para intercambiar: " << endl;
    cout << "Letra 1: ";
    cin >> letra1;
    cout << "Letra 2: ";
    cin >> letra2;
    cout << endl;
    intercambio(letra1, letra2);
    cout << "Letra 1: " << letra1 << endl;
    cout << "Letra 2: " << letra2 << endl;
    cout << "----------------------------------------------------------" << endl;
    //Intercambio de números enteros
    int n1, n2;
    cout << "Ingrese 2 valores para intercambiar: " << endl;
    cout << "Valor 1: ";
    cin >> n1;
    cout << "Valor 2: ";
    cin >> n2;
    cout << endl;
    intercambio(n1, n2);
    cout << "Valor 1: " << n1 << endl;
    cout << "Valor 2: " << n2 << endl;
    cout << "----------------------------------------------------------" << endl;
    //Intercambio de arreglos flotantes
    float vector1[2], vector2[2];
    cout << "Ingrese valores para los siguientes vectores: " << endl;
    cout << "Vector 1: " << endl;
    for (int i = 0;i < 2;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector1[i];
        cout << endl;
    }
    cout << "Vector 2: " << endl;
    for (int i = 0;i < 2;i++){
        cout << "Valor " << i+1 << ": ";
        cin >> vector2[i];
        cout << endl;
    }
    intercambio(vector1, vector2);
    cout << "Vector 1: ";
    for (int i = 0;i < 2;i++){
        cout << vector1[i] << ' ';
    }
    cout << endl;
    cout << "Vector 2: ";
    for (int i = 0;i < 2;i++){
        cout << vector2[i] << ' ';
    }
    cout << endl;
    return 0;
}
void intercambio(char &p1, char &p2){
    char aux;
    aux = p1;
    p1 = p2;
    p2 = aux;
}
void intercambio(int &p1, int &p2){
    int aux;
    aux = p1;
    p1 = p2;
    p2 = aux;
}
void intercambio(float p1[], float p2[]){
    for (int i = 0;i < 2;i++){
        float aux;
        aux = p1[i];
        p1[i] = p2[i];
        p2[i] = aux;
    }
}
