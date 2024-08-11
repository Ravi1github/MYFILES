#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
  map<string,vector<int>>  phonebook;
  phonebook["rahul"].push_back(432211);
  phonebook["rahul"].push_back(552211);
  phonebook["rahul"].push_back(112211);
   phonebook["ravi"].push_back(982211);
  phonebook["ravi"].push_back(892211);
  phonebook["sunny"].push_back(12982211);
  phonebook["sunny"].push_back(65892211);

  for(auto x:phonebook )
  {

      cout<<"all contact no of "<<x.first<<" -> ";
      for( auto no :x.second)
      {
          cout<<no<<" ";
      }
      cout<<endl;
  }

  cout<<"enter to check the number of person\n";
  string name;
  cin>>name;
  if(phonebook.count(name)==0)
  {
      cout<<"no number is present\n";
  }
  else
  {
      for( auto x:phonebook[name])
      {
          cout<<x<<endl;
      }
  }

}
