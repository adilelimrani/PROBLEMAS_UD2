#include <iostream>
using namespace std;
int main() {

	cout << "las posibles combinaciones de las fichas de domino: "<<endl;

	for (int i=0 ; i<=6 ; i++) {
		for (int j=0 ; j<=6 ; j++) {
			if (j>=i)
				cout << i << " : " << j << endl;
		}
	}
	return 0;
}
