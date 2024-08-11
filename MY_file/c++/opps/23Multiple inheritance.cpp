#include<iostream>
using namespace std;
class base1
{  protected:
    int base1int;

public:
    void setint1(int a)
    {
        base1int=a;
    }


};

class base2
{  protected:
    int base2int;

public:
    void setint2(int a)
    {
        base2int=a;
    }


};

class base3
{  protected:
    int base3int;

public:
    void setint3(int a)
    {
        base3int=a;
    }


};

//derived class
class derived:public base1,public base2,public base3
{
public:
    void show()
    {
        cout<<"the value of base1 is "<<base1int<<endl;
        cout<<"the value of base2 is "<<base2int<<endl;
        cout<<"the value of base3 is "<<base3int<<endl;
        cout<<"the value of base4 is "<<base1int+base2int+base3int<<endl;
    }
};
/*
from previous table :
the inherited class look like this

data member: base1int , base2int are in protected mode

member function:

setint1(),setint2(),show() are in public mode
*/

int main()
{
    derived harry;
    harry.setint1(12);
    harry.setint2(13);
    harry.setint3(2);
    harry.show();
}
