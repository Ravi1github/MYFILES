#include<iostream>
#include<queue>
using namespace std;
//implement stack using two queue
//we perform push pop top empty function
class stackk{

  queue<int> q1,q2;
  public:

    void push(int d)
    {
        q1.push(d);
    }
    void pop()
    {
        while(q1.size()!=1)
        {
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
        }

        q1.pop();
        swap(q1,q2);
    }
    int top()
    {
      while(q1.size()!=1)
        {
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
       int x=q1.front();
        q1.pop();
        q2.push(x);
        swap(q1,q2);
        return x;

    }
    int isempty()
    {
        if(q1.size()==0)
        return 1;
        else 0;
    }


};
int main()
{
    stackk  s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"top elementt is "<<s.top()<<endl;
    s.pop();
      cout<<"top elementt after "<<s.top()<<endl;
}
