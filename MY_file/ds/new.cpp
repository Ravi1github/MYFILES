#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int pref(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='/'||ch=='*')
        return 2;
    else
        return 1;
}


void infixtopostfix()
{
    {
    int l,i=0;
    char ch;
    string exp,ans="";
    stack<char>st;
    cout<<"ENTER THE EXPRESSION TO FIND POSTFIX"<<endl;
    cin>>exp;
    exp=exp+")";
    st.push('(');
   l=exp.length();
   while(i<l)
   {
       ch=exp.at(i);
       if(ch=='(')
       {
        st.push(ch);
       }
        else if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch=='^')
       {
           while(st.top()!='(')
           {
               if(pref(st.top())>pref(ch))
               {
                   ans=ans+st.top();
                   st.pop();
               }
               else
               {
                   break;
               }
           }
           st.push(ch);
       }
       else if(ch==')')
       {
            while(st.top()!='(')
           {
                   ans=ans+st.top();
                   st.pop();
           }
           st.pop();
       }
       else
       {
           ans=ans+ch;
       }
       i++;
   }
       cout<<"THE POSTFIX  : "<<ans<<endl;

}

}

//postfix evaluator
void evaluate_postfix()
{
    int l,i=0,a,b;
    char ch;
    string exp,ans="";
    stack<int>st;
    cout<<"ENTER THE EXPRESSION TO EVALUATE"<<endl;
    cin>>exp;
   l=exp.length();
   while(i<l)
   {
       ch=exp.at(i);
    if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch=='^')
       {
           switch(ch)
           {
           case '+' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a+b);
            break;
            case '-' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b-a);
            break;
            case '/' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b/a);
            break;
            case '*' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a*b);
            break;
            case '^' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(pow(a,b));
            break;
            default:
                cout<<"FUCK";
           }
           //cout<<st.top()<<endl;
        }
       else
       {
           a=(int)ch-48;
           st.push(a);
       }
       i++;
   }
       cout<<"THE ANSWER  : "<<st.top()<<endl;
}
//infix to prefix
void infixtoprefix()
{
    int l,i=0;
    char ch;
    string exp,ans="";
    stack<char>st;
    cout<<"ENTER THE EXPRESSION TO FIND INFIX"<<endl;
    cin>>exp;
    reverse(exp.begin(),exp.end());
    exp=exp+"(";
    st.push(')');
   l=exp.length();
   while(i<l)
   {
       ch=exp.at(i);
       if(ch==')')
       {
        st.push(ch);
       }
        else if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch=='^')
       {
           while(st.top()!=')')
           {
               if(pref(st.top())>pref(ch))
               {
                   ans=ans+st.top();
                   st.pop();
               }
               else
               {
                   break;
               }
           }
           st.push(ch);
       }
       else if(ch=='(')
       {
            while(st.top()!=')')
           {
                   ans=ans+st.top();
                   st.pop();
           }
           st.pop();
       }
       else
       {
           ans=ans+ch;
       }
       i++;
   }
   reverse(ans.begin(),ans.end());
       cout<<"THE INFIX  : "<<ans<<endl;

}

//prefix evaluation
void prefix_evaluation()
{
    int l,i=0,a,b;
    char ch;
    string exp,ans="";
    stack<int>st;
    cout<<"ENTER THE EXPRESSION TO EVALUATE"<<endl;
    cin>>exp;
    reverse(exp.begin(),exp.end());
   l=exp.length();
   while(i<l)
   {
       ch=exp.at(i);
    if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch=='^')
       {
           switch(ch)
           {
           case '+' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a+b);
            break;
            case '-' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a-b);
            break;
            case '/' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a/b);
            break;
            case '*' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a*b);
            break;
            case '^' :
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(pow(a,b));
            break;
            default:
                cout<<"FUCK";
           }
           //cout<<st.top()<<endl;
        }
       else
       {
           a=(int)ch-48;
           st.push(a);
       }
       i++;
   }
       cout<<"THE ANSWER  : "<<st.top()<<endl;

}









int main()
{ int  i=1;
    while(i!=5)
    {
        printf("press 1 for infix to postfix\n press 2 to evlaute postfix\n press 3 for infix to prefix\n press 4 for prefix evaluation\n press 5 to exit\n");
        cin>>i;
        switch(i)
        {
        case 1:
            {
                infixtopostfix();
                break;
            }
        case 2:
            {
                evaluate_postfix();
                break;
            }
        case 3:
            {
                infixtoprefix();
                break;
            }
        case 4:
            {
                prefix_evaluation();
                break;
            }

        }

    }
}

