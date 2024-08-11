#include <iostream>
using namespace std;
int main()
{ int i=0;
    char ch,arr[40];
    while(ch!='.')
    {
        ch=cin.get();
        arr[i]=ch;
        i++;

    } arr[i]='\0';
  cout<<arr;
}

