#include<iostream>
#include<string>
using namespace std;

int main()
{    //compare two string
    string s1="ram";
    string s2="shyam";
    int d=s1.compare(s2);
    cout<<d<<endl;
    //find the lenght of string
    int f=s1.length();
    cout<<f<<endl;
    //find the substring index
 string s3="my name is ravi kumar";
    int ind=s3.find("ravi");
    cout<<ind<<endl;

    //remove the word from string
      s3.erase(ind,4);
      cout<<s3<<endl;

    }
