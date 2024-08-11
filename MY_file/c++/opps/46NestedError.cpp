#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    try{

     //nested
     try{
     throw 12;

     } catch( int e){
    cout<<"int  type error in inner block "<<e<<endl;
    cout<<"rethrowing the error\n";
    throw "new error  ";

    }

    }

    catch(const char *e){
    cout<<" string error in outer block ----> "<<e<<endl;

    }

    catch(...){
    cout<<"unexpected type error in outer block "<<endl;

    }

}
