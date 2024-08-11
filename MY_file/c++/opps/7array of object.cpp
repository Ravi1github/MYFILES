#include<iostream>
using namespace std;
class empolyee
{  private:

    int id;
    int salary;
public:
    void setid()
    {

        cout<<"enter the id and salary of employee \n";
        cin>>id>>salary;
    }
    void getid()
    {
        cout<<"id is "<<id<<" and salary is "<<salary<<endl;
    }

};
int main()
{
   empolyee fb[4];
   int i;

   for(i=0;i<4;i++)
   {

       fb[i].setid();

   }


    for(i=0;i<4;i++)
   {

       fb[i].getid();

   }
}
