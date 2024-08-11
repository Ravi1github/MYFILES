#include<stdio.h>
struct node
{
    int data;
    struct node*ptr;
};
void show(struct node*a )
{
    while(a!=NULL)
    {

        printf("%d\n",a->data);
        //address
       a=a->ptr;
    }
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
     //allocates memeory for link list
     first=(struct node*)malloc(sizeof(struct node));
      second=(struct node*)malloc(sizeof(struct node));
       third=(struct node*)malloc(sizeof(struct node));
        fourth=(struct node*)malloc(sizeof(struct node));
        //list fist and second node
        first->data=1;
        first->ptr=second;

        second->data=2;
        second->ptr=third;

        third->data=3;
        third->ptr=fourth;

        fourth->data=4;
        fourth->ptr=NULL;
         show(first);


}
