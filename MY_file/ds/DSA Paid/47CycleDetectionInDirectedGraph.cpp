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

    }

    int is_cycle()
    {

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

  cout<<"given graph is tree : "<<g.is_cycle();



}


