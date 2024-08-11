#include<iostream>
using namespace std;

int fact(int n)
{   int fact=1;
    if(n==0||n==1)
        return 1;
    else

    {
        for(int i=1;i<=n;i++)
            fact+=fact*i;
        return fact;
    }
}
int power(int x,int n)
{      if (n==0)
return 1;
    int power=1;
    for(int i=1;i<=n;i++)
             power=power*x;
    return power;
}
int main()
{
   int sum=0;
   for(int i=0;i<10;i++)
   {
       sum=sum+power(2,i)/fact(i);
   }
   cout<<sum;
}
