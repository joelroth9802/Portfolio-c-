#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/*Se dispone de los 12 archivos mensuales de los proveedores de la empresa textil. Informar el
total anual que proveyó por cada tipo de lana cada uno de los criaderos.
Tip: Use concatenación de string para formar el nombre del archivo.*/
int main(int argc, char *argv[]) {
	int criaderos[10][4], acumLanas[5][3] = {};
	ifstream lanas;//Se declara variable para archivo de lectura
	for (int i = 0;i < 12;i++){
		string num;
		int c = 0;
		//Se convierten los números del mes a string
		switch (i){
		case 0: num = "01";
		break;
		case 1: num = "02";
		break;
		case 2: num = "03";
		break;
		case 3: num = "04";
		break;
		case 4: num = "05";
		break;
		case 5: num = "06";
		break;
		case 6: num = "07";
		break;
		case 7: num = "08";
		break;
		case 8: num = "09";
		break;
		case 9: num = "10";
		break;
		case 10: num = "11";
		break;
		case 11: num = "12";
		break;
		}
		//Se abre el archivo mediante la concatenación de cadenas
		lanas.open("./Criaderos/PROVEEDORES_" + num + ".txt");
		if (lanas.fail()){
			cout << "Error en la apertura del archivo" << endl;
		}
		else{
			//Lectura de datos
			lanas >> criaderos[c][0];
			while (!lanas.eof()){
				lanas.ignore(1, '|');
				lanas >> criaderos[c][1];
				lanas.ignore(1, '|');
				lanas >> criaderos[c][2];
				lanas.ignore(1, '|');
				lanas >> criaderos[c][3];
				c++;
				lanas >> criaderos[c][0];
			}
		}
		lanas.close();//Se cierra el archivo
		for (int j = 0;j < 5;j++){
			//Acumuladores de lanas
			acumLanas[j][0] += criaderos[j][1];
			acumLanas[j][1] += criaderos[j][2];
			acumLanas[j][2] += criaderos[j][3];
		}
	}
	//Informe
	cout << left << setw(10) << "Criadero" << right << setw(15) << "Merino" << right << setw(20) << "Texel" << right << setw(20) << "Dorset" << endl;
	for (int i = 0;i < 5;i++){
		cout << setw(4) << i+1 << right << setw(20) << acumLanas[i][0] << right << setw(21) << acumLanas[i][1] << right << setw(19) << acumLanas[i][2] << endl;
	}
	return 0;
}

