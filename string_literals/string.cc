#include <iostream>
#include <string>

using namespace std;

int main() {
	//array of const char terminated by a null character
	const char *cca = "Hello, world!";
	cout << "cca: " << cca << endl;
	//suffix returns a standard string object 
	string str = "Hello, world!"s;
	cout << "str: " << cca << endl;
	
	cout << "std::string literal: " << "Hello"s  + ", world!"s << endl;
}