#include<stdio.h>
typedef struct node
{
    struct node*left;
    struct node*right;
    int data;
    int height;
}node;
int getheight(struct node*n)
{
    if(n==NULL)
        return 0;
     return n->height;
}
 node*createnode(int val)
 {
     node*p=(node*)malloc(sizeof(node));
     p->data=val;
     p->left=NULL;
     p->right=NULL;
     p->height=1;
     return p;
 }
 int get_balance_factor(node*n)
 {
     if(n==NULL)
        return 0;
     return getheight(n->left) - getheight(n->right);
 }
      /*
            y                           x
          /  \                         /  \
         x    t3                     t1     y
        / \                                / \
    t1     t2                             t2  t3

      */
 node*rightrotate(node*y)
 {
     //by left rotation we get
     node*x=y->left;
     node*t2=x->right;
     x->right=y;
     y->left=t2;
     //for height cal
     y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    return x;
 }
 node*leftrotate(node*x)
 {
     //by left rotation we get
     node*y=x->right;
     node*t2=y->left;
     y->left=x;
     x->right=t2;
     //for height cal
     y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    return y;
 }
int main()
{

}
