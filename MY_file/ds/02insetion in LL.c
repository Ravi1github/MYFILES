#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
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

         struct node*a;
        a=(struct node*)malloc(sizeof(struct node));
        a->data=11;
        //insertion of link at begining
        a->link=first;
        while(a!=NULL)
        {
            printf("%d\n",a->data);
            a=a->link;
        }



}
