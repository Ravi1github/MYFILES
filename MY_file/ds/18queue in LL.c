#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*link;
}node;


node*f=NULL;
   node*r=NULL;//making global

void enqueue(int val)
{
    node*n=(node*)malloc(sizeof(node));
    if(n==NULL)
    {
        printf("queue is full\n");
    }
    else if(f==NULL&&r==NULL)
    {
        f=r=n;
        n->data=val;
        n->link=NULL;
    }



        else
        {    n->data=val;
             n->link=NULL;
            r->link=n;
            r=n;  //rear move karna hai
        }


}
 int dequeue()
{
    int val;
    node*ptr=f;
    if(f==NULL)
    {
        printf("queue is empty\n");
        return -1;
    }
    else
    {
      val=f->data;
        f=f->link;
        free(ptr);
        return val;
    }

}


  void show(node*f)
{
    node*ptr=f;
    printf("\n");
    while(ptr!=NULL)
    {
        printf(" element is %d \n",ptr->data);
        ptr=ptr->link;
    }
}


int main()
{

   enqueue(12);
   enqueue(13);
  enqueue(14);
     show(f);
     dequeue();
     int a= dequeue();
      printf("dequeue element is %d\n",a);

}
