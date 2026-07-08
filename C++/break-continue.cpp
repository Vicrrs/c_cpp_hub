#include <iostream>
using namespace std;

int main() {
	int n;
	int soma = 0;

	while (true) {
		cout << "Digite um numero positivo para somar, negatico para ignorar ou zero para sair: ";
		cin >> n;

		if (n == 0) {
			break;
		}

		if (n < 0) {
			cout << "Numero negativo ignorado." << endl;
			continue;
		}

		soma += n;
		cout << "Soma atual = " << soma << endl;
	}

	cout << "Soma final = " << soma << endl;

	return 0;
}

