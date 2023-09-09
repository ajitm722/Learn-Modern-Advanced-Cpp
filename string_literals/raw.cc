#include <iostream>

using namespace std;

int main() {
	// String literal with escaped characters / this gives them a different meaning
	string url = "<a href=\"file\">C:\\\"Program Files\"\\</a>\\n";
	cout << "URL is " << url << endl << endl;
	
	// Raw string literal with unescaped characters
	string raw_url = R"(<a href="file">C:\"Program Files"\</a>\n)";
	cout << "Raw URL is " << raw_url << endl << endl;
	
	// Raw string literal with delimiter x as the string already has a ')'. we need to add a delimiter x to specify which one
	// marks the end of the delimited_url
	string delimited_url = R"x(<a href="file">C:\"Program Files (x86)"\</a>\n)x";
	cout << "Delimited URL is " << delimited_url << endl << endl;
}