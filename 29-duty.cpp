#include <iostream>
#include <cmath>

using namespace std;
int main() {

	double x1,y1,radio1,x2,y2,radio2,c;

	cout << "introdizca las coordenadas y el radio de la primera circonferencia x1,y1,radio1: "<< endl;
	cin >> x1;
	cin >> y1;
	cin >> radio1;
	cout << "introdizca las coordenadas y el radio de la segunda circonferencia x2,y2,radio2: "<< endl;
	cin >> x2;
	cin >> y2;
	cin >> radio2;

	c=sqrt((pow((y2-y1),2))+(pow((x2-x1),2)));

	if (c==radio1+radio2) {
		cout << "las dos circonferencias se cortan en un punto" << endl;
	}
	else
		if (c>=radio1+radio2) {
			cout << "las dos circonferencias no se cortan" << endl;
		}
		else
			if (c>0 && c<radio1+radio2) {
				cout << "las dos circonferencias se cortan en dos puntos" << endl;
			}
			else
				if (c==0 && radio1==radio2) {
				cout << "las dos circonferencias son la misma" << endl;
				}
				else
					cout << "una circonferencia esta dentro de la otra" << endl;
	cout << c << endl;
	return 0;
}
