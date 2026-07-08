#include <iostream>
using namespace std;

int main() {
	int n, i = 1, soma = 0;

	cout << "Digite um numero inteiro positivo: ";
	cin >> n;

	while (i <= n) {
		soma += i;
		i++;
	}

	cout << "Soma de 1 ate " << n << " = " << soma << endl;

	return 0;
}

