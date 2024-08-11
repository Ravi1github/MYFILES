#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *link;
}list;
//deleting index between link
  list* firstdelete(list *first,int value)
  {
      list*ptr=first;
      list*q=first->link;
      while(q->data!=value&&q->link!=NULL)
      {
          q=q->link;
          ptr=ptr->link;
      }
      if(q->data==value)
      {
     ptr->link=q->link;
     free(q);
      }
      return first;
  }
int main()
{
    int value;
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

        third->data=3;
        third->link=fourth;

        fourth->data=4;
        fourth->link=NULL;
        printf("enter the value to delete\n");
        scanf("%d",&value);

      first=firstdelete(first,value);
         list *a;
         a=first;

             while(a!=NULL)
             {
                 printf("%d\n",a->data);
                 a=a->link;
             }

}

