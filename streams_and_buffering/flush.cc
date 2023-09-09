#include <iostream>
#include <fstream>

using namespace std;
// c++ streams use buffering to minimize calls to the operating system 
// During write operations data is temporarily held in a memory buffer
// The size of this buffer is chosen to match the maximum amount of data
// that the operating system will accept in a single call
// This process is known as flushing the buffer
// cout is always flushed before the programs reads from cin or by endl
// automatically flushed when the buffer is full 
// There is no direct way to flush input streams
// std::flush allows us to control when the stream's buffer is flushed
// This significantly affects performance
// IT should only be used when data really needs to be updated
// Example in log files
int main() {
	ofstream ofile{"log.txt"};
	
	if (!ofile) {
		cout << "Could not open file\n";
		return -1;
	}
	
	for (int i = 0; i < 1'000'000; ++i) {
		cout << i << "\n" ;  // /n + flush = endl
		ofile << i << "\n" ; // The file doesnt reach the below value
		
		if (i == 30'000)
			throw std::exception();
	}
	
	ofile.close();
}