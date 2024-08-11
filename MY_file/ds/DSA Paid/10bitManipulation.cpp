#include<iostream>
using namespace std;
void isodd(int n)
{
     int i= n&1;
    if(i)
    cout<<"odd\n";

    else cout<<"even\n";
}
int getbit(int n,int i)
{   int mask=(1<<i);
    int bit= (n&mask) > 0 ? 1:0;
    return bit;
}
void setbit(int &n,int i)
{
    int mask=(1<<i);
    n= (n|mask);

}
int clearbit(int n,int i)
{
    int mask=(1<<i);
    mask=~mask;
    n= (n&mask);
    return n;

}
int updatebit( int n,int i,int bit)
{
    //to clear ith bit
     n=clearbit(n,i);
   int mask=bit<<i;
    n=n|mask;
    return n;
}

int clearuptoI(int n,int i)
  {
      int mask = -1<<i+1;
      n=n&mask;
      return n;
  }
int clearJtoI(int n,int j,int i)
{
    int a= -1<<j+1;
    int b= (1<<i)-1;
    int mask=a|b;
    n=n&mask;
    return n;
}
int main()
{

int n,i,x,y,j;
cout<<"enter the number\n";
cin>>n;
isodd(n);
cout<<"enter the bit to get\n";
cin>>i;
//find 2 bit from right
cout<<getbit(n,i-1)<<endl;
setbit(n,i-1);
cout<<n<<endl;
n=clearbit(n,i-1);
 cout<<n<<endl;
 //update the bit at ith to 1;
n=updatebit(n,i-1,1);
 cout<<n<<endl;
 //clear all from 1 to ith bit
 n=clearuptoI(n,i-1);
 cout<<n<<endl;
 //clear from j to i bit
 cout<<"enter the j and i\n";
 cin>>j>>i;
 n=clearJtoI(n,j-1,i-1);
 cout<<n<<endl;


}



