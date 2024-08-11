#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *link;
}list;




void show(list*first)
{
    list*ptr=first;
    do{
         printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
   while(ptr!=first);

}
void deleting(list *first,int index)
{
    int i=2;
   list* ptr=first;
   list*q=first->link;
    while(i!=index)
    {
        ptr=ptr->link;
        q=q->link;
        i++;

    }
    ptr->link=q->link;
}


int main()
{
    struct node*first;
     struct node*second;
      struct node*third;
      struct node*fourth;
       first=(struct node*)malloc(sizeof(struct node));
      second=(struct node*)malloc(sizeof(struct node));
       third=(struct node*)malloc(sizeof(struct node));
      fourth=(struct node*)malloc(sizeof(struct node));



         first->data=1;
        first->link=second;

        second->data=2;
        second->link=third;

        third->data=33;
        third->link=fourth;

        fourth->data=4;
        //circular link generating
        fourth->link=first;


      deleting(first ,3);

       show(first);
}

