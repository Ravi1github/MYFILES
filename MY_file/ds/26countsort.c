#include<stdio.h>
void countsort(int arr[],int n)
{
    //finding  max element
    int i,j,max=arr[0];
     for(i=0;i<n;i++)
     {
               if(arr[i]>max)
                max=arr[i];
     }
    //creating dynamic array
    int*count=(int*)malloc((max+1)*sizeof(int));
    //initalise the array element to zero
    for(i=0;i<n;i++)
    {
      count[i]=0;
    }
    //increment the corresponding index in count array
    for(i=0;i<n;i++)
    {
       count[arr[i]]= count[arr[i]]+1;

    }
    i=0;   //counter for count aarry
    j=0;   //counter for arr
    while(i<=max)
    {
        if(count[i]>0)
        {

            arr[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else
            i++;
    }


}
int main()
{
    int arr[100],i,j,n,t,low ,high;\


    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    countsort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
