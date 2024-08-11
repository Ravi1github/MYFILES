#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*prev;
    struct node*next;
}list;
   list*head;
  void createnode(int n)
  {
      int i;
      list*temp;
      head=(list*)malloc(sizeof(list));
      if(head==NULL)
      {
          printf("No space\n");
      }
      else
      {   printf("enter the data\n");
         scanf("%d",&head->data);
          head->next=NULL;
          head->prev=NULL;
          temp=head;
      }
      for(i=2;i<=n;i++)
      {
          list*nwnode=(list*)malloc(sizeof(list));
          printf("enter the data\n");
          scanf("%d",&nwnode->data);
          temp->next=nwnode;
          nwnode->prev=temp;
          nwnode->next=NULL;
          temp=nwnode;


      }
  }
  list* show( list*head)
  {
       list*ptr=head;
        while(ptr!=NULL)
  {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
  }
      return head;
  }


  list*addbegin(list*head)
  {
      list*ptr=head;
    list*p=(list*)malloc(sizeof(list));
    printf("enter the value to add at first\n");
    scanf("%d",&p->data);
    p->next=ptr;
    ptr->prev=p;
    head=p;
    p->prev=NULL;
    return head;

  }

    list*addlast(list*head)
  {
      list*ptr=head;
    list*p=(list*)malloc(sizeof(list));
    printf("enter the value to add at last\n");
    scanf("%d",&p->data);
   while(ptr->next!=NULL)
   {
       ptr=ptr->next;
   }
   ptr->next=p;
   p->prev=ptr;
   p->next=NULL;
    return head;

  }



     list*add(list*head)
  {  int i=1,n;
      list*ptr=head;
    list*p=(list*)malloc(sizeof(list));
    printf("enter the postion to add vthe alue to add \n");
    scanf("%d%d",&n,&p->data);
   while(i!=n-1)
   {
       ptr=ptr->next;
   }
    p->next=ptr->next;
    p->prev=ptr;
    ptr->next=p;
    ptr->next->prev=p;

    return head;

  }


    list* delfirst(list*head)
    {
        list*ptr;
        ptr=head->next;
        head=ptr;
        ptr->prev=NULL;
        return head;
            }


    list*del(list*head)
    {   int i=1,n;
    printf("enter the node to delete\n");
    scanf("%d",&n);
        list*ptr=head;
        list*q=head->next;
        while(i!=n-1)
        {
            ptr=ptr->next;
            q=head->next;
        }
           ptr->next=q->next;
           q->prev=ptr;
      return head;
    }



list*dellast(list*head)
    {
        list*ptr=head;
     list*q=head->next;
        while(q->next!=NULL)
        {
            ptr=ptr->next;
           q=q->next;
        }
       ptr->next=q->next;
               return head;
    }

int main()
{
  int n;
  printf("enter the total node to add\n");
  scanf("%d",&n);
   createnode(n);

   printf("taversing\n\n");
 head= show(head);
 //add at begin
 head=addbegin(head);
  printf("after adding\n\n");
   head=show(head);
   //add last
   head=addlast(head);
    printf("after adding\n\n");
   head=show(head);
   //add at given node

    head=add(head);
    printf("after adding\n\n");
   head=show(head);

    // delete first
      head=delfirst(head);
    printf("after deleting the first node\n\n");
   head=show(head);
   //del postion
    head=del(head);
    printf("after deleting the given postion node\n\n");
   head=show(head);

    // delete last
    head=dellast(head);
    printf("after deleting the last node\n\n");
   head=show(head);



}
