#include<iostream>
using namespace std;

class student
{
    int age;
    string name;

	public:


		  student(string s, int a)
		  {

		      age=a;
		      name=s;
          }


		  void display()
		  {
		     cout<<<<name<<" "<<age<<" "endl;

		  }
		  //return type is operator
		  //new operator
		  student* operator new(size_t size)
		  {
		      void*pointer;
		      cout<<"overloaded size "<<size<<endl;
		      pointer=malloc(size);

		      if(!pointer)
              {
                  bad_alloc ba;
                  throw ba;
              }

              return pointer;
		  }
		  //delete operator

		  void operator delete(void*pointer){

		  cout<<"overloaded delete\n";
		  free(pointer);
		  }

};


int main()
{
   student *anilptr;
   anilptr=new student("anil",24);
   anilptr.display();
}



