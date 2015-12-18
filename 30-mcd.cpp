#include <iostream>
using namespace std;
int main() {

	int numero=0,contador=0;
	bool cuadrado_perfecto = false; 

	cout << "introducir el numero que crees que es cuadrado perfecto: "<<endl;
	cin >> numero;

	for (int i=1 ; i<=numero ; i++) {
		if (i*i==numero) {
			cuadrado_perfecto = true;
		}
	}

	if (cuadrado_perfecto == true) {
		cout << " ES CUADRADO PERFECTO " << endl;
		cout << i << " X " << i << " = " << numero << endl;
	}
	else 
		cout << "NO ES CUADRADO PERFECTO " << endl;

	return 0;
}
