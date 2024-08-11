#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> p1,pair<int ,int>p2)
{
    //  p1 ka end time p2 ke end time se chota ho
    return p1.second  < p2.second;
}


int main()
{
   int t,s,n,e;
   vector<pair<int,int>>v;

      cout<<"enter the no.of activity\n";
      cin>>n;
      cout<<"enter start and end time\n";
      for(int i=0;i<n;i++)
      {
        cin>>s>>e;
        v.push_back(make_pair(s,e));
      }
      //activity selection logic

      //sort activity
      sort(v.begin(),v.end(),compare);
      //start picking activity
     // pick first activity
      int actvity=1;
      int endtime=v[0].second;

   //second onward selecting
      for(int i=1;i<n;i++)
      {
          if(v[i].first>=endtime)
          {
               actvity++;
               endtime=v[i].second;
          }
      }
      cout<<"maximum no of activity performed "<<actvity<<endl;


}
