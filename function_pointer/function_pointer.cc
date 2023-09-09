#include <iostream>

using namespace std;

// A functions executable code is stored in memory.
// We can get a pointer whose address is start of this code
// func_ptr is a pointer to the function
void func(int x, int y) {
	cout << x << " + " << y << " = " << x + y << endl;
}

int main() {
	void (*func_ptr)(int, int) = &func;
	//auto func_ptr = func;                 // The & is optional
	
	(*func_ptr)(1, 2);
	// func_ptr(1, 2);     // The * is optional
}
