#include<stdio.h>
struct node
{
  int data;
  struct node *link;
};
int main()
{
    struct node*first;
     struct node*second;
      struct node*third;
       first=(struct node*)malloc(sizeof(struct node));
      second=(struct node*)malloc(sizeof(struct node));
       third=(struct node*)malloc(sizeof(struct node));


        first->data=55;
        first->link=second;

        second->data=345;
        second->link=third;

        third->data=367;
        third->link=NULL;

        struct node *ptr;
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=4444;
        ptr->link=second->link;
        second->link=ptr;
        struct node *a=first;
        while(a!=NULL)
        {
            printf("%d\n",a->data);
            a=a->link;
        }

}

