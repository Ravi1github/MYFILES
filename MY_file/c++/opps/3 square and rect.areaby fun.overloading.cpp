#include<iostream>
using namespace std;
class shape
{
 //   private:

        int x,y;

    public:

          void getdata()
          {
        cout<<"enter the side of square or rectangle\n";
        cin>>x>>y;
          }


        int area(int a,int b)
        {
            return a*b;
        }


        //its declaration

        int area(int a);
        void display();

        void check()
        {
            if(x==y)
            {
                cout<<"it is sqaure\n the area is :\n";

               cout<< area(x);
            }
           else{  cout<<"it is rectangle\n the area is :\n";

               cout<< area(x,y);
        }
        }


};
int main()
{
   shape s1;
   s1.getdata();

   s1.display();
   s1.check();



}
//or
void shape :: display()
          {
              cout<<"side are "<<x<<" "<<y<<endl;
          }
  int shape :: area(int a )
  {
      return a*a;
  }

