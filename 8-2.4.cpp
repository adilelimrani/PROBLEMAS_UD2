#include <iostream>
#include <cmath>
using namespace std;

int main() {


	double radio=0.0,longitud=0.0,area=0.0,Pi=3.14;


	cout << "Introduzca el radio del circulo: ";
	cin >> radio;

	longitud = Pi * (pow(radio,2));
	area= 2 * Pi * radio;

	if (radio>=0) {

		cout << "longitud = " << longitud << endl;
		cout << "area= " << area << endl;
	}
	else {
		cout << "desde cuando el radio de una circonferencia es negativo?" << endl;
	}
	return 0;
}
