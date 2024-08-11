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
node*inorderpre(node*root)
{ //left root me aye hai
    root=root->left;
    //right root ke leaf root me pauchna
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;


}

  node* deletenode(node*root,int val)
  {
      node*pre;
      if(root==NULL)
      {
          return NULL;
      }
      //leaf node hai
      if(root->left==NULL&&root->right==NULL)
      {
          free(root);
          return NULL;

      }
      if(root->data<val)
      {
       root->left=  deletenode(root->right,val);

      }
      else if(root->data>val)
      {
        root->left=  deletenode(root->left,val);
      }
    //delete the required node
      else if(root->data==val)
      {
          pre=inorderpre(root);
          root->data=pre->data;
        root->left=  deletenode(root->left,pre->data);
      }
      //delete node
      return root;
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
   printf("enter the value to delete\n");
   scanf("%d",&val);
   deletenode(p,val);
   inorder(p);
}
