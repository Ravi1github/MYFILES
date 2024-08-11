#include<iostream>
using namespace std;
void name( char arr[],int num)
{    cout<<"enter the string\n";
    for(int i=0;i<num;i++) {
    cin>>arr[i];

    }
}
int main()
{ int len;
    char str[20];
    cout<<"enter the size\n";
    cin>>len;
    name(str,len);
    cout<<str;
}
