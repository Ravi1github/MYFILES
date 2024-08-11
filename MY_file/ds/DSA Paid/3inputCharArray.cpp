#include<iostream>
#include <cstring>
using namespace std;

int main() {
   string s;
   cin>>s;
   char ch;
   int i,len;
   len=s.length();
   for(i=0;i<len-1;i++)
   {
      int a=s[i]-s[i+1];
       string ss=to_string(a)

	s.insert(i+1,ss);
	  i++;
	  len++;


   }
   cout<<s;

	return 0;
}
