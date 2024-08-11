#include<iostream>
using namespace std;
int main()
{
int i;
    string str="awkfdkvndvjsJFJFBFSDFH";
  //lower to uper
    for(i=0;i < str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }


    }
    cout<<str<<endl;
   //upper to lower
    for(i=0;i < str.size();i++)
    {

        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }


    }
    cout<<str<<endl;
}
