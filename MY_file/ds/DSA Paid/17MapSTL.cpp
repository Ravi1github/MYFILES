#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
     //first is key and second is value
    //it stores unique key
  map<string,int>m;
  //insert
  m.insert(make_pair("mango",40));
  //or
  pair<string,int> p;
  p.first="apple";
  p.second=90;
  m.insert(p);
  //or
  m["banana"]=20;

  //delete
  //m.erase("mango");
  //search
  string fruit;
  cout<<"enter the fruits name to check price\n";
  cin>>fruit;

  if(m.count(fruit))
  {
      cout<<"price of fruits is "<<m[fruit]<<endl;
  }
  //to update
  m[fruit]+=100;
  cout<<"new price of fruits is "<<m[fruit]<<endl;
// to iterator all element
//iterating  form banana key
auto itrr=m.find("banana");

for(auto it=itrr;it!=m.end();it++)
{
    cout<<(*it).first<<" price is "<<it->second<<endl;
}
//or
for(auto x:m)
{
    cout<<x.first<<"price is "<<x.second<<endl;
}
cout<<m.size()<<endl;


//to erase
m.erase(fruit);


}
