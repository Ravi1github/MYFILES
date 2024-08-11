#include<iostream>
using namespace std;
class empolyee
{
  private:
    int id;

    //yeh zero se start hoke ruk jayega
    //it is a static data member
    static  int counter;
public:
    void setdata()
    {
        cout<<"enter the id\n";
        cin>>id;
        counter++;

    }
    void getdata()
    {
        cout<<"id of "<< counter<<" is "<<id<<endl;
    }


};
//isko class ke bahar declare kiya jata hai
 int empolyee::counter;//default value is zero ,here we can assign the value to it like
 //int empolyee::counter=1000;
int main()
{
    empolyee harry,rohan,ravi;
    harry.setdata();
    harry.getdata();



     rohan.setdata();
     rohan.getdata();


     ravi.setdata();
    ravi.getdata();

}
