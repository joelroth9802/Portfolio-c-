#include <iostream>
#include <string>
/*Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: Nombre, Edad, Promedio, pedir datos al usuario
 * para tres alumnos, comprobar cual de los tres tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/
using namespace std;
struct alumno{
    string nombre;
    int edad, promedio;
};

int main()
{
    alumno datos[3]; int maxProm = 0, maxEdad = 0; string maxNom;
    cout << "Ingresar los datos de los alumnos: " << endl;
    for (int i = 0;i < 3;i++){
        cout << "Alumno " << i+1 << ": " << endl;
        cout << "Nombre: ";
        getline(cin, datos[i].nombre);
        cout << "Edad: ";
        cin >> datos[i].edad;
        cout << "Promedio: ";
        cin >> datos[i].promedio;
        cin.ignore();
        if (datos[i].promedio > maxProm){
            maxProm = datos[i].promedio;
            maxNom = datos[i].nombre;
            maxEdad = datos[i].edad;
        }
        cout << endl;
    }
    cout << "Mejor Promedio" << endl;
    cout << "Nombre: " << maxNom << endl;
    cout << "Edad: " << maxEdad << endl;
    cout << "Promedio: " << maxProm << endl;
    return 0;
}
