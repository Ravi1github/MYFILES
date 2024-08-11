#include<iostream>
#include<queue>
using namespace std;
int main()
{
 priority_queue<int> q;
for(int i=0;i<10;i++)
{
    int a;
    cin>>a;
    q.push(a);
}
 while(!q.empty())
 {
     cout<<q.top()<<" ";
     q.pop();
 }
}
