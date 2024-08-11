#include<iostream>
using namespace std;
int fun(int arr[],int high,int s)
{   int  low=0;

     int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==s)
            return mid;
            if(arr[mid]>s)
            {
                high=mid-1;
                low=low;
            }
            else if(arr[mid]<s)
            {
                low=mid+1;
                high=high;
            }

    }
    return -1;


}
int main()
{
      int i,low=0,high,arr[10]={1,2,3,4,5,6,7,8,9,10};
      high=sizeof(arr)/sizeof(int);
        int s=8;
      int index=fun(arr,high-1, s);
      printf("element %d is found at index %d",s,index);
}

