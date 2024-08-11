#include<iostream>
using namespace std;
bool ratmaze( char maze[10][10],int sol[10][10],int i,int j,int m, int n)
{
    if(i==m&&j==n)
    {
        sol[i][j]=1;
        //printing path
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                cout<<sol[i][j];
            }
            cout<<endl;
        }
        return true;

    }
    if(i>m&&j>n)
        return false;

      if(maze[i][j]=='x')
        return false;


      //else in right path
      sol[i][j]=1;
      //moving
      bool rightMove=ratmaze(maze,sol,i,j+1,m,n);
    bool bottomMove=ratmaze(maze,sol,i+1,j,m,n);
    //backtacking
    sol[i][j]=0;

    if(rightMove||bottomMove){
        return true;
    }
    else return false;
}
int main()
{
    int i,j,k;
    char maze[10][10]={
       "0000",
       "00x0",
       "000x",
       "0x00",

    };
    int sol[10][10]={0};
    int path=ratmaze(maze, sol,0,  0, 3, 3);
    if(path)
        cout<<"path exist\n";
    cout<<"no path exist\n";


}
