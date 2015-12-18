#include <iostream>
using namespace std;

int main() {
	int numero,a,b;

	cout << "Introducir número: ";
	cin >> numero;
	cout << "Introducir intervalo: ";
	cin >> a;
	cin >> b;

	cout << "Los multiplos de " << numero << " son: " <<endl;
	for (int i = a; i <= b; i++) {
		if (i % numero == 0)
			cout << i << endl;
	}

	return 0;
}
