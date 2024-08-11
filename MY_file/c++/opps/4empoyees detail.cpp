#include<iostream>
#include<string>
using namespace std;
class empolyee
{
private:
    string name;
    int acc_no;
    double salary;

public:

  void data()
  {
      cout<<"enter the data of employee 1\n";
      cin>>name>>acc_no>>salary;

  }
  void display()
  {
      cout<<name<<"  "<<acc_no<<" "<<salary<<endl;
  }

};

int main()
{
   empolyee e1;
   e1.data();  //e1.name show error
   e1.display();

}
