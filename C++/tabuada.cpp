#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Digite um numero para ver a tabuada: ";
	cin >> n;

	for (int i = 1; i <= 20; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}

	return 0;
	
}

