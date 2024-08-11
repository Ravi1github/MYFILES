#include<iostream>
using namespace std;
class number
{
    int a;
public:
    //we always need to make the default constructor
    number(){}
    number(int num)
    {
        a=num;
    }
    void display()
    {
        cout<<"the no for this object is "<<a<<endl;
    }
};
int main()
{
    number x,y,z(12);
    z.display();

}
