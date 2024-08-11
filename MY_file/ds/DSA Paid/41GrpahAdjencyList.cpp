#include<iostream>
#include<list>
using namespace std;
class graph
{
public:
    int V;
    list<int> *l;
    //or
    //vector<int>*l;


    graph(int vertex)
    {
        V=vertex;
        l=new list<int>[vertex];
    }
  void addedge(int x,int y)
    {
        //bidirectional
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdjList()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"->";
            for(auto x:l[i])
                cout<<x<<",";
            cout<<endl;
        }
    }



};
int main()
{
  graph g(4);
  g.addedge(0,1);
  g.addedge(0,2);
  g.addedge(2,3);


  g.addedge(1,2);
  g.printAdjList();


}
