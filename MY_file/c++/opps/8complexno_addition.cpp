#include<iostream>
using namespace std;
class complexx
{  private:

    int a;
    int b;
public:
    void setdata()
    {

        cout<<"enter the real and imaginary part of complex number \n";
        cin>>a>>b;
    }
    void getdata()
    {
        cout<<"real part is "<<a<<" and imaginary part  is "<<b<<endl;
    }
    void sumvalue(complexx c1 ,complexx c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;

    }

};
int main()
{
    complexx c1,c2,c3;

    c1.setdata();
    c2.setdata();
   //or c3
   c3.sumvalue(c1,c2);
   c3.getdata();

}

