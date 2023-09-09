#include <iostream>

using namespace std;

int main() {
	cout << "Allocating memory for array\n";
	int *pa = new int[20];
							// pa pointer to the start of the memory
	cout << "Populating array\n";
	for (int i = 0; i < 20; ++i) {
		pa[i] = i;
	}

	cout << "Array elements:\n";
	for (int i = 0; i < 22; ++i) { //the extra elements will have garbage value or 0
		cout << pa[i] << ", ";
	}

	cout << endl;

	cout << "Releasing array's memory\n";
	delete[] pa;

	cout << "Finished!\n";
}