#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> vec {3, 1, 4, 1, 5, 9};

	// Pass a lambda expression - basically anonymous local functions similar to closures in other languages
	// when a compiler encounters a lambda expression , it will generate code that defines a functor.
	// This functor will have a unique name chosen by the compiler
	// The function call operator of the functor will have the same body as the lambda expression
	//It will have the same return type as the lambda expression
	// To define a lambda expression, we put [] for the function name
	// compiler is automatically able to deduce the return type of lambda expression
	auto odd_it = find_if(cbegin(vec), cend(vec),
							[](int n) { return (n % 2 == 1); }
	);

	// odd_it will be an iterator to the first odd element (if there is one)
	if (odd_it != cend(vec))
		cout << "First odd element is: " << *odd_it << endl;	

}