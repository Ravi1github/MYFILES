#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
  int data;
struct node*next;
}node;
//global declare
 node*top=NULL;
   int isfull(node*top)
{
   node*p=(node*)malloc(sizeof(node));
   if(p==NULL)
        return 1;

   else return 0;

} node* push(node*top,int val)
 {
          if(isfull(top))
     {
         printf("stack is full\n");

     }
     else
     {
          node*p=(node*)malloc(sizeof(node));
          p->data=val;
          p->next=top;
          top=p;
          return top;
     }
 }


void show(struct node*top )
{
    node*ptr=top;
    while(ptr!=NULL)
    {

        printf("%d\n",ptr->data);
        //address
       ptr=ptr->next;
    }
}


//pop
node* pop(node*top)
{
    if(top==NULL)
    {
        printf("stack is underflow");

    }
    else{
        node*ptr=top;
        int val=ptr->data;
        top=top->next;
        free(ptr);
        printf("%d poped element\n",val);

    }
    return top;
}
int peek(node*top,int pos)
{
    node*ptr=top;

    //null is so we do not move forwaard
    for(int i=1;i<pos-1&&ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
        return ptr->data;
    else return -1;
}
int main()
{

    isfull(top);
    //push in stack by ll
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    top=push(top,6);
     top=push(top,7);
      top=push(top,8);
    show(top);

    //pop

    top=pop(top);
   top= pop(top);
    //peek at postion 2
   printf("element is %d\n" ,peek(top,4));

}
