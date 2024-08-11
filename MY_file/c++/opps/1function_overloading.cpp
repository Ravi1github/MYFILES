#include<iostream>
using namespace std;
int area(int a)
{
    return a*a;
}
int area(int a,int b)
{
    return a*b;
}

int main()
{
    cout<<"the area of square is"<<endl;
   cout<< area(4)<<endl;
      cout<<"the area of rectangle is"<<endl;
   cout<< area(4,2)<<endl;


}
