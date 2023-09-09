// Requires C++17 compiler
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec{1, 2, 3};                     // C++11 - declared as vector<int>
	vector vec2{1, 2, 3};                            // C++17 - deduced as vector<int>
	//CTAD constructor template argument deduction
	// compiler will automatically deduce the type from the initializers
	
	cout << "vec = ";
	for (auto it : vec2)
		cout << it << ", ";
}