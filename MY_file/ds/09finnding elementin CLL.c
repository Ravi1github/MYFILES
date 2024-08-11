#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *link;
}list;
    int find(list*first,int item)
    {   int i=1;
          list*ptr=first->link;
          while(ptr!=first)
          {

              if(ptr->data==item)
                return i++;

                else
                {
                    ptr=ptr->link;
                    i++;

                    }
          }
          if(ptr==first)
            return NULL;
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
     int loc= find(first,33);
     printf("%d\n",loc);


}

