#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	int ant, ult, cont;
	cont = 0; ant = 0;
	srand(time(NULL));
	while (cont < 10)
	{
		ult = (rand() % 100*(cont + 1)) + 1;
		if (ult > ant)
		{
			ant = ult;
			cout << ant << endl;
			cont++;
		}
	}
	return 0;
}

