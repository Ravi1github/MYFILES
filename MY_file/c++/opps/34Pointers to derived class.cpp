#include<iostream>
using namespace std;
class base
{
 public:
     int varbase;
     void display(){
     cout<<"1 var base="<<varbase;
     }

};
 class derived:public base
 {
public:

    int varderived;
     void display(){
     cout<<"2 var derived="<<varderived;
     }
 };
int main()
{
    base *basepointer;
    base baseobj;
    derived *derivedpointer;
    derived derivedobj;
    //base class pointer pointing to derived class obj
    basepointer=&derivedobj;
    //jis class ka pointer hoga ussi class ke function and value ko sirf access and assign karega
    basepointer->varbase=22;
    //base class ka pointer hai toh base class ke function ko point karega this is called late binding
    basepointer->display();

//   basepointer->varderived=11;  //show error cannot as it can only access the base class member


}
