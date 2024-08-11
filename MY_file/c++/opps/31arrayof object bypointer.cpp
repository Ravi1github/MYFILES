#include<iostream>
using namespace std;
class shop
{
    int id,price;
public:
    void setdata(int a,int b)
    {
        id=a;
        price=b;
    }
    void getdata()
    {
        cout<<"id is "<<id<<endl;
        cout<<"price part is "<<price<<endl;
    }
};
int main()
{   int i,a,b, size=3;
    shop *ptr=new shop[size];
    shop*temp=ptr;
    for(i=0;i<size;i++)
    {
       cout<<"enter the id and price of item "<<i+1<<endl;
       cin>>a>>b;
       ptr->setdata(a,b);
       ptr++;
    }
     ptr=temp;
     for(i=0;i<size;i++)
    {
       cout<<" the id and price of item: "<<i+1<<endl;
       ptr->getdata();
       ptr++;
    }

}
