#include<iostream>
using namespace std;
int main()
{
    int arr[23];
    cout<<"enter the array\n";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int min=arr[i],max=arr[i];
     for(int i=0;i<10;i++)
    {
      if(min>arr[i])
            min=arr[i];
      if(max<arr[i])
        max=arr[i];
    }  cout<<"maxx="<<max<<"min = "<<min;

}
