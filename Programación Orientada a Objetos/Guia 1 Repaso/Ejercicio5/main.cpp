#include <iostream>
/*Escriba un programa que utilice una función llamada formalinea() que reciba 2
parámetros: uno de tipo entero y otro de tipo char. El programa debe escribir una
línea con tantos caracteres repetidos como indique el parámetro entero. El 2do
parámetro es opcional; si no se lo especifica en la llamada debe emplear ‘#’ para
formar la secuencia.
Ejemplo de llamadas:
formalinea(7,’-‘); debe mostrar: -------
formalinea(10); debe escribir: ##########*/
using namespace std;
//Prototipo
void formalinea(int v1, char l1 = '#');
int main()
{
    char letra;
    int num;
    cout << "Ingrese un valor para la cantidad de veces que se repetira la letra: ";
    cin >> num;
    cout << "Letra: ";
    cin >> letra;
    cout << endl;
    formalinea(num, letra);
    return 0;
}
void formalinea(int v1, char l1){
    cout << "Letra repetida " << v1 << " veces: ";
    for (int i = 0;i < v1;i++){
        cout << l1;
    }
    cout << endl;
}
