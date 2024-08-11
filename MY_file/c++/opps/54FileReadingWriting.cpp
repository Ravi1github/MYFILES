#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string s1="harry bhai";
  //opening file using constructor and writing it
  ofstream out("sample.txt");
  out<<s1;
    //opening file using constructor and reading it
    string s2;
    ifstream in("sample_b.txt");
    //for reading each line of file
    getline(in,s2);
    cout<<s2<<endl;
}
