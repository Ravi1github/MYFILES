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

    //use recursion in place of stack
    void dfs(int src)
    {
    int visited[10]={-1};

    visited[src]=1;
      stack <int>s;
      s.push(src);
      while(!s.empty())
      {
       int vertex=s.top();
       s.pop();
       cout<<vertex<<" ";
       for(  auto x: li[vertex])
       {

        if(visited[x]!=1)
        {
           s.push(x);
           visited[x]=1;
        }
       }

      }




    }

};
int main()
{
 graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

   g.dfs(0);
}

