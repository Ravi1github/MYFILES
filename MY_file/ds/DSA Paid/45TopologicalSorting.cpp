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
        li=new list <int>[vertex];
    }
    addedge(int x,int y)
    {
      li[x].push_back(y);
    }

    void topologoical_sort()
    {
        //indegree
        int*indegree=new int[v];
        //inital indegree=0;
        for(int i=0;i<v;i++)
        {
            indegree[i]=0;
        }
        //update indegree by traversing
        for(int i=0;i<v;i++)
        {

            for(auto y:li[i])
            {

                indegree[y]++;
            }
        }

        //bfs

        queue<int> q
        //having 0 indegree push in queue
        for(int i=0;i<v;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        //poping element and priting
        while(!q.empty())
        {
            int vertex=q.front();
            cout<<vertex<<" ";
            q.pop();
            for(auto nbr : li[vertex])
            {   //removing the indree of its nbr
                indegree[nbr]--;

                if(indegree[nbr]==0)
                    q.push(nbr);
            }

        }



    }
};

int main()
{
    graph g(6);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(1,4);
    g.addedge(2,3);
    g.addedge(2,5);
    g.addedge(4,5);

    g.topologoical_sort();
}
