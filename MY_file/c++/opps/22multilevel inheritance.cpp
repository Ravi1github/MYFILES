#include<iostream>
using namespace std;
class student
{
protected:
    int rollno;
public:
    void setroll(int);
    void getroll();
};
void student::setroll(int a)
{
    rollno=a;
}
void student::getroll()
{
    cout<<"roll no is "<<rollno<<endl;
}
//derived class

class exam : public student{
protected:

    float maths,physics;

public:
   void setmarks(float, float);
   void getmarks();

};
void exam::setmarks(float m1,float m2)
{
    maths=m1;
    physics=m2;

}
void exam::getmarks()
{
    cout<<"marks in maths is "<<maths<<endl;
    cout<<"marks in physics is "<<physics<<endl;
}
//another class=multilevel class
 class result:public exam{
 float percent;
 public:
     void display()
     {

         cout<<"the percentage is "<<(maths+physics)/2<<"%"<<endl;
     }
 };

int main()
{
  result harry;
  harry.setroll(12);
  harry.setmarks(94,91);
  harry.display();

}
