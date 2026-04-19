#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring y dos enteros retorne la subcadena que esta
formada por desde el primer entero pasado por parámetros hasta el segundo.*/
using namespace std;
void subcadena(char cadena[], int valor1, int valor2, char *&cadena2);
int main()
{
    char cadena[] = "Programacion", *cadena2;
    int valor1 = 5, valor2 = 10;
    subcadena(cadena, valor1, valor2, cadena2);
    cout << "Resultado: " << cadena2 << endl;
    delete[] cadena2;
    return 0;
}
void subcadena(char cadena[], int valor1, int valor2, char *&cadena2){
    unsigned int tamSubcadena = (valor2 - valor1) + 1;
    cadena2 = new char[tamSubcadena + 1];
    strncpy(cadena2, cadena + valor1, tamSubcadena);
    cadena2[tamSubcadena] = '\0';
}