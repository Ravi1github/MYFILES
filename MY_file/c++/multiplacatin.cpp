#include<iostream>
using namespace std;
int main()
{
    int i,j,arr1[3][3],arr2[3][3],sum,mult[3][3];
    cout<<"enter the array\n";
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
        cin>>arr1[i][j];

    }  cout<<"enter the array 2\n";
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
        cin>>arr2[i][j];

    } cout<<"multiply\n";

     for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {   sum=0;
        for(int k=0;k<3;k++)
         sum= sum + arr1[i][k]*arr2[k][j];
          mult[i][j]=sum;
    }

}
 for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
     cout<<mult[i][j]<<" ";
     cout<<"\n";
    }
}
