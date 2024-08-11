#include<stdio.h>
int main()
{
  int n,i,num,pos,arr[12]={12,45,67,45,100,79,80,78,890,78};
  printf("enter the postion to delete\n");
  scanf("%d",&n);
    for(i=n-1;i<10;i++)
   {

    arr[i]=arr[i+1];

    }
    for(i=0;i<9;i++)
    printf("%d ",arr[i]);
}

