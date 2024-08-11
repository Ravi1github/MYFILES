#include<iostream>
using namespace std;
class shape
{

   private:
       int x,y;


    public:

          void getdata(int a,int b)
          {
         x=a;
         y=b;
          }
          void display()
          {
             cout<<"side are "<<x<<" "<<y<<endl;
          }

};
int main()
{
   shape s1;
   s1.getdata(3,4);
   s1.display();

}
//or
