#include <iostream>

using namespace std;

// Memory from the heap will remain allocated to the program until it is released 
	// If the programmer does not explicitly release it , the memory will remain allocated until program terminates
	// Failing to release memory when it is no longer needed causes a memory leak
	// the variable will still exist but represents memory that is no longer accessible by the program 
	// It is called a dangling pointer
	// Putting delete followed by a pointer will deallocate the memory

void badfunc() {
    int *p4 = new int{42};                    // Allocate memory in function
    //....
    return;                                   // Return without releasing memory
}                                             // Memory leak! - need to add delete p4

int main() {
	int i{1};                                 // i is a stack variable
	int *p1 = &i;                             // p1 is a pointer to int. Its value is the address of i
	cout << *p1 << endl;                      // Displays the value of i
	cout << "*p1 = " << *p1 << endl;          // Displays the value of i
	
	int *p2 = new int;                        // p2 points to memory allocated from the heap
	int *p3 = new int{36};                    // p3 points to int with initial value 36 (C++11)
	//int *p3 = new int(36);                    // older versions of C++
	badfunc();
}