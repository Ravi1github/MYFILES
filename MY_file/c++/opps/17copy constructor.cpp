#include<iostream>
using namespace std;
class number
{
    int a;
public:
    //we always need to make the default constructor
    number()
    {
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    //for copy constructor
    //when no copy constructor is found,complier supplies its own copy constructor
    number(number &obj)
    {
        cout<<"copy constructor is called \n";
        a=obj.a;
    }

    void display()
    {
        cout<<"the no for this object is "<<a<<endl;
    }
};
int main()
{
    number x(3),y,z(12),w;
    z.display();
    number z1(x);//z1 is same as x
    z1.display();
    //w=x; copy constructor is not called
    number k=z; // copy constructor is not called
    k.display();

}
