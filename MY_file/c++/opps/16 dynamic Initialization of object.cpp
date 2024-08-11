#include<iostream>
using namespace std;
class bankDeposit
{
private:

   int principal;
   int years;
   float interestRate;
   float returnvalue;

public:
    bankDeposit(){};
    bankDeposit(int p,int y,float r );//r can be like .04
    bankDeposit(int p,int y,int r );//r can be like 12
    void show();



};
//for first constructor
   bankDeposit::bankDeposit(int p,int y,float r)
{
   principal=p;
   years=y;
   interestRate=r;
   returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestRate);
    }

}
//for second constructor

    bankDeposit::bankDeposit(int p,int y,int  r)
{
   principal=p;
   years=y;
   interestRate=(float)(r/100.0);
   returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestRate);
    }

}
void  bankDeposit::show()
 {
     cout<<"the principal amount is "<<principal<<endl<<"return value after "<<years<<" year is "<<returnvalue<<endl;
 }

int main()
{
    bankDeposit bd1 ,bd2,bd3;
   int p,y;
   float r;
   cout<<"enter the value of p y r "<<endl;
   cin>>p>>y>>r;
   bd1=bankDeposit(p,y,r);
   bd1.show();
   //for second

   cout<<"enter the value of p y R "<<endl;
   cin>>p>>y>>r;
   bd1=bankDeposit(p,y,r);
   bd1.show();

}
