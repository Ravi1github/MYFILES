#include<iostream>
using namespace std;
int main()
{
    //new keyword create Dynamic Memory Allocation
    int* p=new int(12);
    //*p=18;
    cout<<*p<<endl;
    //deleting
    delete p;
   cout<<*p<<endl;

    //array
    int*arr=new int[5];
    arr[0]=1;
    cout<<arr[0];
     delete[] arr;



}
