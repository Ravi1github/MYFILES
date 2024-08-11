#include<iostream>
using namespace std;
//using template
//we can also pass the default value
template <class T>
class vector
{

public:
      T *arr;
    int size;
    vector(int m)
    {
        size=m;
        arr =new T[size];
    }
    T dotproduct(vector v){

    T d=0;
    int i;
    for(i=0;i<size;i++)
    {
        d+=this->arr[i]*v.arr[i];

    }
    return d;

    }
};
int main()
{     //telling the datatypes
  vector <float> v1(3);
    v1.arr[0]=2.2;
    v1.arr[1]=2;
     v1.arr[2]=1;
     vector <float>v2(3);
     v2.arr[0]=2;
     v2.arr[1]=2;
     v2.arr[2]=3;
     float a=v1.dotproduct(v2);
    cout<<a<<endl;
}
