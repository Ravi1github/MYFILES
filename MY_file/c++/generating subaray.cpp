#include<iostream>
using namespace std;
int main()
{
    int i,j,sum,newsum=0,k,arr[12];
for(i=0;i<5;i++)
    cin>>arr[i];
//generating subarray
for(i=0;i<5;i++)
{
    for(j=i;j<5;j++)
    {    sum=0;
        for(k=i;k<=j;k++) {

            cout<<arr[k]<<" ";
            //finding sum of max in subarray
             sum=sum+arr[k];
                   } if(newsum<sum)
                   newsum=sum;
        cout<<"\n";

    }
}  cout<<"max value of sum of subarray is "<<newsum;
}
