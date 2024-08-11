#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int > d;
  //push back
  d.push_back(2);
  d.push_back(3);

  //push front
  d.push_front(1
//similalry pop_back & pop_front ;

   for(auto x:d)
   cout<<x<<" ";
   cout<<"\n";
   //find at index 2;
   cout<<"at index 2: "<<d.at(2)<<endl;
   cout<<"size of deque "<<d.size()<<endl;
  //insert at index 1
  d.insert(d.begin()+1,121);
   for(auto x:d)
   cout<<x<<" ";
   cout<<"\n";


//delete  at index 1
  d.erase(d.begin()+1);
   for(auto x:d)
   cout<<x<<" ";
   cout<<"\n";
   cout<<"front "<<d.front()<<" back "<<d.back();
   //list is also same as vector and deque


}
