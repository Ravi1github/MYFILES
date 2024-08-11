#include<iostream>
using namespace std;
#include<map>
#include<string>
int main()
{
  map<string, int>marksMap;
  marksMap["Harry"]=98;
  marksMap["jack"]=78;
  marksMap["rohan"]=2;
  //for inserting
  marksMap.insert({   {"ravi",333},{"rakesh",22}   });


  map<string ,int>::iterator itr;
  for(itr=marksMap.begin();itr!=marksMap.end();itr++)
  {
      //first and second are used
      cout<<(*itr).first<<" "<<(*itr).second<<"\n";
  }
  cout<<marksMap.size();

}
