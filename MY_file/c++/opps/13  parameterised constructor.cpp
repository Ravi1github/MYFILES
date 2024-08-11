#include<iostream>
using namespace std;
 class complexx
 {
     int a,b;
 public:
     void display()
     {
         cout<<" a is "<<a<<" b is "<<b<<endl;
     }
      //constructor and class name is always same
     //constructor automatically
    //constructor declaration
    complexx(int x,int y)
    {
        a=x;
        b=y;
    }

 };


int main()
{
    complexx c1(3,4);
    //or
    complexx c2= complexx(1,2);
    c1.display();
    c2.display();
}
