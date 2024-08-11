#include<iostream>
using namespace std;
void value(int *a,int *b)
{  int c,d;
    cout<<"enter c and d ";
  cin>>c>>d;
    *a= c+d;
    *b=*a/2;
}
int main()
{
  int a,b;

  value(&a,&b);
  cout<<a<<" "<<b ;
}
