#include<iostream>
using namespace std;
template <class t1,class t2>
float average(t1 a,t2 b)
{
    return (a+b)/2.0;
}
template <class T>
void swapp(T *a,T *b)
{
    T temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    cout<<average(3,2)<<endl;
    int a=3,b=4;
    swapp(&a,&b);
    cout<<"a="<<a<<" b="<<b<<endl;

}
