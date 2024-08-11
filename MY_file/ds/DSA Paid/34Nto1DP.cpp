#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int minsteps(int n,int dp[])
{
    //base case
    if(n==1)
       {
           return 0;
       }
    //look up table
    if(dp[n]!=0)
    {
        return dp[n];
    }


    int op1,op2,op3;
    op1=op2=op3=INT_MAX;


    if(n%3==0)
    {
        op1=minsteps(n/3,dp)+1;
    }
    if(n%2==0)
    {
       op2=minsteps(n/2,dp)+1;
    }

   else
     {
         op3=minsteps(n-1,dp)+1;
     }

         //taking min
     int ans= min(min(op1,op2),op3);
     return  dp[n]=ans;


}
int minstepsB(int n)
{
    int i,dp[100]={0};
    dp[1]=0;
    for(i=2;i<=n;i++)
    {
        int op1,op2,op3;
        op1=op2=op3=INT_MAX;

        if(n%3==0)
        {
            op1=dp[i/3];
        }
          if(n%2==0)
        {
            op2=dp[i/2];
        }
        else
        {
            op3=dp[i-1];
        }

        dp[i]=min(min(op1,op2),op3)+1;
    }
    return dp[n];
}

int main()
{
    //convert n to 1 in min.steps
    // n=n/3,n/2 if div. else n-1

    int n;
    cin>>n;
    //top to bottom approach
    int dp[100]={0};
    cout<<minsteps(n,dp)<<endl;
    //bottom approach
    cout<<minstepsB(n)<<endl;

}
