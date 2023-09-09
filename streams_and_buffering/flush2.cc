#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream ofile("log2.txt");
	
	if (!ofile) {
		cout << "Could not open file\n";
		return -1;
	}
	
	for (int i = 0; i < 1'000'000; ++i) {
		cout << i << endl;
		ofile << i << endl;
		if (i == 30'000)
			throw std::exception();
	}
	
	ofile.close();
}