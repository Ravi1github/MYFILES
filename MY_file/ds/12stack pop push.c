#include<stdio.h>
#include<stdlib.h>
 typedef struct stack
{
  int size;
  int top;
  int*arr;
}stack;

void push(stack*s)
{

    if(s->top >=s->size-1)
    {
        printf("stack overflow\n ");
        return ;
    }
    else{
            //incresing the pointer
        s->top++;
    s->arr[s->top]=22;
    //adding  more element
     s->top++;
    s->arr[s->top]=87;
    s->top++;
    s->arr[s->top]=80;
    s->top++;
    s->arr[s->top]=812;
    }
}
int pop(stack *s)
{
    if(s->top<0)
    {
        printf("stack is emptty\n");
        return 0;
    }
    else{
        int val=s->arr[s->top];

        s->top--;
        return val;

    }
}
int peek(stack*s)
{  int i;
    printf("enter the postion to see the element\n");
    scanf("%d",&i);
    if(s->top-i+1<0)

        {
        printf("invalid postion\n");
       return -1;
        }
       else {
        int val=s->arr[s->top-i+1];
        return val;
       }
}
int pushall(stack*s,int i)
{
    int  val=s->arr[s->top-i+1];
    return val;
}
int main()
{
    stack*s=(stack*)malloc(sizeof(stack));
     s->size=5;
    s->arr=(int*)malloc(s->size*sizeof(int));

    s->top=-1;
    //push to add element;

    push(s);
    //pop
  int d=pop(s);
  printf("%d element is popped from stack\n",d);
  //peek mean see the element from top position
 int m=peek(s);
 printf("element is %d\n",m);
 int i;
   //to see all element
   printf("\n\nto see all element\n");
   for(i=1;i<=3;i++)
   {
       printf("element at %d postion is %d\n",i,pushall(s,i));
   }

}
