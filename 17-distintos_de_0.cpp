#include <iostream>
using namespace std;
int main() {

	double primero,segundo;

	do {
		cout << "introduce dos numeros distintos de 0: " << endl;
		cin >> primero >> segundo;
		if (primero == 0) || segundo == 0) {
			cout << "eres tonto? el primer numero es 0. Vuelve a intentarlo" << endl; 
		}
	} while ((primero==0)||(segundo==0));
	cout << "enhorabuena, sabes escribir dos numero distintos de cero." << endl;
}
