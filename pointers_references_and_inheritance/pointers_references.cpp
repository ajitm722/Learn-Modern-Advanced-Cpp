#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int &r = i;
    int *p = &i;
    int var = 90;
    cout<<&i<<"  "<<&r<<"  "<<&p<<"  "<<*p<<"\n";
    *p = *p + 1;
    cout<<i<<"\n";
    // r = var;
    // p = &var;

}