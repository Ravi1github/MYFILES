#include<stdio.h>
int main()
{
int x,n,i,j;
printf("Enter the array size\n");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements\n");
scanf("%d",&arr[0]);
int size=1;
for(i=1;i<n;i++)
{
scanf("%d",&x);
for(j=size-1;j>=0;j--)
{
    if(arr[j]>x)
        arr[j+1]=arr[j];
    else
        break;
}
arr[j+1]=x;
size++;
}
printf("THE ARRAY ELEMENTS IN SORTED ORDER\n");
for(i=0;i<n;i++)
{
printf("%d  ",arr[i]);
}
}

