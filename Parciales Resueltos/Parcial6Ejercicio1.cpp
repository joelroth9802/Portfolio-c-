#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void ordenamiento(int dni2[], string AyNGen[][2], int fechas[][2], int c);
void extraer_anio(int fechas[][2], int i);
int busqueda(int dni1[], int dni3[], int c, int i);
int main(int argc, char *argv[]) {
	ifstream docentes, datos;
	ofstream catedras;
	int dni1[10], dni2[10], fechas[10][2], mes, c = 0, c1 = 0, dni3[10], m = 0;
	string desc[10][3], AyNGen[10][2];
	cout << "Ingrese mes a considerar: ";
	cin >> mes;
	docentes.open("./docentes_catedras.txt");
	datos.open("./datos_personales.txt");
	if (docentes.fail() || datos.fail()){
		cout << "Error en la apertura del archivo de lectura";
	}
	else{
		docentes >> dni1[c];
		while (!docentes.eof()){
			docentes.ignore();
			getline(docentes, desc[c][0]);
			getline(docentes, desc[c][1]);
			getline(docentes, desc[c][2]);
			c++;
			docentes >> dni1[c];
		}
		datos >> dni2[c1];
		while (!datos.eof()){
			datos.ignore();
			getline(datos, AyNGen[c1][0]);
			datos >> fechas[c1][0];
			datos >> fechas[c1][1];
			datos.ignore();
			getline(datos, AyNGen[c1][1]);
			c1++;
			datos >> dni2[c1];
		}
	}
	docentes.close();
	datos.close();
	ordenamiento(dni2, AyNGen, fechas, c);
	for (int i = 0;i < c;i++){
		extraer_anio(fechas, i);
		int edad = 2023 - fechas[i][0];
		int ant = 2023 - fechas[i][1];
		if (ant >= 25){
			if (edad >= 52 && AyNGen[i][1] == "F"){
				cout << dni2 << AyNGen[i][0] << fechas[i][0] << endl;
				dni3[m] = dni2[i];
				m++;
			}
			else{
				if (edad >= 55 && AyNGen[i][1] == "M"){
					cout << dni2 << AyNGen[i][0] << fechas[i][0] << endl;
					dni3[m] = dni2[i];
					m++;
				}
			}
		}
	}
	catedras.open("./catedras_concurso.txt");
	if (catedras.fail()){
		cout << "Error en la apertura del archivo de escritura";
	}
	else{
		for (int i = 0;i < m;i++){
			int p = busqueda(dni1, dni3, c, i);
			catedras << desc[p][0] << " " << desc[p][1] << " " << desc[p][2] << endl;
		}
	}
	catedras.close();
	return 0;
}
void ordenamiento(int dni2[], string AyNGen[][2], int fechas[][2], int c){
	int aux, aux1;
	string aux2;
	for (int i = 0;i < c-1;i++){
		for (int j = i+1;j < c;j++){
			if (AyNGen[i][0] > AyNGen[j][0]){
				for (int k = 0;k < 2;k++){
					aux2 = AyNGen[i][k];
					AyNGen[i][k] = AyNGen[j][k];
					AyNGen[j][k] = aux2;
					
					aux1 = fechas[i][k];
					fechas[i][k] = fechas[j][k];
					fechas[j][k] = aux1;
				}
				aux = dni2[i];
				dni2[i] = dni2[j];
				dni2[j] = aux;
			}
		}
	}
}
void extraer_anio(int fechas[][2], int i){
	fechas[i][0] /= 10000;
	fechas[i][1] /= 10000;
}
int busqueda(int dni1[], int dni3[], int c, int i){
	int j = 0;
	for (j = 0;(j < c) && (dni3[j] != );j++)
		;
	return j;
}
