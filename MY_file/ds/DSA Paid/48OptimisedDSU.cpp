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
    int findparent(int i,int parent[])
    {
        if(parent[i]==i)
            return i;

        parent[i]=findparent(parent[i],parent);
        return parent[i];

    }
    //union

    void union_set(int x,int y,int parent[],int rankk[])
    {
     int p1=findparent(x,parent);
     int p2=findparent(y,parent);
     if(p1!=p2)
     {
         if(rankk[p1]<rankk[p2])
           {
                parent[p1]=p2;
                rankk[p2]+=rankk[p1];
           }
           else
           {
                parent[p2]=p1;
                rankk[p1]+=rankk[p2];
           }

     }
    }

    bool is_cycle()
    {
        //making all the node as parent
        int parent[v];
        int rankk[v];
        for(int i=0;i<v;i++)
        {
            parent[i]=i;
            rankk[i]=1;
        }

        for(auto edge:li )
        {
            int i=edge.first;
            int j=edge.second;

            int s1=findparent(i,parent);
            int s2=findparent(j,parent);

            if(s1!=s2)
                union_set(s1,s2,parent,rankk);

            else
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

