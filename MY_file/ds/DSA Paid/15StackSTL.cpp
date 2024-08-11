#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
   stack <string> s;
   s.push("ravi");
   s.push("kumar");
   s.push("jaiswal");
   cout<<"top element is : "<<s.top()<<endl;

   //pop top element
   s.pop();
    cout<<"top element is : "<<s.top()<<endl;
    //similary s.clear and s.empty ,
    //dequeue

    cout<<endl<<"queue :\n";
    queue <string> s1;
   s1.push("abc");
   s1.push("pqr");
   s1.push("xyz");
   //front
   cout<<"front element is "<<s1.front()<<endl;
   s1.pop();
   cout<<"front element is "<<s1.front()<<endl;



}
