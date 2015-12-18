#include <iostream>

using namespace std;

int main() {

	double nota;

	cout << "introduzca la nota: ";
	cin >> nota;

	if (nota>=9) {
		cout << "Sobresaliente" << endl;
	}
	else
		if (nota>=7) {
			cout << "Notable" << endl;
		}
		else
			if (nota>=5) {
				cout << "Aprobado" << endl;
			}
			else
				cout << "estas suspenso/a" << endl;
	return 0;
}
