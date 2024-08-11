#include<iostream>
#include<stack>
using namespace std;
void transfer(stack<int> &s1,stack<int> &s2,int n)
{  int i;
    for(i=0;i<n;i++)
    {
    s2.push(s1.top());
    s1.pop();
    }
}

void rev(stack<int> &s1,stack<int> &s2)
{
    int x,i,n=s1.size();

    for(i=0;i<n;i++)
    {
        x=s1.top();
        s1.pop();
        //transfer form s1 to s2 another stack
        transfer(s1,s2,n-1-i);
        //push
        s1.push(x);
        //transhfer from s2 to s1
        transfer(s2,s1,n-1-i);
    }
}
int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    stack <int> s2;
    rev(s1,s2);
    //to show rev
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }


}
