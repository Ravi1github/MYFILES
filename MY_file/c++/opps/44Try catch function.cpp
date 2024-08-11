#include<iostream>
#include<exception>
using namespace std;
int main()
{
    int a=12,b=0.0;
    int c;
    try{

    if(b==0)
        //jis type ka parameter pass karenge woh wala catch function run hoga
        throw "divided by zero";



          c=a/b;
        cout<<c<<endl;
    }
    //this is for string
     catch( char err[])
     {

         cout<<"char error has occured\n";
         cout<<err<<endl;
     }

     //this is for int
     catch(const int err)
     {

         cout<<"error has occured\n";
         cout<<err<<endl;
     }


      //this can catch any type of error
     catch(...)
     {

         cout<<"some error has occured\n";

     }


}
