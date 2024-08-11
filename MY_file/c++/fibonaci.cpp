#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c;
    cout<<"enter the fibo no ";
    cin>>n;
    for(i=1;i<=n;i++)
    { cout<<a<<" ";
         c=a+b;
        a=b;
        b=c;


    }
}
