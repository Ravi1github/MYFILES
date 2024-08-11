#include<iostream>
using namespace std;
class base
{
 public:
     int varbase=1;
     //making the virtal function
    //if base class pointer point the derived class obj then derived class ka hii function run ho
     virtual void display(){
     cout<<" 1 var base ="<<varbase;
     }

};
 class derived:public base
 {
public:

    int varderived=2;
     void display(){
     cout<<" 2 var derived="<<varderived;
     }
 };
int main()
{
    base *basepointer;
    base baseobj;
    derived *derivedpointer;
    derived derivedobj;
    basepointer=&derivedobj;

    basepointer->display();

}
