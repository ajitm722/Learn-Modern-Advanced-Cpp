#include <iostream>
#include <vector>

using namespace std;

void print(int *arr, size_t size) {
	for (int i = 0; i < size; ++i)
		cout << arr[i] << ", ";
}

int main() {
	std::vector<int> numbers {1, 2, 3, 4, 5};
	//used to convert numbers object for passing into c-like apis
	print(numbers.data(), numbers.size());
}
