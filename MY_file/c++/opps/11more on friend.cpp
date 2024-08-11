#include<iostream>
class Y;
using namespace std;
class X
{
    int data;
public:
    void setdata(int value)
    {
        data=value;
    }
    //making friend
    friend void add(X,Y);

};

//another class
class Y
{
    int num;


public:
    void setdata(int value)
    {
        num=value;
    }
    friend void add(X,Y);
};

void add(X o1,Y o2)
{
    cout<<"the sum of data of X and Y class is :\n"<<o1.data+o2.num;
}
int main()
{
    X a1;
    Y b1;
    a1.setdata(3);
    b1.setdata(2);
    add(a1,b1);

}
