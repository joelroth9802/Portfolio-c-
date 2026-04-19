#include <iostream>
#include <string>
/*Se ingresan los nombres y edades de los 457 miembros de una asociación
cooperadora. Determinar el nombre y la edad del mayor de los integrantes.
Validar la entrada de los datos correspondientes a las edades, los cuales deben estar
dentro el rango 12..90, con una función llamada validar_edad() en la cual, al
verificarse una edad fuera del rango, se debe indicar un mensaje de error y permitir el
reingreso del dato.*/
using namespace std;
void pedirDatos(string n1[], int e2[]);
void validar_edad(int p1, string n1[], int e2[]);
void mayor_integrante(string nom1[], int edad2[], string &maxN, int &maxE);
int main()
{
    string nombres[5], maxnom;
    int edades[5], maxedad = 0;
    pedirDatos(nombres,edades);
    cout << endl;
    mayor_integrante(nombres, edades, maxnom, maxedad);
    cout << "Miembro con mayor edad: " << maxnom << ", edad: " << maxedad << endl;
    return 0;
}
void pedirDatos(string n1[], int e2[]){
    cout << "Ingrese los datos de los miembros de la asociacion: " << endl;
    for (int i = 0;i < 5;i++){
        cout << "Miembro " << i+1 << ": " << endl;
        cout << "Nombre: ";
        getline(cin, n1[i]);
        cout << "Edad: ";
        cin >> e2[i];
        validar_edad(i, n1, e2);
        cout << endl;
        cin.ignore();
    }
}
void validar_edad(int p1, string n1[], int e2[]){
    if (e2[p1] < 12 || e2[p1] > 90){
        cout << endl;
        cout << "Error, la edad permitida es entre 12 y 90 anos." << endl;
        cout << "Por favor, vuelva a ingresar los datos." << endl;
        cout << endl;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, n1[p1]);
        cout << "Edad: ";
        cin >> e2[p1];
    }
}
void mayor_integrante(string nom1[], int edad2[], string &maxN, int &maxE){
    for (int i = 0;i < 5;i++){
        if (edad2[i] > maxE){
            maxE = edad2[i];
            maxN = nom1[i];
        }
    }
}
