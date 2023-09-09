#include <iostream>

using namespace std;

int main() {
	const int& x{6}; //const and reference is ignored , only underlying instance type is considered
	auto y = x;
	++y;
		// we could add it ourselves
	const auto &z = x;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}