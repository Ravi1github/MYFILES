#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;

    node(int d)
    {
        data=d;
        node*left=NULL;
        node*right=NULL;
    }
};



node* insertbst(node*root,int d)
{
    if(root==NULL)
        {
           return new node(d);
        }

        if(d<=root->data)
            root->left=insertbst(root->left,d);

        else{
            root->right=insertbst(root->right,d);
        }
        return root;

}




  node*build()
  {
      int d;
      cout<<"enter the data to add\n";
      cin>>d;
      node*root=NULL;
      while(d!=-1)
      {
          root=insertbst(root,d);

          cout<<"enter the data to add\n";
         cin>>d;
      }
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


//delete
node* deletenode(node*root,int data)
{
    if(root==NULL)
        return NULL;

    if(data<root->data)
    {
        root->left=deletenode(root->left,data);
        return root;
    }
    else if(data==root->data)
    {
        // 1. node with 0 child

     if(root->left==NULL &&root->right==NULL)
     {
         delete root;
         return NULL;
     }

     //2. node with 1 child
     else if(root->left!=NULL &&root->right==NULL)
     {
        node*temp=root->left;
     delete root;
     return temp;
     }
     if(root->left==NULL &&root->right!=NULL)
     {
         node*temp=root->right;
         delete root;
         return temp;

     }

    }


    else
    {
           root->right=deletenode(root->right,data);
           return root;
    }


}
//check bst
bool isbst(node*root,int minn= INT_MIN,int maxx =INT_MAX)
{
    if(root==NULL)
        return true;

    if(root->data>=minn &&root->data<=maxx && isbst(root->left,minn,root->data) &&isbst(root->right,root->data,maxx))
    {
         return true;
    }
    else
        return false;

}


int main()
{

  node*root=build();

  inorder(root);
  //delete
  root=deletenode(root,12);
//check bst
int t=isbst(root);

}
