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

int countnode(node*root)
{  int x,y;
    if(root!=NULL)
    {
        x=countnode(root->left);
        y=countnode(root->right);
        return x+y+1;
    }
    else
        return 0;
}
int sum(node*root)
{
    int x,y;
    if(root!=NULL)
    {
        x=sum(root->left);
        y=sum(root->right);
        return x + y + root->data;
    }
    else
        return 0;
}
int height(node*root)
{
   int x,y;
    if(root!=NULL)
    {
        x=height(root->left);
        y=height(root->right);
        if(x>y)
            return  x+1;
        else
            return y+1;
    }
    else
        return 0;
}
int leaf(node*root)
{
   int x,y;
    if(root!=NULL)
    {
        x=height(root->left);
        y=height(root->right);
        if(root->left==NULL&&root->right==NULL)
            return x+ y+1;
        else
            return x+y;
    }
    else
        return 0;
}
int internalnode(node*root)
{
   int x,y ;
    if(root!=NULL)
    {
        x=internalnode(root->left);
        y=internalnode(root->right);
        if(root->left!=NULL||root->right!=NULL)
            return x+y+1;
        else
            return x+y;
    }
    else
        return 0;
}

int onechild(node*root)
{
   int x,y;
    if(root!=NULL)
    {
        x=onechild(root->left);
        y=onechild(root->right);
        if((root->left!=NULL&&root->right==NULL)||(root->left==NULL&&root->right!=NULL))
            return x+y+1;
        else
            return x+y;
    }
    else
        return 0;
}

int main()
{
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
   //traversing
   inorder(p);
   printf("\n");

   //counting node
   int c=countnode(p);
   printf("total node is %d\n",c);
   //sum of node
   int s=sum(p);
   printf("sum of all node is %d\n",s);
   //height of node
   printf(" height is %d\n",height(p));
   //counting leaf node
   printf("leaf node is %d\n",leaf(p));
   //counting internal node
     printf("internal node is %d\n",internalnode(p));
     //counting node having only one child
     printf("node having only one child is %d\n",onechild(p));


   return 0;


}


