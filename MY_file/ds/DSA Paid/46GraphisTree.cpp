#include<iostream>
using namespace std;
#include<list>
#include<queue>
#include<map>

class graph
{
public:
    int v;
    list<int>*li;

    graph(int vertex)
    {
         v=vertex;
        li=new list<int>[vertex];
    }
    addedge(int x,int y)
    {
      li[x].push_back(y);
      li[y].push_back(x);
    }

    bool is_tree()
    {
        int i;
        queue<int>q;
        bool *visited=new bool [v];
        int *parent=new int [v];

        for(i=0;i<v;i++)
        {    //all makes to false
            visited[i]=false;
            parent[i]=i;
        }
        //bfs
        int src=0;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {

            int vertex=q.front();
            q.pop();


            for(int nbr: li[vertex])
            {
                //nbr is already visited then cycle is present and if already visited then it is not parent
                if(visited[nbr]==true && parent[vertex]!=nbr)
                    return false;


                else if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=vertex;

                }
            }
        }
        return true;


    }


};

int main()
{
    //cycle is present then it is not a tree
    //undirected graph
    graph g(4);
    g.addedge(0,1);
    g.addedge(3,2);
    g.addedge(1,2);
    g.addedge(0,3);

  cout<<"given graph is tree : "<<g.is_tree();



}

