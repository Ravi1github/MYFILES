#include<stdio.h>
typedef struct node
{
    int data;
    struct node*left;
    struct node*right;
}node;
node*root=NULL;



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

node*insert(node*p,int key)
{   //for parent node
    if(p==NULL)
    {
      node*t=(node*)malloc(sizeof(node));
      t->data=key;
      t->left=NULL;
      t->left=NULL;
      return t;
    }
    if(key<p->data)
        p->left=insert(p->left,key);
    if(key>p->data)
    p->right=insert(p->right,key);
    if(key==p->data)


    return p;


}
int height(node*p)
{
    int x,y;

    if(p!=NULL)
    {
        x=height(p->left);
        y=height(p->right);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
    return 0;
}
node*inpre(node*p)
{
    while(p&&p->right!=NULL)
    p=p->right;
    return p;

}

node*insucc(node*p)
{
    while(p&&p->left!=NULL)
    p=p->left;
    return p;

}

node*del(node*p,int val)
{
    node*pre,*succ;
    if(p==NULL)
        return NULL;
    if(p->left==NULL&&p->right==NULL)
    {
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }
    //finding the element to delete
    if(val<p->data)
        p->left=del(p->left,val);

         if(val>p->data)
        p->right=del(p->right,val);
         if(val==p->data)
         {
             //find the height which has more height we delete form that
             if(height(p->left)>height(p->right))
             {
                pre=inpre(p->left);
                p->data=pre->data;
                p->left=del(p->left,pre->data);
            }
            else
            {
                 succ=insucc(p->right);
                p->data=succ->data;
                p->right=del(p->right,succ->data);
            }
         }
        return p;


}
int main()
{

root=insert(root,20);
  insert(root,30);
  insert(root,10);
  insert(root,90);
  del(root,30);
  inorder(root);
}


