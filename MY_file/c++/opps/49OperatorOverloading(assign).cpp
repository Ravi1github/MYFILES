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

		  void operator+=(int bonusmarks)
		  {
		     marks=marks+bonusmarks;
		  }
		  void display()
		  {
		     cout<<"marks="<<marks<<endl;

		  }
		  //making friend non-member function
                                    //reference is passed
		  friend void operator-=( Marks &m1, int minusmarks);
};
//for non member function
void operator-=(Marks &m1, int minusmark)
{
    m1.marks=m1.marks-minusmark;
}

int main()
{
   Marks m1(30);
   //assign operator;
   m1+=10;
   m1.display();
   m1-=20;
   m1.display();
	return 0;
}
