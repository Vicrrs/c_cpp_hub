#include <iostream>
using namespace std;

int main() {
	int opcao;
	double a, b;

	cout << "Digite dois numeros: ";
	cin >> a >> b;

	cout << endl;

	cout << "1 - Soma" << endl;
	cout << "2 - Subtracao" << endl;
	cout << "3 - Multiplicacao" << endl;
	cout << "4 - Divisao" << endl;
	cout << "Escolha uma opcao: ";
	cin >> opcao;

	switch (opcao) {
		case 1:
			cout << "Resultado = " << a + b << endl;
			break;

		case 2:
			cout << "Resultado = " << a - b << endl;
			break;

		case 3:
			cout << "Resultado = " << a * b << endl;
			break;

		case 4:
			if (b != 0) {
				cout << "Resultado = " << a / b << endl;
			} else {
				cout << "Erro: divisao por zero." << endl;
			}
			break;
		default:
			cout << "Opcao invalida." << endl;
	}
	return 0;
}

