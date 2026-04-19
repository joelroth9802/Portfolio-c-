#include <iostream>
#include <cstring>
/*Realice una función que dado un vector de cstring devuelva un vector con las letras al
reverso.*/
using namespace std;
void cadena_reverso(char cadena[], char *&cadena2);
int main()
{
    char cadena[100], *cadena2;
    cout << "Ingrese una frase: ";
    cin.getline(cadena, 100);
    cout << endl;
    cadena_reverso(cadena, cadena2);
    cout << "Resultado: " << cadena2 << endl;
    delete[] cadena2;
    return 0;
}
void cadena_reverso(char cadena[], char *&cadena2){
    int longitud = strlen(cadena), c = 0;
    cadena2 = new char[longitud + 1];
    for (int i = longitud - 1;i >= 0;i--){
        cadena2[c++] = cadena[i];
    }
    cadena2[longitud] = '\0';
}