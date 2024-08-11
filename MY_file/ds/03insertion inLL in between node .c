#include<stdio.h>
typedef struct node
{
    int data;
    struct node *link;
}list;

  list* insert( list *head,int index)
{
    list *ptr=(list*)malloc(sizeof(list));
    list *p=head;
    int i=1;
    while(i!=index)
    {
        p=p->link;
        i++;
    }
    //insertion b/w a node
    ptr->link=p->link;
    p->link=ptr;
    ptr->data=121;
    return head;

}
int main()
{
      int c=0;
    list *first;
    list *second;
    list *third;
    first=(list*)malloc(sizeof(list));
    second=(list*)malloc(sizeof(list));
    third=(list*)malloc(sizeof(list));

    first->data=23;
    first->link=second;

    second->data=45;
    second->link=third;

    third->data=34;
    third->link=NULL;
    first=  insert(first ,1);

     struct node*a;
        a=(struct node*)malloc(sizeof(struct node));
         a=first;
        while(a!=NULL)
        {
            printf("%d\n",a->data);
            a=a->link;
        }





}

