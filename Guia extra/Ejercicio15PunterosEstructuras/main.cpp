#include <iostream>
#include <string>
/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: Nombre, edad, promedio,
 *pedir datos al usuario para tres alumnos, comprobar cual de los tres tiene el mejor promedio y posteriormente
 *imprimir los datos del alumno. NOTA: Usar punteros a estructura.*/
using namespace std;
struct alumno{
    string nombre;
    int edad, promedio;
};
void pedirNotas(alumno *&punt_est);
void maxProm(alumno *punt_est);
int main()
{
    alumno est[3];
    alumno *punt_est = est;
    pedirNotas(punt_est);
    maxProm(punt_est);

    return 0;
}
void pedirNotas(alumno *&punt_est){
    cout << "Datos de los alumnos: " << endl;
    for (int i = 0;i < 3;i++){
        cout << "Alumno " << i+1 << ": " << endl;
        cout << "Nombre: ";
        getline(cin, (punt_est+i)->nombre);
        cout << "Edad: ";
        cin >> (punt_est+i)->edad;
        cout << "Promedio: ";
        cin >> (punt_est+i)->promedio;
        cout << endl;
        cin.ignore();
    }
}
void maxProm(alumno *punt_est){
    int max = 0, pos = 0;
    for (int i = 0;i < 3;i++){
        if ((punt_est+i)->promedio > max){
            max = (punt_est+i)->promedio;
            pos = i;
        }
    }
    cout << "Alumno con mejor promedio: " << (punt_est+pos)->nombre << endl;
    cout << "Edad: " << (punt_est+pos)->edad << endl;
    cout << "Promedio: " << (punt_est+pos)->promedio << endl;
}
