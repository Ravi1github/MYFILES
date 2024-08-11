#include<stdio.h>
void mergeshot(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeshot(arr,low,mid);
        mergeshot(arr,mid+1,high);
       merge(arr,low,mid,high);
    }

}
void merge(int arr[],int low,int mid,int high)
{
    int i,j,k=low,b[100];
    i=low;
    j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(arr[i]>arr[j])
        {
            b[k]=arr[j];
            k++;
            j++;
        }
        else if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            k++;
            i++;
        }

    }
    while(i<=mid)
    {
        b[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        b[k]=arr[j];
        k++;
        j++;
    }
    for(i=0;i<=high;i++)
    {
        arr[i]=b[i];
    }
}


int main()
{
    int arr[100],i,j,n,t,low ,high;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   mergeshot(arr,0,n-1);
  for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

}

