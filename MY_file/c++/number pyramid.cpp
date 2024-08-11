#include<iostream>
using namespace std;
int main()
{
    int trow,row, space,pattern,i;
   cout<<"enter the trow\n"<<trow;
   cin>>trow;
    for(row=1;row<=trow;row++)
    {
        for(space=1;space<=trow-row;space++)
            printf(" ");
        //for increment of number;
        i=row;
        for(pattern=1;pattern<=row;pattern++)
        {

          cout<<i;
          i=i+1;
        }
        //for decrement
            i=i-2;
         for(pattern=1;pattern<=row-1;pattern++)
        {

          cout<<i;
          i=i-1;


        }  cout<<endl;

}

}
