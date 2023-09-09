#include <iostream>
#include <vector>

using namespace std;
//Functors are classes so they could contain member functions and data members
// In general, they should only be used to wrap functions
//They can however have data members to store values which need to be kept between function calls(maintaining state).
//CHECK functor3 example
class evenp {
public:
	bool operator() (int n) {
		return (n % 2 == 0);
	}
};

void do_it(const vector<int>& vec, evenp is_even) {
	for (auto v: vec)
		if (is_even(v))
			cout << v << " is even\n";
}

int main() {
	evenp is_even;                               // Create a functor object

	vector<int> numbers{1, 4, 7, 11, 12, 23, 36}; // Vector of numbers

	cout << "Vector: ";
	for (auto number : numbers)
		cout << number << ", ";
	cout << endl;

	do_it(numbers, is_even);                 // Pass functor as argument to a function call
}