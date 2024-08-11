#include<stdio.h>
#include<stdlib.h>
typedef struct queues
{
 int f;
 int r;
 int size;
 int *arr;
}queue;
void enqueue(queue*q,int val)
{
    int c;
    if(q->r==q->size-1)
    {
        printf("queue is full\n");
        return ;
    }
    else if(q->f==q->r&&q->f==-1)
    {
       q->f++;
       q->r++;
     c = q->arr[q->r]=val;
       printf("enqueue is element is %d\n",c);

    }
    else
    {
        q->r++;
        c=q->arr[q->r]=val;
       printf("enqueue is element is %d\n",c);
    }
  return ;

}
int dequeue(queue*q)
{
    if(q->f==q->r&&q->r==q->size-1)
    {
        printf("queue is empty\n");
        return -1;
    }
    else
    {
      int val=q->arr[q->f];
        q->f++;
        return val;

    }
}
int main()
{
   queue *q=(queue*)malloc(sizeof(queue));
   q->size=10;
   q->f=0;
   q->r=0;
   q->arr=(int*)malloc(q->size*sizeof(int));

  //bsf implentation

   int u;
   int i=0;
   int visited[7]={0,0,0,0,0,0,0};
   int adjency[7][7]={
   {0,1,1,1,0,0,0},
   {1,0,1,0,0,0,0},
   {1,1,0,1,1,0,0},

   {1,0,1,0,1,0,0},
   {0,0,1,1,0,1,1},
   {0,0,0,0,1,0,0},
   {0,0,0,0,1,0,0},
   };
   printf("%d ",i);
   visited[i]=1;
   //enqueue i for exploriation
   enqueue(q,i);
   while(q->r>0)
   {
       int node =dequeue(q);
       for(int j=0;j<7;j++)
       {
           if(adjency[node][j]==1 && visited[j]==0)
           {
               printf("%d ",j);
               visited[j]=1;
               enqueue(q,j);
           }
       }
   }
      return 0;

}

