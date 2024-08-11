#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //max priority queue
 priority_queue<int> q;
 //min priority queue
 priority_queue<int ,vector<int>,greater<int>> p;
 int n,i;
 cin>>n;
 for(i=0;i<n;i++)
 {   int d;
     cin>>d;
     q.push(d);
     p.push(d);
 }
 while(!q.empty())
 {
     cout<<q.top()<<" ";
     q.pop();
 }
 cout<<endl;

  while(!p.empty())
 {
     cout<<p.top()<<" ";
     p.pop();
 }
}
