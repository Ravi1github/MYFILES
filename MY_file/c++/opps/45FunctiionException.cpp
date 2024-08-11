#include<iostream>
#include<exception>
using namespace std;
//function exception
void test() throw(int ,char ,double,runtime_error)
{
       throw 12.2;

}
int main()
{
    try{

  test();
    }
    catch( int a)
    {
        cout<<"integer type error has occured\n"<<a;

    }
    catch( double a)
    {
        cout<<"double type error has occured\n"<<a;

    }

    catch( char a)
    {
        cout<<"char type error has occured\n"<<a;
    }

}
