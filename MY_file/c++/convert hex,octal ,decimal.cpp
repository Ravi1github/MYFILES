#include<iostream>
using namespace std;
#include<iomanip>
int main()
{   int b;
    float a=3.34435;
    cout<<setw(20)<<setfill('*')<<setprecision(3)<<a<<endl;
    cout<<oct<<84<<" "<<hex<<84<<" "<<dec<<84<<endl;  //octal me ,hexadeciamal me then decimal me
    //we can also take input hex and octal and show it hex and oct;
    cout<<"enter the num";
    cin>>hex>>b;
    cout<<dec<<b;
}

