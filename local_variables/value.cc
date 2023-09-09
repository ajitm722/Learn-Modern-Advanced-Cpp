#include <iostream>

using namespace std;

// int func(int y) {                // y will be a copy of the caller's variable x
// 	cout << "Address of y is " << &y << endl;
// 	return ++y;                    // Copy y into the function's return value
// }
int func(const int& y) {                // y will be a reference to the caller's variable x
	cout << "Address of y is " << &y << endl;
	return y;                    // Copy y into the function's return value
}
int main() {
	int x = 2;
	cout << "Address of x is " << &x << endl;
	int z = func(x);              // z will be a copy of func's return value
	cout << "Address of z is " << &z << endl;
	cout << "After calling func(), x = " << x << endl;
	cout << "After calling func(), z = " << z << endl;
}
// For read only access to class objects, passing by const reference is usually more efficient than passing by value
// as we dont have to create an extra copy the arguments passed
