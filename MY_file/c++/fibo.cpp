#include<iostream>
using namespace std;
int fun(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {    c=a+b;
        a=b;
        b=c;

    }return a;
}
int main()
{
  int n;
   cout<<"enter the fibo no ";
    cin>>n;
   int  c=fun(n);
   cout<<c;
}
