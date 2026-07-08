#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, delta;

	cout << "Digite a, b e c da eq ax² + bx + c=0: ";
	cin >> a >> b >> c;

	delta = b * b - 4 * a * c;

	cout << "DELTA = " << delta << endl;

	if (delta > 0) {
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);

		cout << "Duas raizes reais: " << endl;

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	} else if (delta == 0) {
		double x = -b / (2 * a);

		cout << "Uma raiz real: " << endl;
		cout << "X = " << x << endl;
	} else {
		cout << "Não existem raizes reais." << endl;
	}

	return 0;
}

