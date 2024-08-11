#include<iostream>
using namespace std;
//base class
class empolyee
{

    float salary;

public:
     int id;
    empolyee(int a)
    {
        id=a;
        salary=34;
    }
    empolyee(){}  //creating default constructor

};

//derived class  from empolyee
class programmer  : public empolyee {
public:
    //adding new things
    int languagecode=9;
   //constructor
   programmer(int a)
   {
       id=a;
   }
   void getdata()
   {
       cout<<id<<endl;
   }

};


int main()
{
  empolyee harry(1),rohan(2);

   programmer skillf(3);
   cout<<skillf.languagecode<<endl;
   //it is accessible beacause it is public member
   cout<<skillf.id<<endl;
   skillf.getdata();


}
