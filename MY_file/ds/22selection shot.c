
#include<stdio.h>
int main()
{
    int arr[100],i,j,n,t,key,minindex;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
      minindex=i;
      for(j=i+1;j<n;j++)
      {
          if(arr[j]<arr[minindex])
            minindex=j;

      }

      t=arr[i];
      arr[i]=arr[minindex];
      arr[minindex]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
