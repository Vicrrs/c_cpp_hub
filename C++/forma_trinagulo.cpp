#include <iostream>
using namespace std;

int main() {
	double a, b, c;

	cout << "Digite os tres lados do triangulo: ";
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "Esses lados podem formar um triangulo." << endl;
	} else {
		cout << "Nao forma um triangulo." << endl;
	}
	
	return 0;

}

