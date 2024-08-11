#include<iostream>
#include<vector>
using namespace std;

vector<int> BellMan(int v,int src,vector<vector<int>> edges)
{
 vector<int> dist(v+1,INT_MAX);
 dist[src]=0;

 //relaxing vertex v-1 times

 for(int i=0;i<v-1;i++)
 {
     for(auto edge:edges)
     {
         int u=edge[0];
         int v=edge[1];
         int wt=edge[2];
         if(dist[u]!=INT_MAX  && dist[u]+wt<dist[v])
         {
             dist[v]=dist[u]+wt;
         }

     }
 }
 //for -ve cycle
   for(auto edge:edges)
     {
         int u=edge[0];
         int v=edge[1];
         int wt=edge[2];
         //distace aur bhi kam ho raha hai so it cantain -ve edge
         if(dist[u]!=INT_MAX  && dist[u]+wt<dist[v])
         {
             dist[v]=dist[u]+wt;
              cout<<"It contain -ve edges";
         exit(0);
         }


     }

 return dist;

}

int main()
{
    //vertex, edges
    int v ,m;
    cin>>v>>m;

    //edgelist;
    vector<vector<int>> edges;
    for(int i=0;i<m;i++)
    {   int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({u,v,wt});
    }

    vector<int> distances=BellMan(v,1,edges);

    for(int i=1;i<=v;i++)
    {
        cout<<"distance of node "<<i<<" "<<distances[i]<<endl;
    }
}
