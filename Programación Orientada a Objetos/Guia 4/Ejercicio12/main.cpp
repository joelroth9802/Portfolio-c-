#include <iostream>
#include <cstring>
/*Realice una función que dado un vector de cstring devuelva un vector con las palabras que
contengan un cstring ingresado por parámetros.*/
using namespace std;
void nueva_cadena(char cadena[], char subcadena[], char *&cadena2);
int main()
{
    char cadena[100], subcadena[100], *cadena2;
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, 100);
    cout << endl;
    cout << "Ingrese una subcadena: ";
    cin.getline(subcadena, 100);
    cout << endl;
    nueva_cadena(cadena, subcadena, cadena2);
    cout << "Resultado: " << cadena2 << endl;
    delete[] cadena2;
    return 0;
}
void nueva_cadena(char cadena[], char subcadena[], char *&cadena2){
    int longitud = strlen(cadena);
    cadena2 = new char[longitud + 1];
    cadena2[0] = '\0';
    char *token = strtok(cadena," ");
    while (token != NULL){
        // strstr busca 'subcadena' dentro de 'token'.
        // Si no devuelve null, significa que SÍ lo encontró en alguna parte.
        if (strstr(token, subcadena) != NULL){
            strncat(cadena2, token, strlen(token));
            strncat(cadena2, " ", 1);
        }
        token = strtok(NULL, " ");
    }
}
