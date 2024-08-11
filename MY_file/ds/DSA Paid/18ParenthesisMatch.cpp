#include<iostream>
#include<stack>
using namespace std;
int parenCheck(char s[])
{
    int i=0;
    char ch;
    stack <char>s1;
    while(s[i]!='\0')
    {
        ch=s[i];
        if(ch=='(')
        {
            s1.push(ch);
        }
        if(ch==')')
        {
            if(s1.empty())
            {
                return 0;
            }
            else{
                s1.pop();
            }
        }
        i++;
    }
    if(s1.empty())
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char s[]="((a+b)+((c-d)))";
    if(parenCheck(s)){
        cout<<"yes\n";
    }
    else
        cout<<"no\n";
}
