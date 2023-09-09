// Requires C++17 compiler
#include <iostream>

using namespace std;

int main() {
	char c;
	int ws_count{0};
	
	const char *arr = "How much whitespace in\t here?";
	cout << "The text to process is \"" << arr << "\"" << endl;
	
	for (int i = 0; arr[i]; ++i) {
		switch (const char c = arr[i]; c) {  
		case '\n':                 // c is space character
			[[fallthrough]];		//indicates break statement has been intentionally omitted and avoid any warnings
		case '\t':                // c is tab character
			[[fallthrough]];
		case ' ':                // c is newline character
			++ws_count;           // Increment whitespace counter
			break;        
		default:                  // c is not a whitespace character
			break;
		}
	}
	
	cout << "The text contains " << ws_count << " whitespace characters\n";
}