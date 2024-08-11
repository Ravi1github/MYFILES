#include<stdio.h>
#include<stdlib.h>
//making global
int visited[7]={0,0,0,0,0,0,0};
 int adjency[7][7]={
   {0,1,1,0,0,0},
   {1,0,1,0,0,0,0},
   {1,1,0,1,1,0,0},
   {1,0,1,0,1,0,0},
   {0,0,1,1,0,1,1},
   {0,0,0,0,1,0,0},
   {0,0,0,0,1,0,0},
   };

void DFS(int i)
{
    int j;
    printf("%d ",i);
    visited[i]=1;
    for(j=0;j<7;j++)
    {
        if(adjency[i][j]==1&&!visited[j])
        {
            DFS(j);
        }
    }
}
int main()
{

   DFS(6);
      return 0;

}

