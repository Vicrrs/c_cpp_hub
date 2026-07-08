#include <iostream>
using namespace std;

int main() {
	int opcao;
	double base, altura, area;

	do {
		cout << endl;
		cout << "1 - Calcular area do retangulo" << endl;
		cout << "0 - Sair" << endl;
		cout << "Escolha: " << endl;
		cin >> opcao;

		if (opcao == 1) {
			cout << "Digite a base: ";
			cin >> base;

			cout << "Digite a altura: ";
			cin >> altura;

			area = base * altura;

			cout << "Area = " << area << endl;
		}
	} while (opcao != 0);

	cout << "Programa encerrado." << endl;

	return 0;
}

