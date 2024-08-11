#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*link;
}list;

 list*first;
  void createnode(int n)
  {
      int i;
      list*temp;
      first=(list*)malloc(sizeof(list));
      if(first==NULL)
      {
          printf("No space\n");
      }
      else
      {   printf("enter the data\n");
         scanf("%d",&first->data);
          first->link=NULL;
          temp=first;
  }
       for(i=2;i<=n;i++)
       {
           list *newnode=(list*)malloc(sizeof(list));
           printf("enter the data\n");
           scanf("%d",&newnode->data);
           temp->link=newnode;
           newnode->link=first;
           temp=newnode;

       }

  }
 list* show(list*first)
 {
     list*ptr=first;
     do{
         printf("%d\n",ptr->data);
        ptr=ptr->link;
     }
     while(ptr!=first);
 }
 list* insertbegin(list*first)
 {
     list*ptr=(list*)malloc(sizeof(list));
     printf("enter the data to add at first\n");
     scanf("%d",&ptr->data);
     list*p=first;
     while(p->link!=first)
     {
         p=p->link;
     }
    p->link=ptr;
     ptr->link=first;
     first=ptr;
     return first;

 }
 list* insertlast(list*first)
 {
     list*ptr=(list*)malloc(sizeof(list));
      printf("enter the data to add at last\n");
     scanf("%d",&ptr->data);
     list*p=first;
     while(p->link!=first)
     {
         p=p->link;
     }
     p->link=ptr;
     ptr->link=first;
     return first;
 }



  list* insert(list*first)
 {  int i=1,n;
     list*ptr=(list*)malloc(sizeof(list));
      printf("enter node and the data to add \n");
     scanf("%d %d",&n,&ptr->data);
     list*p=first;
     while(i!=n)
     {
         p=p->link;
         i++;
     }
     ptr->link=p->link;
     p->link=ptr;
     return first;
 }
  list*delfirst(list*first)
   {
       list*p=first;
       list*q=first->link;
       while(p->link!=first)
       {
           q=q->link;
           p=p->link;
       }
       p->link=q->link;
       return p->link;

}

    list*dellast(list*first)
   {
        list*p=first;
       list*q=first->link;
       while(q->link!=first)
       {
           q=q->link;
           p=p->link;
       }
       p->link=q->link;
       return first;
   }
    list* del(list*first)
    {
        int i=1,n;
        printf("enter the postion to delete\n");
        scanf("%d",&n);
        list *p=first;
        list*q=first->link;
        while(i!=n-1)
        {

            p=p->link;

            q=q->link;
        }
       p->link=q->link;
       return first;
    }
int main()
{
    int n;
  printf("enter the total node to add\n");
  scanf("%d",&n);
   createnode(n);

         first=show(first);
         //at the begining

         first=insertbegin(first);
         printf("after adding\n\n");
         first=show(first);

         //insertion at last
           first=insertlast(first);
           printf("after adding\n\n");
         first=show(first);
         //insert at given node

        first=insert(first);
         printf("after adding\n\n");
         first=show(first);

           //deleting the first node
         first=delfirst(first);
         printf("after deleting first node\n\n");
         first=show(first);

         //deleting last node

    first= dellast(first);
     printf("after deleting last node\n\n");
     show(first);
     //del node
      first= del(first);
     printf("after deleting  node\n\n");
     show(first);
}

