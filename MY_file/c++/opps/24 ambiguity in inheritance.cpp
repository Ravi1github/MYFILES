#include<iostream>
using namespace std;
class base1{
public:
    void greet()
    {
        cout<<"how are you\n";
    }
};

class base2{
public:
    void greet()
    {
        cout<<"kaise ho\n";
    }
};
class derived:public base1,public base2
{
public:
    //solving ambiguty
void greet()
    {
        //ambiguity resolution by class base1
        base1::greet();
    }


};
int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    //creating ambigiuty
    d.greet();
}
