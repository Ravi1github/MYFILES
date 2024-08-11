#include<iostream>
using namespace std;
int ladder (int n,int k ,int dp[])
{
    if(n==0)
    {
    return 1;
    }

    if(dp[n]!=0)
        return dp[n];

    //recursive
    int ways=0;
    for(int i=1;i<=k;i++)
    {
        if(n-i>=0)
        {
            ways+=ladder(n-i,k,dp);
        }
    }
   return dp[n]=ways;
}

int ladderBU(int n,int k)
{
    int i,j,way;
    int dp[100]={0};
    dp[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i-j>=0)
            {
                dp[i]+=dp[i-j];
            }
        }
    }
    return dp[n];

}


int main()
{
    // no.of ways to reach on n taking max. move k in each step
    int n,k;
    cin>>n>>k;
    int dp[100]={0};
    //topdown approach
    cout<<ladder(n,k,dp)<<endl;
    //bottom
     cout<<ladderBU(n,k)<<endl;

}
