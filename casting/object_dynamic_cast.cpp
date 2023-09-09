#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "This is the base class." << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "This is the derived class." << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Pointer to base class object
    Base* basePtr = &baseObj; // Pointing to a Derived object

    basePtr->print();
    
    // Convert the base class pointer to a derived class pointer using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr) {
        // Access a member function using the derived class pointer
        derivedPtr->print();
    } else {
        std::cout << "Conversion to Derived failed." << std::endl;
    }

    return 0;
}
