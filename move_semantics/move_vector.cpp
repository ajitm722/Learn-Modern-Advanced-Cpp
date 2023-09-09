#include <iostream>
#include <vector>

using namespace std;


void printvector(vector<int>v)
{
    cout<<v.size()<<"\n";
    for(int num:v)
        cout<<num<<" ";
    cout<<"\n";
}
 int main()
 {
    vector<int> v1 , v2;
    for (int i=0;i<5;i++)
        v1.push_back(i);
    for (int i=10;i<15;i++)
        v2.push_back(i);

    printvector(v1);
    printvector(v2);

    cout<<"\n";
    v2 = std::move(v1); //not exactly moved the resources. Converts v1 to a rvalue reference which is directly assigned to v2
                        //and v1 now points to null and has size 0

    printvector(v1);
    printvector(v2);
 }