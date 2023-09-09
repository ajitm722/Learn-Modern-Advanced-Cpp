#include <iostream>

using namespace std;

void func(int& y) {          // y will be a reference to the caller's variable x
    cout << "Address of y is " << &y << endl;
	y = 1; //pass by reference behaves like a pointer which is automatically dereferenced when used
}

int main() {
	int x = 2;
	cout << "Address of x is " << &x << endl;
	func(x);                          // x will now have the value 1
	cout << "After calling func(), x = " << x << endl;
}

