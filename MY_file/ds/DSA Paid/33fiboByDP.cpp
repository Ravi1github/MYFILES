#include<iostream>
using namespace std;
  int dp[100]={0};
int fibo(int n)
{
    //base case
    if(n==0 ||n==1)
    return n;

    //Loop up
    if(dp[n]!=0)
        return dp[n];


    int ans=fibo(n-1)+fibo(n-2);
     dp[n]=ans;
 return dp[n];

}
int fiboB(int n)
{
    dp[1]=1;
    dp[0]=0;
    int i;
    for( i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    //top-dopwn approach
    cout<<fibo(n)<<endl;
    //bottom approach
    cout<<fiboB(n)<<endl;

}
