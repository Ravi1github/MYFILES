#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
node(int d)
{
  data=d;
    next=NULL;
}
};

node*top=NULL;
void push(int d)
{
    node*ptr=new node(d);
    ptr->next=top;
    top=ptr;
}
int pop()
{
    if(top==NULL)
        cout<<"stack is overflow\n";
    int d=top->data;
    top=top->next;
    return d;
}
void show()
{
    node*ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{

   push(12);
   push(11);
    push(4);
     push(2);
     cout<<pop()<<endl;
    show();

}

