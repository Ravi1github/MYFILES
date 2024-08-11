#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node*link;
}listt;
/*
  global declare karne ke badd
  hame return karne ke jarurat nhi hai
*/
   listt*first;
   void createnode(int n)
   {
       int i;
       listt *temp;
       first=(listt*)malloc(sizeof(listt));
       if(first==NULL)
       {
           cout<<"not memeory allocate\n";
       }
       else
       {
           cout<<"enter the data to add at first node\n";
           cin>>first->data;
           first->link=NULL;
           temp=first;
       }
       for(i=2;i<=n;i++)
       {
          listt*nwnode=(listt*)malloc(sizeof(listt));
           cout<<"enter the data to add at node\n";
           cin>>nwnode->data;
           nwnode->link=NULL;
           temp->link=nwnode;
           temp = nwnode;
       }

   }
void show()
{
    listt*ptr=first;
    printf("\n\n");
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;;
        ptr=ptr->link;
    }
}
  void addfirst()
{
    listt*ptr=(listt*)malloc(sizeof(listt));
    cin>>ptr->data;
    ptr->link=first;
    first=ptr;

}

void addlast()
{
    cout<<"enter the element to add at last\n";
    listt*ptr=(listt*)malloc(sizeof(listt));
    cin>>ptr->data;
    listt*p=first;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=ptr;
    ptr->link=NULL;

}
   void dellast()
   {
       listt*p=first;
       listt*q=first->link;
       while(q->link!=NULL)
       {
           q=q->link;
           p=p->link;
       }
       p->link=q->link;

   }
   void delfirst()
   {
       first=first->link;

       }
     void add3()
    {  int i=1,k;
       listt*p=(listt*)malloc(sizeof(listt));
        cout<<"enter the at which to node to insert and data add\n";
        cin>>k>>p->data;
        listt*ptr=first;
        if(k==1)
        {
            p->link=first;
            first=p;
        }

        for(i=1;i<k-1;i++){
                ptr=ptr->link;
        }

        p->link=ptr->link;
        ptr->link=p;




    }
    void del3()
    {
        int i=1,n;
        cout<<"enter the postion to delete\n";
        cin>>n;
        listt *p=first;
        listt*q=first->link;
        while(i!=n-1)
        {
            p=p->link;
            q=q->link;
              i++;
           }
       p->link=q->link;

    }
  int main()
{     int n;
      cout<<"enter the no. of node to be inserted\n";
      cin>>n;
      createnode(n);
    printf("traversing the array\n\n");
     show();
     //adding first
     cout<<"enter the element to add at first\n";
     addfirst();
      show();

    //add at last
    addlast();
    cout<<"after adding\n\n";
    show();
    //add at 3node
   add3();
    cout<<"after adding\n\n";
   show();
    //delete first
    cout<<"after deleting first element\n\n";
   delfirst();
      show();
    //del 3node
     del3();
      cout<<"after adding\n\n";
   show();

    //deleting last;
    cout<<"after deleting the last element\n\n";
      dellast();
     show();

}

