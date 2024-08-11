#include<iostream>
using namespace std;
class base1
{
    int data1;
public:
    //constructor
    base1(int a)
    {
        data1=a;
        cout<<"base1 constructor is called\n";

    }
    void printdata()
    {
         cout<<"the value of data is "<<data1<<endl;
    }
};

class base2
{
  int data2;
public:
    //constructor
    base2(int a)
    {
        data2=a;
        cout<<"base2 constructor is called\n";

    }
    void printdata2()
    {
         cout<<"the value of data is "<<data2<<endl;
    }
};

//derived
class derived : public base1,public base2
{
    int val1,val2;
public:

    //contructor in inheritance
    derived(int a,int b,int c,int d ):base1(a),base2(b)
    {
       val1=c;
       val2=d;
       cout<<"derived constructor is callled\n";

    }
    void printdata3()
    {
        cout<<"values are "<<val1<<" "<<val2<<endl;
    }


};
int main()
{

  derived harry(1,2,3,4);

harry.printdata();


}
