#include <iostream>

using namespace std;
int main() {

	double x1,x2,y1,y2,x_punto,y_punto;

	cout << "REGLAS DEL PROGRAMA:"<< endl;
	cout << "1- x2 tiene que ser mayor que x1"<< endl;
	cout << "2- y1 tiene que ser mayor que y2."<< endl;

	cout << "introducir coordenadas primer puntos del rectangulo, x1 e y1: " << endl;
	cin >> x1 >> y1;
	cout << "introducir coordenadas primer puntos del rectangulo, x2 e y2: " << endl;
	cin >> x2 >> y2;
	cout << "introducir coordenadas del punto, x e y: " << endl;
	cin >> x_punto >> y_punto;

	/*Primero vemos si el balon esta dentro del rectangulo y toca la porteria*/
	if (x1<=x_punto && x_punto<=x2 && y1>=y_punto && y_punto>=y2) {

		/*Ahora vemos si toca uno de los palos de la porteria*/
		if ((x_punto==x1 ||x_punto==x2) && y_punto>=y2 && y_punto<y1) {
			cout << "le has dado al palo." << endl;
		}

		/*Ahora verificamos si el balón ha tocado el larguero.*/
		else if (y_punto==y1 && x_punto>x1 && x_punto<x2) {
			cout << "Le has dado al larguero." << endl;
		}
		/*le habra dado a la escuadra? vamos a verificarlo*/
		else if ((x_punto==x2 && y_punto==y1) || (x_punto==x1 && y_punto==y1)) {
			cout << "le has dado a la escuadra." << endl;
		}
		else
			cout << "GOOOOOOOOOOL!!!!" << endl;
	}
	else
		cout << "QUE MALA PUNTERÍA." << endl;
	return 0;
}
