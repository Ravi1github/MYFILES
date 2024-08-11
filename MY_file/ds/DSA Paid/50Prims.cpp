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
   int prim_mst()
   {
       //min heap of pair of w and y
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;

       //visited array inialize with 0
       int*visited=new int [v]{0};
       int mst=0;
       //begin from 0 vertex
       q.push(make_pair(0,0));  //wt,node respectively

       while(!q.empty())
       {
           //pick the best edge
           auto best=q.top();
           q.pop();

           int edge=best.second;
           int weight=best.first;

           if(visited[edge]==1)
           {
               //discard the edge not a active edge
               // and continue
              continue;
           }

           //otherwise take the edge
           mst+=weight;
           visited[edge]=1;

           //add the nbr edge  in queue
           for(auto x :li[edge])
           {
               if(visited[x.first]==0)
               {
                 q.push(make_pair(x.second,x.first));

           }

       }
       }
       return mst;
   }

};


int main()
{
     graph g(4);

    g.addedge(0,1,1);
    g.addedge(1,3,3);
    g.addedge(3,2,4);
    g.addedge(2,0,2);
    g.addedge(0,3,2);
    g.addedge(1,2,2);


    cout<<"mst is : "<<g.prim_mst()<<endl;
}
