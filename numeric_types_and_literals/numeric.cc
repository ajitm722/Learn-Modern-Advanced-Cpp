#include <iostream>

using namespace std;

int main() {
	//seperator can only go anywhere inside the number, not at the start or end.
	const int one_million = 1'000'000;
	const int one_lakh = 1'00'000;
	double pi = 3.141'593; 

	cout << "One million: " << one_million << endl;
	cout << "One lakh: " << one_lakh << endl;
	cout << "pi: " << pi << endl;
}