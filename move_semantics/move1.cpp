#include <iostream>
#include <utility>
 
void f(int& x)
{
    std::cout << "lvalue reference overload f(" << x++ << ")\n";
}
 
void f(const int& x)
{
    std::cout << "lvalue reference to const overload f(" << x << ")\n"; //cannot modify lvalue x
}
 
void f(int&& x)
{
    std::cout << "rvalue reference overload f(" << x++ << ")\n";
}
 
int main()
{
    int i = 1;
    const int ci = 2;
    
    f(i);  // calls f(int&)
    std::cout<<"Value of i after lvalue reference overload : "<<i<<"\n\n";
    f(ci); // calls f(const int&)
    std::cout<<"Value of ci after lvalue const reference overload : "<<ci<<"\n\n";
    f(3);  // calls f(int&&)
           // would call f(const int&) if f(int&&) overload wasn't provided
    
    f(std::move(i)); // calls f(int&&)
    std::cout << "rvalue reference overload after increment f(" << i << ")\n\n";
    //An expression is an rvalue when and if it results in a temporary object.

    //std::move() is used to cast to a rvalue reference similar to below line
    f(static_cast<int&&>(i));
    std::cout << "rvalue reference overload after second increment f(" << i << ")\n\n";

    // rvalue reference variables are lvalues when used in expressions
    int&& x = 1;
    f(x);            // calls f(int& x)
    f(std::move(x)); // calls f(int&& x)
}
