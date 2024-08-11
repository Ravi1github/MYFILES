#include<iostream>
#include<list>
#include<map>
#include<vector>
using namespace std;
class graph
{

public:
    map<string,vector<pair<string,int>>>l;


    void addedge(string x,string y,int wt)
    {
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    void print()
    {   //iterate all the keys
        for(auto p:l)
        {
           string city=p.first;
           vector<pair<string,int>> connected=p.second;
           cout<<city<<"->";
           //iterating for all connected vertex
           for(auto x:connected)
           {
               string connected_city=x.first;
               int weight=x.second;
               cout<<"("<<connected_city<<","<<weight<<") , ";

           }
           cout<<endl;
        }
    }

};

int main()
{
   graph g;
   g.addedge("A","B",20);
   g.addedge("B","D",40);
   g.addedge("A","C",10);
   g.addedge("C","D",40);
   g.addedge("A","D",50);

   g.print();
}

