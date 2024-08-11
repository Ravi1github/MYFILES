/* Overloading a binary operator using member operator function */

#include<iostream>
using namespace std;

class Marks
{
    int intmarks;
	int extmarks;
	public:
	      Marks()

	      {intmarks=0;extmarks=0;}

		  Marks(int a,int b)
		  {intmarks=a;extmarks=b;}
		  //operator overloading plus operator
		  Marks operator+(Marks rhs)
		  {
		     Marks temp;
		                    //p1+p2
			 temp.intmarks=intmarks+rhs.intmarks;
			 temp.extmarks=extmarks+rhs.extmarks;
			 return temp;
		  }
		  //declartion of minus oerator overloading
		  Marks operator-(Marks rhs);
		  void display()
		  {
		     cout<<"x="<<intmarks<<endl;
			 cout<<"y="<<extmarks<<endl;
		  }
};
//defining outside
//return-type  classname::function
Marks Marks::operator-(Marks rhs)
{
    Marks temp;

    temp.intmarks=intmarks-rhs.intmarks;
    temp.extmarks=extmarks-rhs.extmarks;
   return temp;

}

int main()
{
    Marks p1(100,20), p2(10,20);
	Marks p3;
	p3=p1+p2;// same as calling p1.operator+(p2)
	p3.display();
	p3=p1-p2;
	cout<<"minus\n";
    p3.display();
	return 0;
}
