 #include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="hello";
    string s1=s;
  string s2=s1;
    s2=s2+"hi";
    s2.append("how are you");
    cout<<s<<endl<<s1<<endl<<s2<<endl;
   //length before cleq
    cout<<s2.length()<<endl;
   //clear the string
   s2.clear();
cout<<s2.length();

}
