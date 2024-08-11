#include<iostream>
using namespace std;
#include<list>
#include<queue>
#include<map>
#include<set>
template <typename T>
class graph
{
public:
        //key      value
    map< T, list<pair<T,int>>> m;

    void addedge(T u,T v,int dist,bool bidir=true)
    {
        m[u].push_back(make_pair(v,dist));
        if(bidir)
        {
            m[v].push_back(make_pair(u,dist));
        }
    }

    void printAdj()
    {
        for(auto j:m)
        {
           cout<<j.first<<"-->";
           for( auto k:j.second )
           {
               cout<<"("<<k.first<<","<<k.second<<") ";
           }
           cout<<endl;
        }
    }
    //Algo
    void DijskstraSSSP(T src)
    {
        //make a map to store node and distance
      map<T,int>dist;

    //set all distance to infinty
    for(auto j:m)
    {
        dist[j.first]=INT_MAX;
    }
    //make a set to found node with the min.distance
    //in set element are sorted
    set<pair<int,T>>s;

    dist[src]=0;
    s.insert(make_pair(0,src));

    while(!s.empty())
    {
       //finding the pair at front
       //s.begin() gives the address of starting pair
       auto p=*(s.begin());
       T node=p.second;
       int nodeDist=p.first;
       //delteing first pair
       s.erase(s.begin());

       //iterate over neighour of current node
       for(auto childpair:m[node] )
       {
           if(nodeDist+childpair.second<dist[childpair.first])
           {
             //in set updation is not possible
             //so,we have to remove the oldpair and add new pair for updation
             T dest=childpair.first;
             auto f=s.find(make_pair(dist[dest],dest));

             if(f!=s.end())
             {
                 s.erase(f);
             }
             //insert newpair
             dist[dest]=nodeDist+childpair.second;
             s.insert(make_pair(dist[dest],dest));


           }
       }

    }
    //distance of src from all other node
    for(auto d:dist)
    {
        cout<<d.first<<" at a distance of "<<d.second<<endl;
    }

    }



};

int main()
{



graph<string> g;
g.addedge("amritsar","delhi",1);
g.addedge("amritsar","jaipur",4);
g.addedge("jaipur","delhi",2);
g.addedge("jaipur","mumbai", 8);
g.addedge("bhopal","agra",2);
g.addedge("mumbai","bhopal",3);
g.addedge("agra","delhi",1);

g.DijskstraSSSP("amritsar");
//g.printAdj();
cout<<endl<<endl;

graph<int>G;
G.addedge(1,2,1);
G.addedge(1,3,4);
G.addedge(2,3,1);
G.addedge(3,4,2);
G.addedge(1,4,7);
//G.DijskstraSSSP(1);






}


