#include<stdio.h>
int main()
{
    int arr[100],i,j,n,t;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //bubble shot
    for(i=0;i<n-1;i++) //for no of passes   //for n elemennt we reqired n-1 passes
    {
        for(j=0;j<n-1;j++)//comparison in each pass
        {
            if(arr[j]>arr[j+1])
            {
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

