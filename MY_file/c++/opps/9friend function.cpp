#include<iostream>
using namespace std;
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
    // friend fun declaration for using private data for outsider function
    friend complexx sumcomplex(complexx,complexx );


    void displaydata()
    {
        cout<<"number is "<<a<<"+i"<<b<<endl;
    }
};
//declartion outside because it is a outsider function
complexx sumcomplex(complexx c1,complexx c2)
{
    complexx temp;
    temp.a=(c1.a+c2.a);
    temp.b=(c1.b+c2.b);

    return temp;


}
int main()
{
    complexx c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(2,5);
    // c3.setdata(c1.a+c2.a,c1.b+c2.b)  is not possible because the are in private so we use friend function
    c3=sumcomplex(c1,c2);
    c3.displaydata();
}
