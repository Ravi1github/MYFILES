#include<stdio.h>
void quickshot(int arr[],int low,int high)
{
    int partitionIndex;
    if(low<high)
    {

    partitionIndex=partition(arr,low,high);
    quickshot(arr,low,partitionIndex-1);    //sort left subarray
    quickshot(arr,partitionIndex+1,high);  //sort right subarray
    }

}
int partition (int arr[],int low,int high)
{
    int temp,pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<j){
    while(arr[i]<pivot)
    {
        i++;
    }
     while(arr[j]>pivot)
    {
        j--;
    }
    if(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }
       //yaha par j<i
    //aur j pivot element ke badd wala index hai
    // now making the pivot element 1step forward
    temp=arr[low];
        arr[low]=arr[j];
        arr[j]=temp;
        return j;
}

int main()
{


    int arr[100],i,j,n,t,key,minindex;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quickshot(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);


}
