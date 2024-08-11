#include<iostream>
using namespace std;
class complexx
 {
     int a,b;
 public:
     //overloading
     complexx(int x,int y)
     {
         a=x;
         b=y;
     }
     complexx(int x) //if one is not declared then by default it becomes zero
     {
         a=x;
     }
     complexx()
     {
      a=0;
      b=0;
     }



      void display()
     {
         cout<<" a is "<<a<<" b is "<<b<<endl;
     }

 };
int main()
{
    complexx c1(23,3);
    c1.display();

     complexx c2(4);
    c2.display();

    complexx c3;
    c3.display();
}
