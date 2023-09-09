#include <iostream>
#include <string>

void printString(const std::string& str) {
    std::cout << "Received: " << str << std::endl;
}

int main() {
    std::string originalString = "Hello, World!";
    
    printString(originalString);
    
    return 0;
}
