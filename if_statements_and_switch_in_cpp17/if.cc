// Requires C++17 compiler
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec = {1, 2, 3};
	
	// Older C++
	auto iter = begin(vec);
	if (iter != end(vec)) {
	   // Safe to use the iterator here
	   cout << "First element of vec is: " << *iter << endl;
	}
	//iterator iter will still be in existence
	cout << "First element of vec is: " << *iter << endl;
	//It should stay local to the scope

	// C++17
	if (auto iter2 = begin(vec); iter2 != end(vec)) {
		// Safe to use the iter2ator here
		cout << "First element of vec is: " << *iter2 << endl;
	}
	// cout << "First element of vec is: " << *iter2 << endl; throws error
}
