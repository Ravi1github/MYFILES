\#include<iostream>
using namespace std;
int fun(string s,int i)
{
  int j=0;
  while(i>0)
  {
      int bit=1&i;
      if(bit==1)
      {
          cout<<s[j];
      }
      j++;
      i=i>>1;
  }
  cout<<"\n";

}


int main()
{

int n,i,x,y,j,a;
string s="abc";
int len=s.length();
for(i=0;i<(1<<len);i++)
{
    fun(s,i);
}



}

