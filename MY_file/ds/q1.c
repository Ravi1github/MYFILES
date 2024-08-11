#include<stdio.h>
typedef struct node
{
    int data;
    struct node *link;
}list;
  void insert(list *p,int index)
  {
    list *add;
    add=(list*)malloc(sizeof(list));
    add->data=121;
    list *ptr;
    ptr=p;
    while(1)
    {
        ptr=ptr->link;
        if(ptr->link==NULL)
        {
            ptr->link=add;
            add->link=NULL;
            break;


        }
    }
  }

int main()
{
      int index;
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

    insert(first,index);

     list *a;
     a=first;
     while(a!=NULL)
     {
         printf("%d\n",a->data);
         a=a->link;
     }






}

