#include<stdio.h>
typedef struct node
{
    int data;
    struct node*left;
    struct node*right;
}node;

node* creatingnode(int val)
{
    node*p=(node*)malloc(sizeof(node));
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    return p;

}
void insert(node*root,int val)
{   node*prev=NULL;
  node*ptr=root;
    while(ptr!=NULL)
    {     //yeh hamesha val wale node se piche hoga one step
        prev=ptr;
        if(ptr->data==val)
        {
            printf("insertion is not possible it is already present in bst\n");
            return;
        }
        else if(ptr->data<val)
        {
            ptr=ptr->right;
        }
        else if(ptr->data>val)
        {
            ptr=ptr->left;
        }
    }
    if(prev->data>val)
    {
       node*neww=creatingnode(val);
       prev->left=neww;
       return;
    }
    else
    {
        node*ptr=creatingnode(val);
       prev->right=ptr;
       return;

    }

}
void inorder(node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    return;
}
int main()
{
   int val;
    node *p=creatingnode(5);
    node*p1=creatingnode(3);
    node*p2=creatingnode(10);
    node*p3=creatingnode(1);
    node*p4=creatingnode(4);

    //linking the node
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;

   printf("enter the value to insert  in bst\n");
   scanf("%d",&val);
   insert(p,val);
   inorder(p);

    return 0;
}

