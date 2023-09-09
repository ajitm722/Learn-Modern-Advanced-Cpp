#include <fstream>
#include <iostream>

using namespace std;

int main() {
	// By default files are opened in text mode
	// output files are opened in truncate mode
	// Any data that was previously written will be overwritten
	// To open in append mode we pass the below argument

	ofstream ofile;
	ofile.open("important.txt", fstream::app);
	
	if (!ofile) {
		cout << "Could not open file\n";
		return -1;
	}
	
	ofile << "some more data";
	ofile.close();
}