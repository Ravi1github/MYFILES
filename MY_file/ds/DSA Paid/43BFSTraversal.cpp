#include<iostream>
using namespace std;
#include<list>
#include<queue>
#include<map>
class graph
{
public:
    map<int,list<int>> li;

    void addedge(int x,int y)
    {
        li[x].push_back(y);
        li[y].push_back(x);
    }

    void bfs(int src)
    {
       queue<int> q;
       q.push(src);
       int visited[10]={0};
       visited[src]=1;
       cout<<"BFS traversal : ";
       while(!q.empty())
       {
        int vertex=q.front();
        q.pop();
        cout<<vertex<<" ";
     //exploration
        for(auto nbr:li[vertex])
        {
            if(visited[nbr]!=1)
            {
                q.push(nbr);
                visited[nbr]=1;
            }
        }

       }





    }

};
int main()
{
   graph g;
   g.addedge(0,1);
   g.addedge(1,2);
   g.addedge(2,3);
   g.addedge(3,4);
   g.addedge(4,5);

   g.bfs(0);
}
