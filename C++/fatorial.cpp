#include <iostream>
using namespace std;

int main() {
	int n;
	long long fatorial = 1;

	cout << "Digite um numero inteiro positivo: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		fatorial *= i;
	}

	cout << n << " ! = " << fatorial << endl;
	
	return 0;
}

