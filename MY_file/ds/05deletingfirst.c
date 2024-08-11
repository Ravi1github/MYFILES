#include<stdio.h>
typedef struct node
{
  int data;
  struct node *link;
}list;
//deleting first link
  list* firstdelete(list *first)
{
    list *ptr=first;
   first=first->link;
   free(ptr);

  return first;
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



        first->data=5;
        first->link=second;

        second->data=6;
        second->link=third;

        third->data=7;
        third->link=fourth;

        fourth->data=8;
        fourth->link=NULL;

      first=  firstdelete(first);
         list *a;
         a=first;

             while(a!=NULL)
             {
                 printf("%d\n",a->data);
                 a=a->link;
             }

}

