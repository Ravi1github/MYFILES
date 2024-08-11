#include<iostream>
#include<list>
using namespace std;
int main()
{
    //it is a doubly linkedlist
    list<int>l2(5,1); //5 ll with value 1;
    list<int> l1{11,322,212,21,3,4};
    l1.push_back(54);
    l1.push_front(12121);

    for(auto x:l1)
        cout<<x<<" ";
        cout<<endl;
    //sort
    l1.sort();
    l1.reverse();
       for(auto x:l1)
        cout<<x<<" ";
        cout<<endl;

        //remove
        l1.pop_back();
        l1.pop_front();
         for(auto x:l1)
        cout<<x<<" ";
        cout<<endl;
     //fromnt
        cout<<l1.front()<<endl;
        //remove with the value of 311
        l1.remove(322);

          for(auto x:l1)
        cout<<x<<" ";
        cout<<endl;
        //remove 2 node
        auto it=l1.begin();
        it++;
        l1.erase(it);
         for(auto x:l1)
        cout<<x<<" ";
        cout<<endl;
        //insert at 3node
        it=l1.begin();
        it++;
        it++;
        l1.insert(it,123);
        for(auto x:l1)
        cout<<x<<" ";
        cout<<endl;




}
