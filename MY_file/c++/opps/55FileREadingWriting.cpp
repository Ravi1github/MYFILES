#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string s1;
    cout<<"enter your name\n";
    cin>>s1;
    //for writing
    ofstream hout("sample.txt"); //opening the file for writing it
    hout<<s1;  //writing on file
    hout.close();   //closing the file

     //for reading
     string s2;
     ifstream hin("sample.txt");
     hin>>s2;
     cout<<"the obtained string is "<<s2;
     hin.close();
}
