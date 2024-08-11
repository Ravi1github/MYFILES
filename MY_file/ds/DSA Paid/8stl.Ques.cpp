#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int>p2)
{
    int d1=p1.first*p1.first+p1.second*p1.second;
    int d2=p2.first*p2.first+p2.second*p2.second;
   if(d1==d2)
    return p1.first<p2.second;
   //if both are equal the return acc.to. x coordinate
   else
   return d1<d2;


}
int main()
{

int n,i,x,y;
cin>>n;
vector<pair<int,int>> v;
for(i=0;i<n;i++)
{
  cin>>x>>y;
  v.push_back(make_pair(x,y));

}
//sort
sort(v.begin(),v.end(),compare);
cout<<"sorted order of car\n";
for(auto p:v)
    cout<<"car :"<<p.first<<","<<p.second<<endl;;


}

