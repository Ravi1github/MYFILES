#include<iostream>
using namespace std;

class Marks
{
    int marks;

	public:
	      Marks()

	      {
	          marks=0;
           }

		  Marks(int a)
		  {
		      cout<<"constructor is called\n";
		      marks=a;
          }


		  void display()
		  {
		     cout<<"marks="<<marks<<endl;

		  }
		  Marks operator()(int a)
		  {
		       cout<<"function operator is called\n";

		      marks=a;
		      return *this;
		  }
		  //arrow pointer its return type is pointer
		  Marks* operator->()
		  {
              cout<<"arrow fun.\n";
		      return this;
		  }

};


int main()
{
   Marks m1(45);//constructor is callled
   m1.display();
   m1(15);//function operator is called
   m1.display();
   m1->display();//arrow function called
	return 0;
}


