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
    node *root=creatingnode(5);
    root->left=creatingnode(3);
    root->right=creatingnode(6);
    root->left->left=creatingnode(1);
    root->left->right =creatingnode(4);
     root->right->right=creatingnode(12);
    inorder(root);

   return 0;


}


