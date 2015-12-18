#include <iostream>
#include <cmath>

using namespace std;
int main() {

	int numero =0 , cubo =0 , impar_inicial=0;

	while (numero >0 ) {

		cout << "introduzca un numero: " << endl;
		cin >> numero;

		impar_inicial=pow(numero,2)-numero+1; //formula del primer impar por el que empieza
		cubo = impar_inicial;
		cout << impar_inicial;

		for (int i=1 ;i<=numero-1;i++) {
			impar_inicial= impar_inicial +2;
			cubo = cubo + impar_inicial;
			cout << " + " << impar_inicial;

		}
		cout << " = "<< cubo <<endl;
	}
	return 0;
}
