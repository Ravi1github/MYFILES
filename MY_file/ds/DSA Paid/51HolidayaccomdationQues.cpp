#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
class graph
{
public:
   //adjecncy list
   vector<pair<int,int>> *li;
   int v;

   graph(int n)
   {
      v=n;
      li=new vector<pair<int,int>>[n];
   }

   void addedge(int x,int y,int w)
   {
       li[x].push_back(make_pair(y,w));
       li[y].push_back(make_pair(x,w));
   }


   int dfs_helper(int node,int*visited,int*countt,int  &ans)
   {
       visited[node]=1;
       countt[node]=1;

       for(auto nbr_pair:li[node])
       {
           int nbr=nbr_pair.first;
           int wt=nbr_pair.second;
           if(!visited[nbr])
           {
               countt[node]+=dfs_helper(nbr,visited,countt, ans);
               int nx=countt[nbr];
               int ny=v-nx;
               ans+=2*min(nx,ny)*wt;

           }
       }
       return countt[node];

   }

   int dfs()
   {
       int*countt=new int[v];
       int*visited=new int[v];
       for(int i=0;i<v;i++)
       {
           visited[i]=0;
           countt[i]=0;
       }
      int ans=0;
      dfs_helper(0,visited,countt,ans);
       return ans;
   }


};


int main()
{
     graph g(4);

    g.addedge(0,1,3);
    g.addedge(1,2,2);
    g.addedge(2,3,2);


  cout<<"maximum cost "<<g.dfs();



}

