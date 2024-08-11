#include<iostream>
using namespace std;
int main()
{
    int trow,row,pattern;

    cout<<"enter the trow\n";
    cin>>trow;

   for(row=1;row<=trow;row++)
   {
      char a='A';
       for(pattern=row;pattern<=trow;pattern++)
       {


        cout<<a;
        a++;
       }
       cout<<"\n";
   }
}
