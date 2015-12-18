#include <iostream>
using namespace std;
int main () {

	int finicial=0,ffinal=0,cinicial=0,cfinal=0;

	cout << "introducir posicion inicial, fila y columna: "<< endl;
	cin >> finicial >> cinicial;
	cout << "introducir posicion final, fila y columna: " << endl;
	cin >> ffinal >> cfinal;

	if (finicial<=0 || cinicial<=0) {
		cout << "la ficha esta fuera del tablera" << endl;
	}
	if (ffinal>8 || cfinal>8) {
		cout << "estas borracho? pon la ficha en el tablero" << endl;
	}
	if (finicial=ffinal && cinicial != cfinal) || (finicial !=ffinal && cinicial=cfinal) {
		cout << "el movimiento sirve para la reina y para la torre."<< endl;
	}
	for (int i=1;i<=8;i++) {
		if (ffinal==i && cfinal==i) {
			cout << "el movimiento es valido para la reina" << endl;
		}
		else
			cout << "la reina no se mueve asi. aprende a jugar"<<endl;
	}
	return 0;
}
