#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};
 node* buildnode()
 {
    cout<<"enter the data\n";
    int d;
    cin>>d;
    //-1 represent no node
    if(d==-1)
    {
        return NULL;
    }
    node*root= new node(d);
    cout<<"enter the left node for "<<d<<endl;
    root->left=buildnode();
    cout<<"enter the right node for "<<d<<endl;
    root->right=buildnode();
    return root;
 }
 void inorder(node*root)
 {
     if(root!=NULL)
     {
         inorder(root->left);
         cout<<root->data<<" ";
         inorder(root->right);
     }

 }
  int height(node*root)
{
   int x,y;
    if(root!=NULL)
    {
        x=height(root->left)+1;
        y=height(root->right)+1;
        if(x>y)
            return  x;
        else
            return y
            ;
    }

    else
        return 0;
}

 void kth_levelorder(node*root,int k)
 {
    if(root==NULL)
        return;
    if(k==1)
        {
            cout<<root->data<<" ";
            return;
        }
      kth_levelorder(root->left,k-1);
      kth_levelorder(root->right,k-1);
      return;


 }
 //by using bfs approach
 void level_order(node*root)
 {
   queue<node*>q;
   q.push(root);
   while(!q.empty())
   {
       node*f=q.front();
       cout<<f->data<<" ";
       q.pop();


       if(f->left!=NULL)
        q.push(f->left);

        if(f->right!=NULL)
            q.push(f->right);

   }
   cout<<endl;

 }
int diameter(node*root)
{
    if(root==NULL)
        return 0;

    int h1=height(root->left);
    int h2=height(root->right);
    //when dia.passes through root
    int op1=h1+h2;
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));

}
//build balanced tree from an array
node* buildbalancedTree(int a[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    //creating node for mid
    node*root=new node(a[mid]);
    root->left=buildbalancedTree(a,s,mid-1);
    root->right=buildbalancedTree(a,mid+1,e);
    return root;

}
node* treeIn_preorder(int in[],int pre[],int s,int e)
{
    static int i=0;
    if(s>e)
    {
        return NULL;
    }
    //taking element from pre
    node*root=new node(pre[i]);
    //searching on in to divide them L and R
    int index=-1;
    //getting index
    for(int j=s;j<=e;j++)
    {
        if(pre[i]==in[j])
        {
            index=j;
            break;
        }
    }
    i++;
    root->left=treeIn_preorder(in,pre,s,index-1);
    root->right=treeIn_preorder(in,pre,index+1,e);

    return root;

}
//lowest common ancesstor
node*LCA(node*root,int a,int b)
{
    if(root==NULL)
        return NULL;

    else if((root->data==a )|| (root->data==b))
        return root;

    //search left and right subtree
    node*leftans=LCA(root->left,a,b);
    node*righttans=LCA(root->right,a,b);
    if(leftans!=NULL &&righttans!=NULL)
        return root;

    if(leftans!=NULL)
        return leftans;

    if(righttans!=NULL)
        return righttans;


}

int main()
{
  node*root=buildnode();
  inorder(root);
   //print all level
  cout<<endl;
  cout<<endl<<"height is : "<<height(root)<<endl;
  level_order(root);
  //level order  printing 2 level
  kth_levelorder(root,2);
  cout<<endl;
//diameter of root
cout<<"diameter of root "<<diameter(root)<<endl;
//create balanced tree from arr
int arr[]={1,2,3,4,5,6,7,8};
node*root1=buildbalancedTree(arr,0,7);
cout<<"printing balaced tree: ";
inorder(root1);
cout<<endl;
//create tree from inoder and preorder
//we get only unique tree
int in[]={3,2,8,4,1,6,7,5};
int pre[]={1,2,3,4,8,5,6,7};
node*root2=treeIn_preorder(in,pre,0,7);
level_order(root2);
cout<<endl;

//lowest common ancestor
cout<<"lca of 2 and 4 is : "<<LCA(root,2,4)->data<<endl;





}
