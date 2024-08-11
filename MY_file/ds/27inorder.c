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
void inorder(node*root)
{
    if(root!=NULL)
    {

        inorder(root->left);
          printf("%d ",root->data);
        inorder(root->right);

    }
}
int main()
{
    node *p=creatingnode(4);
    node*p1=creatingnode(1);
    node*p2=creatingnode(6);
    node*p3=creatingnode(5);
    node*p4=creatingnode(2);
    //linking the node
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   //traversing
   inorder(p);


   return 0;


}


