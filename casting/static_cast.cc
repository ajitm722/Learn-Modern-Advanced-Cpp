#include <iostream>

using namespace std;

int main() {
	int c = 'A';
	cout << c << endl;
	cout << static_cast<char>(c) << endl;
}

//can also be used to convert a pointer to base class object to pointer to derived