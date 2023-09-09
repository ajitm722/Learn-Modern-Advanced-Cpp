#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1{"Hello"};
	string s2{"Goodbye"};
	
	cout << "s1: " << s1 << ", s2: " << s2 << endl <<endl;
	
	// Member swap function
	cout << "Calling member function swap()\n";
	s1.swap(s2);
	cout << "s1: " << s1 << ", s2: " << s2 << endl <<endl;
	
	// Non-member swap function
	// This global function has overloads for all the built in and library types
	cout << "Calling non-member function swap()\n";
	swap(s1, s2);
	cout << "s1: " << s1 << ", s2: " << s2 << endl << endl;
}
