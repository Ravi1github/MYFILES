#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<int>graph[],int i,int *visited,vector<int> &s)
{
   visited[i]=1;

   for(auto nbr:graph[i])
   {
       if(!visited[nbr])
       {
           dfs(graph,nbr,visited,s);
       }
   }
    //function call complete
     s.push_back(i);
}

void dfs2(vector<int>graph[],int i,int *visited)
{
   visited[i]=1;
    cout<<i<<" ";
   for(auto nbr:graph[i])
   {
       if(!visited[nbr])
       {
           dfs2(graph,nbr,visited);
       }
   }
}




void SCC(vector<int>graph[],vector<int>rev_graph[],int v)
{
    int visited[v]={0};
    vector<int>s;


    //1.need to store the vertice acc to dfs finish time
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            dfs(graph,i,visited,s);
        }
    }

   //2.do dfs acc. to ordering in s in rev_graph
   for(int x=0;x<v;x++)//making all zero
      visited[x]=0;


   for(int x=s.size()-1;x>=0;x--)
   {
       int node=s[x];

       if(!visited[node])
       {
           cout<<"compoent is :";
           dfs2(rev_graph,node,visited);
           cout<<endl;
       }
   }


}


int main()
{    //vertex
    int V;
    cin>>V;
    vector<int> graph[V];
    //reverse graph
    vector<int> rev_graph[V];
    //edge
    int m;
    cin>>m;
    cout<<"enter the edges in graph\n";
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        rev_graph[y].push_back(x);
    }
       SCC(graph,rev_graph,V);



}
