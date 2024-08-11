#include<iostream>
#include<list>
using namespace std;
int main()
{
  //to store the dist from a city
  list<pair<int,int>> *l;

  int n,i;
  cin>>n;
  //array of list
  l=new list<pair<int,int>>[n];
  //no.ofedge
  int e;
  cin>>e;
  cout<<"enter egde and weight\n";
  for(i=0;i<e;i++)
  {
      //having egde from x->y with weight
      int x,y,wt;
      cin>>x>>y>>wt;
      //bidirectional graph;
      l[x].push_back(make_pair(y,wt));
      l[y].push_back(make_pair(y,wt));

  }
  for(i=0;i<n;i++)
  {
      cout<<"linked list "<<i<<"--> ";
      for(auto xp:l[i])
      {
          cout<<"("<<xp.first<<","<<xp.second<<"),";
      }
      cout<<"\n";
  }


}
