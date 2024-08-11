#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
node*frontt=NULL;
node*backk=NULL;
void push(int d)
{
 if(frontt==NULL && backk==NULL)
 {
  node*newnode=new node(d);
  backk=newnode;
  frontt=newnode;
  return;
 }
  node*newnode=new node(d);
  backk->next=newnode;
  backk=newnode;

}
void show()
{
    node*ptr=frontt;
    while(ptr->next!=NULL)
    {

        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int pop()
{
   if(frontt==NULL)
        return 0;
   int d=frontt->data;
   frontt=frontt->next;
   return d;
}

int main()
{
push(1);
push(2);
push(3);
push(4);
push(5);
push(6);
show();
cout<<endl<<"pop element is :"<<pop()<<endl;
show();
}
