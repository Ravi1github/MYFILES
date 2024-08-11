#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;
}stack;
int isfull(stack*s)
{
    if(s->top==s->size-1)
        return 1;
    else
        return 0;
}
int isempty(stack*s)
{
    if(s->top<0)
        return 1;
    else
        return 0;
}
void push(stack *s ,int val)
{
    if(isfull(s))
       printf("stack is full\n");
    else

    s->top++;
    s->arr[s->top]=val;

}
 void traversing (stack *s)
 {
     int i;
     for(i=s->top;i>=0;i--)
     {
         printf("push element is %d\n",s->arr[i]);
     }
 }
 int pop(stack*s)
{
    if(isempty(s))
    {
        printf("stack is empty\n");
        return -1;
    }
    else
       {
        int val=s->arr[s->top];
        s->top--;
    return val;
       }

}
void peek(stack*s)
{  int i;
    printf("enter the postion to see from top\n");
    scanf("%d",&i);
    if(s->top-i+1<0)
        printf("invalid position\n");
    else
    {
       printf("element is %d\n",s->arr[s->top-i+1]);
    }
}
int main()
{
    stack *s= (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=10;
   s->arr=(int*)malloc(s->size*sizeof(int));
   push(s,12);
   push(s,13);
   push(s,14);
   push(s,15);
   traversing(s);
   printf("popped element is %d\n",pop(s));

    peek(s);
}
