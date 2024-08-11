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

  //refernce is used to reflect the change in head or we can return the head
    void insertAtHead(node* &head,int d)
    {
       if(head==NULL)
       {
           head=new node(d);
           return;
       }

       node*n=new node(d);
       n->next=head;
       head=n;
    }

    //print
    void print(node*head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<"\n";
    }
    void insertLast(node* &head,int d)
     {
       node*temp=head;
       if(head==NULL)
       {
           insertAtHead(head,d);
           return;
       }
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       node*n=new node(d);
       temp->next=n;
     }
     void insertnode(node* &head,int d,int pos)
     {
         if(pos==1)
         {
           insertAtHead(head,d);
           return;
         }
         int n=1;
         node*temp=head;
         while(n!=pos-1)
         {
             temp=temp->next;
             n++;
         }
         node*newnode=new node(d);
         newnode->next=temp->next;
         temp->next=newnode;

     }
     void deletehead(node* &head)
     {
         if(head==NULL)
            return;
         else
         {
            node*temp=head->next;
            delete head;
            head=temp;
         }
     }

     void deletelast(node* &head)
     {
         if(head==NULL)
            return;
             node*n=head;
             node*temp=head->next;
             while(temp->next!= NULL)
             {
                temp=temp->next;
                n=n->next;
             }
             n->next=temp->next;


     }
  void deletenode(node* &head,int pos)
  {
      if(pos==1)
      {
          deletehead(head);
          return;
      }
       int c=1;
         node*n=head;
             node*temp=head->next;
             while(c!=pos-1)
             {
                temp=temp->next;
                n=n->next;
                c++;
             }
             n->next=temp->next;

  }

int main()
{
  node*head=NULL;
  insertAtHead(head,3);
  insertAtHead(head,2);
  insertAtHead(head,1);
  print(head);
  //insertlast
  insertLast(head,22);
  print(head);
  //insertatanyPosition
  cout<<"enter the position to add node \n";
  int pos;
  cin>>pos;
  insertnode(head,123,pos);
  print(head);
//deltefirst
  deletehead(head);
  print(head);
  //deltelast
deletelast(head);
  print(head);
  cout<<"enter the position to delete node \n";
  cin>>pos;
  deletenode(head,pos);
  print(head);

}
