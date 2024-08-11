
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int top;
    int size;
    char*arr;

}stack;
  int isfull(stack*s)
  {
      if(s->top>=s->size-1)
        return 1;
      else 0;
  }
  int isempty(stack*s)
  {
      if(s->top<0)
        return 1;
      else
        return 0;
  }
void push(stack*s,char val)
{

        s->top++;
    s->arr[s->top]=val;
    return;


}
char pop(stack *s)
{

        char val=s->arr[s->top];
s->top--;
     return val;


}
int parenthesismatch(char*exp)
{
   stack*s=(stack*)malloc(sizeof(stack));
   s->size=10;
   s->top=-1;
   s->arr=(char*)malloc(s->size*sizeof(char));
   for(int i=0;exp[i]!='\0';i++)
   {
       if(exp[i]=='(')
            push(s,exp[i]);

            else if(exp[i]==')')
            {
                if(isempty(s)){
                    return 0;
                }
                pop(s);
            }
   }
    if(isempty(s))
                return 1;
            else
                return 0;

}
int main()
{
    char*exp="(8+3*(2+3))";
   if  (parenthesismatch(exp))
   {
        printf("match\n");
   }
   else printf("not match\n");

}
