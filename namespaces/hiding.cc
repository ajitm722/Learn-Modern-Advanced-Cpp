#include <iostream>

using namespace std;

int x{23};                                  // x defined in the global namespace

namespace abc { // to avoid name conflicts between multiple libraries
	int x{47};                              // x defined in the namespace abc - hides global x
	int y{50};
	void func() { 
		cout << "x = " << x << endl;        // Will use abc's x -> 47
		cout << "::x = " << ::x << endl;    // Will use global x -> 23
		//If its not in any namespace it is said to be in global namespace
	}
}
using abc::y; //using declaration will bring particular namespace variable into the global namespace
// using namespace abc; will bring everything from the namespace into the global namespace. 
// Not good practice as it contradicts the point of having namespaces. e.g. using namespace std;
int main() {
	abc::func();
	cout<<x <<"\t"<<abc::x <<"\t"<< y << "\n";
}