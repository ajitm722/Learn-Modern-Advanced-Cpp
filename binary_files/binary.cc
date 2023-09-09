#include <iostream>
#include <fstream>
#include <cstdint>

using namespace std;

//#pragma pack(push, 1)
struct point {
	char c;
	int32_t x;
	int32_t y;
};
//#pragma pack(pop)
// IN binary mode data stored in file will be identical to the data in memory
// Might be used when working with file formats(e.g. media files)

int main() {
	point p{'a', 1, 2};
	ofstream ofile("file.bin", fstream::binary);
	
	if (ofile.is_open()) {
		ofile.write(reinterpret_cast<char *>(&p), sizeof(point));
		ofile.close();
	}
	
	ifstream ifile("file.bin", fstream::binary);
	point p2;
	
	if (ifile.is_open()) {
		ifile.read(reinterpret_cast<char *>(&p2), sizeof(point));
		ifile.close();
		cout << "Read " << ifile.gcount() << " bytes\n";
		
		cout << "Read x = " << p2.x << ", y = " << p2.y << endl;
	}
}