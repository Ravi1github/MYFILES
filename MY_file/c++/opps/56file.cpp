#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    //by object
    ofstream out;
    out.open("sample.txt");
    //writing it
    out<<"hii how are\n";
    out<<"ram ji\n";
    out<<"nvvfvkfnvkf\n";
    out.close();

    //for reading
    string st;
    ifstream  in;
    in.open("sample.txt");
    while(in.eof()==0)
    {
        //for taking on line
        getline(in,st);
    cout<<st<<endl;
    }
    in.close();
}
