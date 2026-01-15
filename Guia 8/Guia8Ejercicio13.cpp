#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
/*Se desea a partir de los archivos NATACION.TXT, CARRERA.TXT y BICICLETA.TXT obtener el
código del participante ganador del triatlón (participante que realizó menor tiempo).*/
int participante_ganador(int nat[][2], int carr[][2], int bic[][2]);//Prototipo
int main(int argc, char *argv[]) {
	ifstream natacion, carrera, bicicleta;//Archivos para lectura
	int nat[5][2], carr[5][2], bic[5][2];//Arreglos
	//Se abren los archivos
	natacion.open("./NATACION.txt");
	carrera.open("./CARRERA.txt");
	bicicleta.open("./BICICLETA.txt");
	if (natacion.fail() || carrera.fail() || bicicleta.fail()){
		cout << "Error en la apertura del archivo";
	}
	else{
		int i = 0;
		//Lectura de los archivos
		natacion >> nat[i][0];
		carrera >> carr[i][0];
		bicicleta >> bic[i][0];
		while (!natacion.eof() && !carrera.eof() && !bicicleta.eof()){
			natacion >> nat[i][1];
			carrera >> carr[i][1];
			bicicleta >> bic[i][1];
			i++;
			natacion >> nat[i][0];
			carrera >> carr[i][0];
			bicicleta >> bic[i][0];
		}
	}
	//Se cierran los archivos
	natacion.close();
	carrera.close();
	bicicleta.close();
	//Informe y llamada de la función
	cout << "Código del participante ganador del triatlón: " << participante_ganador(nat, carr, bic);
	return 0;
}
//Función
int participante_ganador(int nat[][2], int carr[][2], int bic[][2]){
	int minutos[3] = {}, min = INT_MAX, codigos[3], minCod;
	for (int i = 0;i < 3;i++){
		minutos[i] += nat[i][1] + carr[i][1] + bic[i][1];
		codigos[i] = nat[i][0];
		if (minutos[i] < min){
			min = minutos[i];
			minCod = codigos[i];
		}
	}
	return minCod;
}

