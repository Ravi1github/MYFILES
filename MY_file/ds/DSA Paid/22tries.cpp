#include<iostream>
#include<map>
using namespace std;
class node
{
public:
    char data;
    map<char,node*> children;
    bool terminal ;

    node(int d)
    {
        data=d;
        terminal=false;
    }

};
//trie class perform insert find operation
//ques =insert list of string check it presence
class trie
{
public:
    node*root;
    int cnt;
    trie()
    {
        root=new node('\0');
        cnt=0;
    }


    //insert
void insertt(char*w)
{
    node*temp=root;
    for(int i=0;w[i]!='\0';i++)
    {
        char ch=w[i];
        //to check wheter key is present
        if(temp->children.count(ch))
        {
            temp=temp->children[ch];
        }
        else{

            node*n=new node(ch);
            temp->children[ch]=n;
            temp=n;
        }
    }
    temp->terminal=true;

}



//find

bool findd(char*w)
{

    node*temp=root;
    for(int i=0;w[i]!='\0';i++)
    {
        char ch=w[i];
        if(temp->children.count(ch)==0)
        {
            return false;
        }

        else
        {
            temp=temp->children[ch];
        }
    }
    if(temp->terminal==true)
        return true;
    else
        return false;
}


};



int main()
{
   char words[][20]={"aaa","ravi","rsm","rakesh","hello"};
   trie t;


   int i;
   for(i=0;i<5;i++)
   {
       t.insertt(words[i]);
   }
   char w[20];
   cout<<"enter the string to search in trie\n";
   cin>>w;
  int d= t.findd(w);
  if(d)
  {
      cout<<"present\n";
  }
  else cout<<"not present\n";

}
