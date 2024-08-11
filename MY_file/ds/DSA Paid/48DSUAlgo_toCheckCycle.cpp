#include<iostream>
#include<list>
using namespace std;
class graph
{
public:
    //edge list
    list<pair<int,int>> li;
    int v;

    graph(int V)
    {
        v=V;

    }

    void addedge(int u,int v)
    {
     li.push_back(make_pair(u,v));
    }

    //find set
    int findset(int i,int parent[])
    {
        if(parent[i]==-1)
            return i;

        return findset(parent[i],parent);

    }
    //union

    void union_set(int x,int y,int parent[])
    {
     int s1=findset(x,parent);
     int s2=findset(y,parent);

     if(s1!=s2)
     {
         parent[s2]=s1;
     }
    }

    bool is_cycle()
    {
        //making all the node as parent
        int parent[v];
        for(int i=0;i<v;i++)
        {
            parent[i]=-1;
        }

        for(auto edge:li )
        {
            int i=edge.first;
            int j=edge.second;

            int s1=findset(i,parent);
            int s2=findset(j,parent);

            if(s1!=s2)
                union_set(s1,s2,parent);

            else if(s1==s2)
            {
                //means cycle present hai
              return true;
            }
        }

       return false;

    }



};



int main()
{
graph g(4);

g.addedge(0,1);
g.addedge(1,2);
g.addedge(2,3);
g.addedge(3,0);


cout<<" cycle is present : "<<g.is_cycle()<<endl;

}
