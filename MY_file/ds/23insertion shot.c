#include<stdio.h>
int main()
{
    int arr[100],i,j,n,t,key;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)//loop for passes
    {
        key=arr[i];
        j=i-1;
      while(j>=0&&arr[j]>key)
      {
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=key;
   }
     for(i=0;i<n;i++)
        printf("%d ",arr[i]);


    }
