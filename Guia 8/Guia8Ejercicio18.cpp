#include <iostream>
#include <fstream>
using namespace std;
/*Una empresa textil, dedicada al hilado de lana ovina, recibe su materia prima de distintos
criaderos de ovejas distribuidos en el país.
Mensualmente, se ingresan sin orden alguno, los siguientes datos de los N criaderos de oveja: Nro
de criadero (de 1 a N), tipo de oveja (1: Merino, 2: Texel, 3: Dorset), cantidad de kilos lana. Se sabe
que puede venir más de una entrada de lana, para un mismo criadero y un mismo tipo de oveja.
También puede ser que algún criadero no haya enviado alguno de los tipos de lana. El fin de datos
está dado por Nro de criadero = 999.
El valor N y el número de mes, se ingresan como primeros datos.
Generar un archivo “PROVEEDORES_XX.TXT” con la información Nro Criadero | Kilos Merino | Kilos
Texel | Kilos Dorset. Donde XX representa el número de mes*/
int main(int argc, char *argv[]) {
	ofstream textil;//Archivo para escritura
	int nroCriadero, tOveja, cantLana, ovejas[50][3] = {}, nCriaderos, mes;//Variables
	//Carga de datos
	cout << "Cantidad de criaderos de ovejas: ";
	cin >> nCriaderos;
	cout << "Nro de mes: ";
	cin >> mes;
	cout << endl;
	cout << "Datos de los criaderos de ovejas" << endl;
	cout << "Ingrese 999 para finalizar con la carga de datos" << endl;
	cout << "Nro de criadero: ";
	cin >> nroCriadero;
	while (nroCriadero != 999){
		//Si el nro de criadero esta entre 0 y la cantidad de criaderos inclusive, se procede con la carga de datos
		if (nroCriadero > 0 && nroCriadero <= nCriaderos){
			nroCriadero--;
			cout << "Tipos de ovejas (1: Merino - 2: Texel - 3: Dorset): ";
			cin >> tOveja;
			cout << "Cantidad de kilos de lana: ";
			cin >> cantLana;
			//Depende el nro de criadero y el tipo de lana, se acumulan en los arreglos
			switch (tOveja){
			case 1: ovejas[nroCriadero][0] += cantLana;
			break;
			case 2: ovejas[nroCriadero][1] += cantLana;
			break;
			case 3: ovejas[nroCriadero][2] += cantLana;
			break;
			}
		}
		else{
			cout << "El nro de criadero ingresado no se encuentra en la base de datos" << endl;
		}
		cout << endl;
		cout << "Nro de criadero: ";
		cin >> nroCriadero;
	}
	//Depende el mes ingresado, se crea el archivo correspondiente
	switch (mes){
	case 1: textil.open("./Criaderos/PROVEEDORES_01.txt");
	break;
	case 2: textil.open("./Criaderos/PROVEEDORES_02.txt");
	break;
	case 3: textil.open("./Criaderos/PROVEEDORES_03.txt");
	break;
	case 4: textil.open("./Criaderos/PROVEEDORES_04.txt");
	break;
	case 5: textil.open("./Criaderos/PROVEEDORES_05.txt");
	break;
	case 6: textil.open("./Criaderos/PROVEEDORES_06.txt");
	break;
	case 7: textil.open("./Criaderos/PROVEEDORES_07.txt");
	break;
	case 8: textil.open("./Criaderos/PROVEEDORES_08.txt");
	break;
	case 9: textil.open("./Criaderos/PROVEEDORES_09.txt");
	break;
	case 10: textil.open("./Criaderos/PROVEEDORES_10.txt");
	break;
	case 11: textil.open("./Criaderos/PROVEEDORES_11.txt");
	break;
	case 12: textil.open("./Criaderos/PROVEEDORES_12.txt");
	break;
	}
	if (textil.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		//Escritura de los datos en el archivo correspondiente
		for (int i = 0;i < nCriaderos;i++){
			textil << i+1 << " | " << ovejas[i][0] << " | " << ovejas[i][1] << " | " << ovejas[i][2] << endl;
		}
	}
	textil.close();//Se cierra el archivo
	return 0;
}

