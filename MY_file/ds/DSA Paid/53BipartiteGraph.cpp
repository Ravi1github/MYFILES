#include<iostream>
using namespace std;
#include<list>
#include<stack>
#include<map>
class graph
{
public:
    map<int,list<int>> li;

    void addEdge(int x,int y)
    {
        li[x].push_back(y);

    }

    void dfs(int src)
    {
        static int visited[100]={0};
       cout<<src<<" ";
       visited[src]=1;
       for(auto p:li[src])
       {
           if(!visited[p])
           {
             dfs(p);
           }
       }

    }


};
int main()
{
 graph g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(3, 0);

   g.dfs(0);
}

