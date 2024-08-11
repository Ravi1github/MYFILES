/* Overloading a binary operator using member operator function */

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
		      marks=a;
          }

		  void operator++()
		  {
		     marks=marks+1;

		  }
		  void display()
		  {
		     cout<<"marks="<<marks<<endl;

		  }
		  //making friend non-member function
                                    //reference is passed
		  friend void operator--( Marks &m);
};
//for non member function
void operator--(Marks &m1)
{
    m1.marks-=1;
}

int main()
{
   Marks m1(30);
   // pre-increment operator;
   ++m1;
   m1.display();
   --m1;
   m1.display();
	return 0;
}

