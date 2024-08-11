#include<iostream>
using namespace std;

//predeclaration that means class exist later

 class complexx;

 class calculator
{
private:
public:

    //declaration
    int sumreal_complex(complexx ,complexx );


};
 //another class
class complexx
{
private:
    int a,b;
public:
    void setdata(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    //individually declaration of friends

    friend int calculator::sumreal_complex(complexx a1,complexx a2);
     //or
    //declaration of entire class as friend
    //friend class calculator;

    void displaydata()
    {
        cout<<"number is "<<a<<"+i"<<b<<endl;
    }
};

int calculator::sumreal_complex(complexx a1,complexx a2)
{
    return a1.a+a2.a;
}


int main()
{
    complexx c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(3,5);
    calculator calc;
     int result=calc.sumreal_complex(c1,c2);
    cout<<"the sum of real part is "<<result<<endl;

}
