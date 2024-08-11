/*   Overloading a binary operator using member operator function */

#include<iostream>
using namespace std;

class Point
{
    int intmarks;
	int extmarks;
	public:
	      Point()

	      {intmarks=0;extmarks=0;}

		  Point(int a,int b)
		  {intmarks=a;extmarks=b;}
		  //operator overloading plus operator
		  Point operator+(Point rhs)
		  {
		     Point temp;
		                    //p1+p2
			 temp.intmarks=intmarks+rhs.intmarks;
			 temp.extmarks=extmarks+rhs.extmarks;
			 return temp;
		  }
		  //declartion of minus oerator overloading
		  Point operator-(Point rhs);
		  void display()
		  {
		     cout<<"x="<<intmarks<<endl;
			 cout<<"y="<<extmarks<<endl;
		  }
};
//defining outside
//return-type  classname::function
Point Point::operator-(Point rhs)
{
    Point temp;

    temp.intmarks=intmarks-rhs.intmarks;
    temp.extmarks=extmarks-rhs.extmarks;
   return temp;

}

int main()
{
    Point p1(100,20), p2(10,20);
	Point p3;
	p3=p1+p2;// same as calling p1.operator+(p2)
	p3.display();
	p3=p1-p2;
	cout<<"minus\n";
    p3.display();
	return 0;
}
