#include<iostream>
#include<vector>
using namespace std;
int main()
{
//vector is a dynamic array which can grow and shrink
//in vector when vector full then it create new a vector of double its size
//and size give no. of element present
vector<string> a;
vector<int> b(5,10);   //contain 5 int with value aas 10
vector<int > c{1,2,34,4};
for(int i=0;i<c.size();i++)
    cout<<c[i]<<" ";
    cout<<"\n";

    //or
for(auto it=c.begin();it<c.end();it++)
    cout<<*it<<" ";
    cout<<"\n";
//or
for(auto x:c)
    cout<<x<<" ";
cout<<"\n";
    //insert;
int n;
cin>>n;
c.push_back(n);
//for pop
 c.pop_back();
//find at index 3
cout<<c.at(3)<<endl;
 //insert at index 3
c.insert(c.begin()+3,121);
 for(auto x:c)
    cout<<x<<" ";
cout<<"\n";



//delete at index 2
c.erase(c.begin()+2);
//kaha se kaha tak delete karna hai
c.erase(c.begin()+1,c.begin()+3);
 for(auto x:c)
    cout<<x<<" ";
cout<<"\n";

//to clear all element c.clear();
//to check empty or not
c.empty();
//get first and last element
cout<<c.front()<<" "<<c.back();








}

