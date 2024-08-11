#include<iostream>
using namespace std;
int dp[10][10]={0};
int min_cost(int cost[][10],int r,int c)
{
   for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(i==0 && j==0)
          {
                dp[i][j]=cost[0][0];

          }
          else if(i==0) {
            dp[i][j]=  dp[0][j-1]+ cost[0][j];//move of left;
        }
         else if(j==0) {
            dp[i][j]= dp[i-1][0]+ cost[i][0];//move of left;
        }
        else {
            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+cost[i][j];
    }

}
}
return  dp[r][c];
}


int main()
{
    int cost[10][10],i,j;
    //cost of each box is given and we have to reach some(i,j) with min.cost
    cout<<"enter the cost\n";
    for(int i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>cost[i][j];
        }
    }
    cout<<"enter the pos to reach\n";
    cin>>i>>j;
    cout<<"cost is "<<min_cost(cost,i,j);

}
