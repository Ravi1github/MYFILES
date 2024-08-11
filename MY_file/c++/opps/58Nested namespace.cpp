#include<iostream>
using namespace std;
 namespace one{

    int i;
    }
    //we can deifne with same name also

 namespace one{

    int j;

    //for nested
    namespace two{

    int k;
    }

    }
    //for unnamed
    namespace{

    int x;
   void display()
   {
        cout<<"form unamed "<<x<<endl;
   }

    }

int main()
{

   using namespace one;
   one:: i=90;
   one::j=1;

    cout<<i<<endl;
    cout<<j<<endl;

    //for nested
     one::two::k=2;
     using namespace two;
     cout<<k<<endl;

     x=23;
     display();



}
