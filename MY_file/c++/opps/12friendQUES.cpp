#include<iostream>
using namespace std;
class c2;
class c1
{
    int data;
public:
    void setdata(int a)
    {
        data=a;
    }
    void display()
    {
        cout<<data<<endl;
    }
    friend void swapp(c1 &,c2 &);
};

class c2
{
    int val;
public:
    void setdata(int a)
    {
        val=a;
    }
    void display()
    {
        cout<<val<<endl;
    }
       friend void swapp(c1 &,c2 &);
};
void swapp(c1 &x,c2 &y)
{
    int t;
    t=x.data;
    x.data=y.val;
    y.val=t;
}
int main()
{
    c1 x;
    c2 y;
    x.setdata(12);
    y.setdata(2);
    swapp(x,y);
    cout<<"the value after the exchange in x is ";
    x.display();
    cout<<"the value after the exchange in y is ";
    y.display();

}
