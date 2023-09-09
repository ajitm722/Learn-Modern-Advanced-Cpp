#include <iostream>
#include <limits>

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
		else if (cin.fail()) {   
			cout << "Please try again and enter a number\n";
			cin.clear();
			//cin.ignore(20, '\n');                // Remove next 20 characters or everything up to next newline
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			//best way is to get entire buffer size and remove max number of characters that can be stored in buffer
			cout<<numeric_limits<streamsize>::max()<<'\n';
			cin >> x;
		}
	}
}