#include <iostream>
#include <string>
/*Hacer una estructura llamada corredor, en la cuál se tendran los siguientes campos: Nombre, Edad, Sexo, Club, pedir datos al usuario
 * para un corredor, y asignarle una categoria de competición:
 * - Juvenil <= 18 años
 * - Señor <= 40 años
 * - Veterano > 40 años
 * Posteriormente imprimir todos los datos del corredor, incluida su categoria de competición*/
using namespace std;
struct corredor
{
    string nombre, sexo, club;
    int edad;
};
int main()
{
    corredor datos;
    string men;
    cout << "Ingrese los datos del corredor: " << endl;
    cout << "Nombre: ";
    getline(cin, datos.nombre);
    cout << "Edad: ";
    cin >> datos.edad;
    cin.ignore();
    cout << "Sexo: ";
    getline(cin, datos.sexo);
    cout << "Club: ";
    getline(cin, datos.club);
    cout << endl;
    if (datos.edad <= 18){
        men = "Juvenil";
    }
    else{
        if (datos.edad > 18 && datos.edad <= 40){
            men = "Senior";
        }
        else{
            men = "Veterano";
        }
    }
    cout << "Datos del Corredor" << endl;
    cout << "Nombre: " << datos.nombre << endl;
    cout << "Edad: " << datos.edad << endl;
    cout << "Sexo: " << datos.sexo << endl;
    cout << "Club: " << datos.club << endl;
    cout << "Categoria: " << men << endl;
    return 0;
}
