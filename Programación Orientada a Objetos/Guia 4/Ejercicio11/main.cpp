#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring devuelva un vector con las palabras que
terminen con una letra ingresada por parámetros.*/
using namespace std;
void nueva_cadena(char cadena[], char letra, char *&cadena2);
int main()
{
    char cadena[100], letra, *cadena2;
    cout << "Ingrese una frase: ";
    cin.getline(cadena, 100);
    cout << endl;
    cout << "Ingrese una letra: ";
    cin >> letra;
    cout << endl;
    nueva_cadena(cadena, letra, cadena2);
    cout << "Resultado: " << cadena2 << endl;
    delete[] cadena2;
    return 0;
}
void nueva_cadena(char cadena[], char letra, char *&cadena2){
    int longitud = strlen(cadena);
    cadena2 = new char[longitud + 1];
    cadena2[0] = '\0';
    char *token = strtok(cadena," ");
    while (token != NULL){
        int tamPal = strlen(token);
        if (token[tamPal - 1] == letra){
            strncat(cadena2, token, tamPal);
            strncat(cadena2, " ", 1);
        }
        token = strtok(NULL, " ");
    }
}