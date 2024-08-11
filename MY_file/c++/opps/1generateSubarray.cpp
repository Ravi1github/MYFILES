#include<iostream>
using namespace std;
int main()
{
    int  i,j,k ,sum=0,max;
    int arr[]={1,-2,3,4,5},n=5;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {      sum=0;
           for(k=i;k<=j;k++)
           {
               cout<<arr[k]<<" ";
               sum=sum+arr[k];
           }
           cout<<"\n";
           //finding max sum array
           if(max<sum){
            max=sum;
           }

        }
    }
    cout<<"\n max. sum of sub array : "<<max;
}
