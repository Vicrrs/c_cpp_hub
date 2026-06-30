// PI = 3.14
// PI * radius * radius

#include <iostream>

using namespace std;

int main() {
	const double PI = 3.14;
	cout << "Informe o valor do raio da circunferencia!"<< endl;
	double raio; 
	cin >> raio;

	cout << "A área da circunferência é " << PI * raio * raio << "\n";
}

