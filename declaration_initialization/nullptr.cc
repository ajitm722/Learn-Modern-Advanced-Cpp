#include <iostream>

using namespace std;

void func(int i) {
	cout << "func(int) called\n";
}

// void func(int *i) {
// 	cout << "func(int *) called\n";
// }
// void func(long i) {
// 	cout << "func(long) called\n";
// }
int main() {
	 func(NULL); 
	//works differently with different compilers
	
	// func(nullptr);
}