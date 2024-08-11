#include<iostream>
using namespace std;
 namespace verylargenamespace{

    int i;
    namespace  nested{

    void display()
    {
        cout<<"from unnamed "<<i<<endl;
    }

    }
    }
//for making alias
namespace one =verylargenamespace;
namespace two=one::nested;
 int main()
 {
    one::  i=10;
    one::nested::display();
 }
