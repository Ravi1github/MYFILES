#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*left;
    struct node*right;
}node;
//creating node
node* createnode(int val)
{
    node*n;
    n=(node*)malloc(sizeof(node));
      n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(node*root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node*root )
{
   if(root!=NULL)
   {
       postorder(root->left);
       postorder(root->right);
       printf("%d ",root->data);
   }
}
int main()
{  /*
    //creasting root node
   node*p;
    p=(node*)malloc(sizeof(node));
     p->data=2;
    p->left=NULL;
    p->right=NULL;
   //node
     node*p1;
    p1=(node*)malloc(sizeof(node));
    p1->left=NULL;
    p1->right=NULL;

   //node
     node*p2;
    p2=(node*)malloc(sizeof(node));
    p2->left=NULL;
    p2->right=NULL;
  //linking the node
    p->left=p1;
    p->right=p2;
*/
  //or

     node*p=createnode(4);
     node*p1=createnode(1);
    node*p2=createnode(6);
   node*p3=createnode(5);
   node*p4=createnode(2);

    //linking the node
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    // preorder traversing
    //root->left subtree->right subtree

    //postorder traversing
    //left subtree->right subtree->root

    // inorder traversing
    //left-root-right

  //preorder traversin
  preorder(p);

    //postorder traversing
    postorder(p);



}
