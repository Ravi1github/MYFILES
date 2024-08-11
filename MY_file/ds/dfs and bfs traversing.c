#include<stdio.h>

 #include<stdlib.h>
typedef struct node
{
    int data;
    struct node*link;
}node;

node*f=NULL;
   node*r=NULL;//making global

void enqueue(int val)
{
    node*n=(node*)malloc(sizeof(node));
    if(n==NULL)
    {
        printf("queue is full\n");
    }
    else if(f==NULL&&r==NULL)
    {
        f=r=n;
        n->data=val;
        n->link=NULL;
    }


        else
        {    n->data=val;
             n->link=NULL;
            r->link=n;
            r=n;  //rear move karna hai
        }


}
 int dequeue()
{
    int val;
    node*ptr=f;
    if(f==NULL)
    {
        printf("queue is empty\n");
        return -1;
    }
    else
    {  val=f->data;
        f=f->link;
        free(ptr);
         return val;
    }

}
 int isempty()
 {
     node*ptr=f;
    if(f==NULL)
    {

        return 1;
    }
    else return 0;
 }
  void show(node*f)
{
    node*ptr=f;
    printf("\n");
    while(ptr!=NULL)
    {
        printf(" element is %d \n",ptr->data);
        ptr=ptr->link;
    }
}

void bfs(int g[][7],int start,int n)
{
   int j;
   int visited[7]={0};
   printf("%d ",start);
   visited[start]=1;
   enqueue(start);
   while(!isempty())
   {
      start=dequeue();
      for(j=1;j<n;j++)
      {
         if(g[start][j]!=0 && visited[j]==0)
         {
             printf("%d ",j);
             visited[j]=1;
             enqueue(j);
         }
      }
   }
}
 void dfs(int g[][7],int start,int n )
 {
    static int visited[7]={0};
    if(visited[start]==0)
    {
        printf("%d ",start);
        visited[start]=1;
        for(int j=1;j<n;j++)
        {
            if(g[start][j]==1&&visited[j]==0)
                dfs(g,j,n);
        }
    }
 }

int main()
{

    int g[7][7]={ {0,0,0,0,0,0,0},
                  {0,0,1,1,0,0,0},
                  {0,1,0,0,1,0,0},
                  {0,1,0,0,1,0,0},
                  {0,0,1,1,0,1,1},
                  {0,0,0,0,1,0,0},
                  {0,0,0,0,1,0,0},

                  };
   bfs(g,1,7);
   printf("\n");
    dfs(g,1,7);

}
