#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
   vector <int> v;
   v.push_back(12);
   v.push_back(13);
   v.push_back(14);
   v.push_back(121);
   v.push_back(1211);
  cout<<binary_search(v.begin(),v.end(),14)<<endl;
  int a=12,b=10;
  //for sorting
   sort(v.begin(),v.end());
  cout<<max(a,b)<<"  "<<min(a,b)<<endl;
  swap(a,b);
  //reverse string
  string s= "abcd";
  reverse(s.begin(),s.end());
  cout<<s<<endl;

}
