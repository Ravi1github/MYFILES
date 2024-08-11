#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class graph
{
public:
  int v;
  vector<vector<int>>edgelist;
  int*parent;
  int*rankk;

  graph(int n)
  {
      v=n;
        parent=new int[n];
        rankk=new int[n];
        for(int i=0;i<n;i++)
        {
            parent[i]=-1;
            rankk[i]=1;
        }
  }

  void addedge(int w,int x,int y)
  {
    edgelist.push_back({w,x,y});
  }


   int findset(int i)
    {
        if(parent[i]=-1)
            return i;

        return parent[i]=findset(parent[i]);
    }

    void unionset(int x,int y)
    {
        int s1=findset(x);
        int s2=findset(y);

        if(s1!=s2)
        {
            if(rankk[s1]<rankk[s2])
            {
                parent[s1]=s2;
                rankk[s2]+=rankk[s1];
            }
            else
            {
             parent[s1]=s2;
                rankk[s2]+=rankk[s1];
            }

        }
    }



  int kruskal_mst()
  {
      //sorting based on weight
     sort(edgelist.begin(),edgelist.end());
     int mst=0;


     for(auto edge:edgelist)
     {
        int w=edge[0];
        int x=edge[1];
        int y=edge[2];
        //checking that not form cycle
        if(findset(x)!=findset(y))
        {
            unionset(x,y);
            mst+=w;
        }

     }
     return mst;


  }



};


int main()
{
    graph g(4);

    g.addedge(0,1,1);
    g.addedge(1,3,3);
    g.addedge(3,2,4);
    g.addedge(2,0,2);
    g.addedge(0,3,2);
    g.addedge(1,2,2);

   cout<<"mst of graph is : "<<g.kruskal_mst()<<endl;
}
