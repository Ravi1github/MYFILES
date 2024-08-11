#include<iostream>
#include<queue>
using namespace std;
int main()
{
 priority_queue<int> q;
 q={5,23,65,23,989,67,3412,12};
 while(!q.empty())
 {
     cout<<q.top<<" ";
     q.pop();
 }
}
