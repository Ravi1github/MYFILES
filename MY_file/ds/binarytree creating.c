#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node*left;
    struct node*right;
}node;
node*root=NULL;

void insert(int val)
{
       node*ptr=root;
       node*temp,*p;
       if(root==NULL)
    {
        p=(node*)malloc(sizeof(node));
        p->data=val;
        p->left=NULL;
        p->right=NULL;
        root=p;
        return;

    }

    while(ptr!=NULL)
    {  temp=ptr;
        if(val<ptr->data)
        {

            ptr=ptr->left;
        }
          if(val>ptr->data)
          {

              ptr=ptr->right;
          }
        //duplication is not allowed
        if(val==ptr->data)
            return;

    }
    //yaha par ptr null hai aur temp usse phle wale node par hai where we have to insert
        p=(node*)malloc(sizeof(node));
        p->data=val;
        p->left=NULL;
        p->right=NULL;
        //linking the bst
        if(val > temp ->data)
            temp->right=p  ;
            if(val<temp->data)
            temp->left=p;

            return;

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

  insert(20);
  insert(30);
  insert(10);
  insert(90);
  insert(25);
  insert(15);
  inorder(root);
}


