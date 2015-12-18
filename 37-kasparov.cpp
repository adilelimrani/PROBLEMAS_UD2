#include <iostream>
using namespace std;

int main () {

	int f1=0 , c1=0 , f2=0 , c2=0 , n=0 , m=0;

	cout << "cuales son las coordenadas de la ficha ?" << endl;
	cout << "introducir fila y columna de la ficha: "<< endl;
	cin >> f1 >> c1;
	cout << "donde quieres poner la ficha?" << endl;
	cout << "introducir fila y columna de la ficha: " << endl;
	cin >> f2 >> c2;

	if (f1<0 || c1<0 || f1>8 || c1>8) {
		cout << "la ficha esta fuera del tablero." <<endl;
	}
	else if (f2<0 || c2<0 || f2>8 || c2>8) {
		cout << "si mueves la ficha, por favor que sea dentro del tablero."<<endl;
	}
	else if  (( f1==f2 && c1!=c2) || ( f1!=f2 && c1==c2)) {
		cout << "el movimiento es valido para la torre y la reina."<< endl;
	}
	else if (( f2-f1 == c2-c1 ) || ( f2-f1 == c1-c2 )) {
		cout << "el movimiento es valido solo para la reina." << endl;
	}
	else
		cout << "el movimiento no es valido ni para reina ni para torre." << endl;
	return 0;
}
