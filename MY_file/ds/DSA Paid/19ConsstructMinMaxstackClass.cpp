#include<iostream>
#include<vector>
using namespace std;
class minmaxStack{
public:
    //normal stack
    vector<int>nstack;
    //stack for min max;
    vector<int>minstack;
    vector<int>maxstack;

int top()
{
    return nstack[nstack.size()-1];
}

int empty()
{
    if(nstack.size())
        return 1;
    return 0;
}
int push(int data)
{
    int minval,maxval;
    minval=data;
    maxval=data;
    //if not empty then compare
   if(minstack.size())
   {
      minval=min(minstack[minstack.size()-1],data);
      maxval=max(minstack[maxstack.size()-1],data);
   }
   minstack.push_back(minval);
   maxstack.push_back(maxval);
   nstack.push_back(data);

}

int getmin()
{
    return minstack[minstack.size()-1];
}
int getmax()
{
    return maxstack[maxstack.size()-1];
}
void pop()
{
    minstack.pop_back();
    maxstack.pop_back();
    nstack.pop_back();
}


};
int main()
{
    minmaxStack  s;
    s.push(12);
    s.push(1);
    s.push(5);
    s.push(14);
    s.push(811);
    //find min;
    cout<<s.getmin()<<endl;
     cout<<s.getmax()<<endl;

     s.pop();
     cout<<"after pop\n";
      cout<<s.getmin()<<endl;
     cout<<s.getmax()<<endl;

}
