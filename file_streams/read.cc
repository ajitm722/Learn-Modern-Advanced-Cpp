#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//A file is just a sequence of bytes identified by a filename
// WE dont need to know id the data is stored or how its stored
// fstream do not understand file formats
// fstream calls a function in the operating system api
// It always accesses files sequentially
// can use it to open read write and close.
// When a c++ program terminats the runtime will make close all open files
// however it is good practice to close files as soon as we have finished using them as other progams might want to use them.
// As data passes between the program and the file  it may be temporarily stored in a memory buffer
int main() {
ifstream ifile{"text.txt"};       // Define ifile as an ifstream variable bound to text.txt
									// file stream for reading this represents a communication channel 
									// which is issued to recieve data from the file
	
	if (ifile) {
		string text{""};
		while (ifile >> text) {        // Read a word from the file
		// reading from the file is same as cin , this will read one word at a time and remove all whitespace from the input
			cout << text << ", ";
		}
		
		cout << endl;
		ifile.close();                 // Release the binding between ifile and text.txt
	}
}