#include<iostream>
using namespace std;
int count=0;
class num
{
public:
    num()
    {
        count++;
        cout<<"this is the time when constructor is called for object "<<count<<endl;
    }
    //destructor declaration
    ~num()
    {

        cout<<"destructor is called "<<count<<endl;
        count--;
    }

};
int main()
{
    cout<<"we are inside the main\n";
   num n1;
   {
       cout<<"creating two more object \n";
       num n2,n3;  //creating two more object
   }
   cout<<"back to main\n";
}
