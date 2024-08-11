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
int search(node*root,int val)
{
    if(root==NULL)
        return 0;
   else if(root->data==val)
        return root;
    else if (root->data>val)
         return search(root->left,val);
    else if(root->data<val)
        return search(root->right,val);
}

int main()
{
   int val;
    node *p=creatingnode(5);
    node*p1=creatingnode(3);
    node*p2=creatingnode(6);
    node*p3=creatingnode(1);
    node*p4=creatingnode(4);

    //linking the node
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;

   printf("enter the value to search in bst\n");
   scanf("%d",&val);
    int d= search(p,val);
    printf("the element found at postion %d\n",d);
    return 0;
}
