#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

int i,j,k=0,c=0;
 string s1;
 cin>>s1;
char ch;
 int len=s1.length();
 for(i=0;i<len;i++)
 {
     c=1;
   ch=s1[i];

   while(i+1<len&&ch==s1[i+1])
   {
       i++;
       c++;
   }


   cout<<ch<<c;

 }

}

