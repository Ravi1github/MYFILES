#include<stdio.h>
int binarysearch(int arr[],int h,int item)
{  int l=0,i=0;
int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]>item)

        {
          h=mid-1;

          mid=(h+l) /2;
        }
        else if(arr[mid]<item)
        {
            l=mid+1;
            mid=(l+h)/2;

        }
         if(arr[mid]==item)
        {
            return mid;
        }
    }
    return -1;

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
int size=sizeof(arr)/sizeof(arr[0]);
  printf("element found at index %d " , binarysearch(arr,size-1,8));
}

