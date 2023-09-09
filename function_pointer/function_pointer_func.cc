#include <iostream>
using namespace std;
// A function pointer is a callable object
//Behaves like a variable and can be called like a function
// We can pass a function pointer as argument to another function'
//We can return a function pointer from a call to another function

void func(int x, int y) {
	cout << x << " + " << y << " = " << x + y << endl;
}

using pfunc = void (*)(int, int);       // The * is not optional!

// typedef void (*)(int, int) pfunc;      // Older C++
// in C++11 we can now use using to write type alias, like typedefs:

// typedef int MyInt;
// Is, from what I understand, equivalent to:

// using MyInt = int;
// And that new syntax emerged from the effort to have a way to express "template typedef":

// template< class T > using MyType = AnotherType< T, MyAllocatorType >;

void some_func(int x, int y, pfunc func_ptr) {
    (*func_ptr)(x, y);          // We can call the function by dereferencing the pointer
    //func_ptr(x, y);                       // The * is optional
}

pfunc other_func() {
	return &func;
}

int main() {
	auto func_ptr = other_func();

	some_func(1, 2, func_ptr);
}
