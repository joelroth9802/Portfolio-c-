#include <iostream>
#include <cstring>
#include <cctype>
/*Realice una función que dado un vector de cstring y un entero retorne la subcadena que esta
formada por desde el entero pasado por parámetros hasta el fin de la cadena.*/
using namespace std;
void subcadena(char palabra[], char *&palabra2, int valor);
int main()
{
    char palabra[] = "Programacion", *palabra2;
    int valor = 3;
    subcadena(palabra, palabra2, valor);
    cout << "Resultado: " << palabra2 << endl;
    delete[] palabra2;
    return 0;
}
void subcadena(char palabra[], char *&palabra2, int valor){
    size_t longitud = strlen(palabra);//Calculamos la longitud de la primera palabra
    int tamSubcadena = longitud - valor;//Calculamos el tamaño para la subcadena
    palabra2 = new char[tamSubcadena + 1];//Asignamos espacio de memoria para la nueva palabra
    strncpy(palabra2, palabra + valor, tamSubcadena);//Usamos la funcion strncpy para extraer la subcadena
    palabra2[tamSubcadena] = '\0';//Colocamos el valor nulo al final de la nueva subcadena
}