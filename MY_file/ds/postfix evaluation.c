#include<stdio.h>
int stack[20],top=-1;
void push(int val)
{
    top++;
    stack[top]=val;
}
int pop()
{
    int val=stack[top];
    top--;
    return val;
}
int stacktop()
{
    return stack[top];
}
void fun(char*infix)
{    int i=0;
    while(infix[i]!='\0')
    {
        if(infix[i]>='0'&&infix[i]<='9')
        {
            int n=infix[i]-48;
            push(n);

        }

        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/')
        {

        int num1=pop();
        int num2=pop();
        int num3;
         switch(infix[i])
         {
         case '+':
             {
                 num3=num2+num1;
                 break;
             }
              case '-':
             {
                 num3=num2-num1;
                 break;
             }
              case '*':
             {
                 num3=num2*num1;
                 break;
             }
              case '/':
             {
                 num3=num2/num1;
                 break;
             }

         }
         push(num3);


        }
       i++;
    }
    printf("%d\n",stack[top]);
    return;
}
int main()
{
    char*postfix="245+*";
    fun(postfix);
}

