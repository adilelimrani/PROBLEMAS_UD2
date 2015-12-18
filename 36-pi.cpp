#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int n=0;
	long double sumatoria=0.0,aproximacion_pi=0.0;

	cout << "introduzca n de la sumatoria: " << endl;
	cin >> n;

	for (int i=0;i<=n;i++) {

		sumatoria += pow (-1.0,i) / pow(((2.0*i)+1.0),3);
		aproximacion_pi = cbrt(32*sumatoria);

		cout << i << ") "<< "aproximacion: "<< setprecision(n) << aproximacion_pi<<endl;
	}
	return 0;
}
