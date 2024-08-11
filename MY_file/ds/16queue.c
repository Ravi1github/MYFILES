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
        return;
    }
    else if(q->f==q->r&&q->f==-1)
    {
       q->f++;
       q->r++;
     c= q->arr[q->r]=val;
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
   queue *q =(queue*)malloc(sizeof(queue));
   q->size=10;
   q->f=-1;
   q->r=-1;
   q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
     //dequeue
    int val= dequeue(q);
     printf("dequeue is element is %d\n",val);


      return 0;

}
