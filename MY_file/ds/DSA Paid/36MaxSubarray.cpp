#include<iostream>
using namespace std;
int maxsum(int arr[],int n)
{


     int maxsum_now=0;
     int currentsum=0;
     for(int i=0;i<n;i++)
     {
       currentsum=currentsum+arr[i];
       if(currentsum<0)
       {
           currentsum=0;
       }
       maxsum_now=max(currentsum,maxsum_now);
     }
     return maxsum_now;
}

int main()
{
    int arr[20];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<maxsum(arr,10)<<endl;;

}
