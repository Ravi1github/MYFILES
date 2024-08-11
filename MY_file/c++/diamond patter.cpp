#include<iostream>
using namespace std;
int main()
{
    int i=1,trow,row,space,pattern;
    cout<<"enter the trow\n";
    cin>>trow;
    for(row=1;row<=trow;row++)
    {
        for(space=1;space<=(trow-row);space++)
        cout<<" ";
        for(pattern=1;pattern<=2*row-1;pattern++) {
            cout<<"*";

        }
        cout<<"\n";
    }

     for(row=trow-1;row>=1;row--)
    {
        for(space=1;space<=(trow-row);space++)
        cout<<" ";
        for(pattern=1;pattern<=2*row-1;pattern++) {
            cout<<"*";

        }
        cout<<"\n";
    }
}
