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
void inserthead(node* &head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        head->next=head;
        return;
    }
    node*n=new node(d);
    node*ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
   n->next=head;
   ptr->next=n;
   head=n;
}
void print(node*head)
{   node*ptr=head;
    while(ptr->next!=head)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<ptr->data;
    cout<<"\n";
}
void insertlast(node* &head,int d)
{
    if(head==NULL)
    {
        inserthead(head,d);
        return;
    }
    node*ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    node*n=new node(d);
    n->next=head;
    ptr->next=n;

}
void insertnode(node* &head,int pos)
{
    if(pos==1)
    {
        inserthead(head,1211);
        return;
    }
    int n=1;
    node*newnode=new node(1211);
    node*ptr=head;
    while(n!=pos-1)
    {
      ptr=ptr->next;
      n++;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;

}


int main()
{
    node*head=NULL;
    inserthead(head,12);
    inserthead(head,10);
     inserthead(head,1);
    print(head);
    //last
    insertlast(head,112);
    print(head);
    cout<<"enter the pos to add node\n";
    int pos;
    cin>>pos;
    insertnode(head,pos);
     print(head);

}
