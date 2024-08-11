#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
      else return 0;
  }
  char stacktop(stack*s)
  {
      return s->arr[s->top];
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
//precedence defining
int precedence(char ch)
{
    if(ch=='*'||ch=='/')
        return 3;
    if(ch=='+'||ch=='-')
        return 2;
    return 0;
}
int isoperator(char ch)
 {
     if(ch=='+'||ch=='-'||ch=='*'|| ch=='/')
        return 1;
     else return 0;
 }
   char*infixtopost(char*infix)
   {

   stack*s=(stack*)malloc(sizeof(stack));
   s->size=20;
   s->top=-1;
   s->arr=(char*)malloc(s->size*sizeof(char));
   char*postfix=(char*)malloc(strlen(infix+1)*sizeof(char));
   int i=0;//track infix traversal
   int j=0; //track postfix addition
   while(infix[i]!='\0')
   {    if(!isoperator(infix[i]))

       {
        postfix[j]=infix[i];
        i++;
        j++;
       }
        else {
            if(precedence(infix[i])>precedence(stacktop(s)))
              {
               push(s,infix[i]);
                   i++;
              }
              else{
                postfix[j]=pop(s);
                j++;
              }

        }
   }
        while(!isempty(s))
       {
           postfix[j]= pop(s);
            j++;


       }
       postfix[j]='\0';
       return postfix;



   }




int main()
{
   char*infix="x-(y/z)-(k*d)";
   printf("postfix is %s\n",infixtopost(infix));
     return 0;
}
