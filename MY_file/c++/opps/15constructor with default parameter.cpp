#include<iostream>
using namespace std;
class simple
{
    int data1,data2;

public:
    // same as function cases
    simple(int a,int b=9)
    {
        data1=a;
        data2=b;
    }
    void print()
    {
        cout<<data1<<" "<<data2<<endl;
    }
};
int main()
{
    simple s(1,2);
    s.print();
}
