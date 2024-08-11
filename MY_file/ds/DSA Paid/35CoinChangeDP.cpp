#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int coinchange(int n,int coins[],int t, int dp[])
{
    if(n==0)
    {
        return 0;
    }

    //lookup
    if(dp[n]!=0)
        return dp[n];



     int ans=INT_MAX;
    for(int i=0;i<t;i++)
    {
        if(n-coins[i]>=0)
        {
            int subprob=coinchange(n-coins[i],coins,t,dp)+1;
            ans=min(ans,subprob);
        }

    }

    dp[n]=ans;
    return dp[n];

}

int coinchangeBU(int n,int coins[],int t)
{
    int dp[100]={0};

    for(int i=1;i<=n;i++)
    {
        dp[n]=INT_MAX;

        for(int j=0;j<t;j++)
        {
         if(n-coins[j]>=0)
        {
            int subprob=dp[n-coins[j]]+1;
            dp[n]=min(dp[n],subprob);
        }
        }

    }
    return dp[n];
}




int main()
{
    int n,t,coins[]={1,7,10};
    t=sizeof(coins)/sizeof(int);
    cout<<"enter the rupees\n";
    cin>>n;
    int dp[100]={0};
    //top down
   cout<<coinchange(n,coins,t,dp)<<endl;
   //bottom up
   cout<<coinchangeBU(n,coins,t);
}
