#include<iostream>
using namespace std;
#include<set>
int main()
{
    //set stored unique element in sorted order
    int i,arr[]={100,12,31,14,5,6,7};

    set<int> s;
    for(i=0;i<7;i++)
    {
        //insert
        s.insert(arr[i]);
    }
    //delete
    s.erase(7);
    //whether element is present or not
     cout<<"counting "<<s.count(2);
    for(auto x:s)
        cout<<x<<" ";
        cout<<endl;

     set<pair<int,int>> s1;
     s1.insert(make_pair(5,2));
     s1.insert(make_pair(7,12));
     s1.insert(make_pair(10,2));
     s1.insert(make_pair(76,2));

     cout<<"pair are : ";
     for(auto x:s1)
        cout<<"("<<x.first<<","<<x.second<<") ";
     cout<<endl;

     //lower and upperbound
   auto it=  s1.lower_bound(make_pair(7,12));
   cout<<it->first<<" "<<it->second<<endl;
       it=  s1.upper_bound(make_pair(7,12));
   cout<<it->first<<" "<<it->second<<endl;


}
