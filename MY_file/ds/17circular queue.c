#include<stdio.h>
typedef struct queue
{
   int f;
   int size;
   int r;
   int *arr;
}queue;
int isfull(queue*q)
{
    if((q->r+1)%q->size==q->f)
    {

        printf("queue is full\n");
        return 1;
}
    else
        return 0;
}
int isempty(queue*q)
{
    if(q->r==q->f&&q->f==-1)
    {
        printf("queue is empty\n");
        return 1;
    }
    else
        return 0;
}
void enqueue(queue*q,int val)
{
    if(isfull(&q))
        printf("queue is full\n");
    else

   q->r=(q->r+1)%q->size;
   q->arr[q->r]=val;
   printf("enqueue element is %d\n",q->arr[q->r]);
   return;

}
int dequeue(queue*q)
{
    if(isempty(&q))
    {
        printf("empty\n");
        return -1;

    }
    else
    {
        q->f=(q->f+1)%q->size;
        int a=q->arr[q->f];
         printf("dequeue element is %d\n",a);
        return a;
    }

}

int main()
{
    queue q;
    q.size=10;
    q.f=-1;
    q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    //inserting
    enqueue(&q,1);
     enqueue(&q,2);
    isempty(&q);
    isfull(&q);
    //deleting
      dequeue(&q);

}
