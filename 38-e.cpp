#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int precision=0,factorial=1;
	double e=0.0;

	cout << "introducir precision: " << endl;
	cin >> precision;

	for (int i=0;i<=precision;i++) {
		if (i != 0) {
			factorial *= i;
		}
		e += 1.0/factorial;

		cout << i << " ) valor aproximado de e: " << e << endl;
	}
	return 0;
}
