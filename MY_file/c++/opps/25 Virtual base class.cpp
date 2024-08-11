#include<iostream>
using namespace std;
/*
student->sport,test-> result
*/
class student
{
protected:
    int rollno;
public:
    void setroll(int a)
    {
        rollno=a;
    }
    void printroll()
    {
        cout<<"roll no is "<<rollno<<endl;
    }
};
//making virtual class
class test : virtual public student
{
protected:
    float maths,physics;
public:
    void setmarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void showmarks()
    {
        cout<<"marks in maths: "<<maths<<endl;
        cout<<"marks in physics: "<<physics<<endl;
    }
};

//making virtual class
class sport:virtual public student
{
protected:
    float score;
public:
    void setscore(int sc)
    {
        score=sc;
    }
    void showscore()
    {
        cout<<"sport sccore is "<<score<<endl;
    }
};
//another class
class result:public sport,public test
{
protected:
    float total;
public:
    void display()
    {
        total=maths+physics+score;
        printroll();
        showmarks();
        showscore();
        cout<<"your total marks is: "<<total<<endl;

    }
};

int main()
{
   result harry;
   harry.setroll(41);
   harry.setmarks(80,91);
   harry.setscore(90);
   harry.display();
}

