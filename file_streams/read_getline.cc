#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream ifile{"text.txt"};       // Define ifile as an ifstream variable bound to text.txt
	
	if (ifile) {
		string text{""};
		while (getline(ifile, text)) {        // Read a line from the file
			cout << text << endl;
		}
		
		ifile.close();                 // Release the binding between ifile and text.txt
	}
}
// /n vs endl
// Suppose you have a C++ program that writes some output to the console using the std::cout stream. You want to
//  print the message “Hello World” followed by a new line character.

// If you write the following code:


// #include <iostream>
 
// int main() {
 
//   std::cout << "GFG! \n";
 
// }
// The output buffer will not be flushed immediately, and the message will be stored in the buffer until the program finishes.
//  This can be more efficient if you’re writing a lot of output to the console, because flushing the buffer can be an expensive 
//  operation.

// However, if you write the following code instead:


// #include <iostream>
 
// int main() {
 
//     std::cout << "GFG!"<<std::endl;
//     return 0;
// }
// The output buffer will be flushed immediately, which means that the message “Hello World” will be written to the 
// console right away. This can be useful if you want to make sure that the output is displayed immediately, for example 
// if you’re writing a progress indicator or a status message.

// In summary, using std::endl in C++ will flush the output buffer and write the data to the output device immediately, 
// while using \n will not flush the output buffer until it is necessary or manually triggered.

// Example 1: 

// We can use std::endl in C++ but not in C. So std::endl runs well in C++ but if we use C, it runs error.


// #include <iostream>
 
// int main()
// {
 
//     // We can use endl in C++ and it doesn't
//     // occupy any memory
//     std::cout << "GFG!" << std::endl;
//     std::cout << "GFG!";
//     return 0;
// }
 
// // Code submitted by Susobhan AKhuli
// Output:

// GFG!
// GFG!
// Example 2:

// We can use “\n” in both C and C++ but it occupies 1 byte memory.


// #include <iostream>
 
// int main()
// {
 
//     std::cout << "GFG!"
//          << "\n";
//     std::cout << "GFG!";
//     return 0;
// }
// Output:

// GFG!
// GFG!