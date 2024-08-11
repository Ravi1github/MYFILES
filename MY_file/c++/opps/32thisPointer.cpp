#include<iostream>
using namespace std;
class A
{
    int a;
public:
     void setdata(int a)
    {
        //a=a;   it gives garbage value
        //this is a pointer ,point on the function which call
        this->a=a;



    }
    void getdata()
    {
        cout<<"value of a is "<<a<<endl;

    }
};
int main()
{
    A c1;
    c1.setdata(8);
    c1.getdata();
}
