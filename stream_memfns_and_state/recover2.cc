#include <iostream>

using namespace std;

int main() {
	int x{0};

	cout << "Please enter a number: ";
	cin >> x;

	bool success{false};
	while (!success) {
		if (cin.good()) {
			cout << "You entered the number " << x << "\n";
			success = true;
		}	
		//The stream will go through the characters in its input buffer and try to interpret them as an int
		// IT will abandon the operation when it realises this is impossible
		// This will leave some characters in the buffer unprocessed
		// next time program reads from cin the stream does not need to wail for user input as it already has some data to work on
		else if (cin.fail()) {   
			cout << "Please try again and enter a number\n";
			cin.clear();
			cin >> x;
		}
	}
}