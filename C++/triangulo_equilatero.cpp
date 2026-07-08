#include <iostream>
using namespace std;

int main() {
	double a, b, c;

	cout << "Digite os 3 lados: ";
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "Forma um triangulo." << endl;

		if (a == b && b == c) {
			cout << "O triangulo eh equilatero." << endl;
		}
	}

	return 0;
}

