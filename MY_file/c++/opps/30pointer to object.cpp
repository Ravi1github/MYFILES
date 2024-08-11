#include<iostream>
using namespace std;
class complex
{
 int r,i;
 public:
    void setdata(int a,int b)
    {
        r=a;
        i=b;
    }
    void getdata()
    {
        cout<<"real part is "<<r<<endl;
        cout<<"imaginary part is "<<i<<endl;
    }
};
int main()
{
     //complex c1;
    //complex*ptr=&c1;
   //or
  //allocating the memory
 complex*ptr=new complex;
 (*ptr).setdata(2,3);
 ptr->getdata();

//array of object
complex *p=new complex[3];



}

