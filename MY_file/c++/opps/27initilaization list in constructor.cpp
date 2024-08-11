#include<iostream>
using namespace std;
 class test
 {
int a;
 public:

     int b;
     //constructor
    //test(int i,int j):a(i),b(j)
   // test(int i,int j):a(i+j),b(2*j)
   test(int i,int j):a(i),b(a+j)
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;

    }
 };
int main()
{
   test  harry(4,6);
}
