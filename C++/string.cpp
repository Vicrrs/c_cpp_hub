#include <iostream>
using namespace std;

int main() {
	string title = "Mr. ";
	string name("Jhon");
	string end(10, '!');
	
	cout << " funcao size: \n" << endl;
	cout << name.size() << endl;
	cout << "funcao back \n" << endl;
	cout << name.back() << endl;
	cout << "Acessando string \n" << endl;
	cout << name[0] << endl;
	cout << name[1] << endl;
	cout << name[2] << endl;
	cout << name[3] << endl;

	// string concatenation
	cout << title + name << endl;

	cout << end << end;

	return 0;
}
