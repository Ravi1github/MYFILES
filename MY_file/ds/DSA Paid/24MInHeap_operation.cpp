#include<iostream>
#include<vector>
using namespace std;
class heap{
public:
    vector<int>v;
    heap(int initSize=10)
    {
       v.reserve(initSize);
       //taki index 1 se start ho
       v.push_back(-1);
    }

    void heapify(int index)
    {
        int left=2*index;
        int right=2*index+1;

        int minindex=index;
        int last=v.size()-1;
        //comparing the  L and R child
        if(left<=last && v[index]>v[left])
            minindex=left;

        if(right<=last && v[minindex]>v[right])
            minindex=right;

            //swaping with minvalue if minindex changes
            if(minindex!=index)
            {
                swap(v[index],v[minindex]);
                  heapify(minindex);

            }


    }

    void push(int d)
    {
        v.push_back(d);
        int index=v.size()-1;
        int parent=index/2;
        //compairing and keep moving on top
        while(index>1 && v[index]<v[parent])
        {

            swap(v[index],v[parent]);
            index=parent;
            parent=parent/2;

        }
    }
    int top()
    {
        return v[1];
    }
    void pop()
    {

        int last=v.size()-1;
        swap(v[1],v[last]);
        v.pop_back();
        heapify(1);
    }
    int isempty()
    {
        if(v.size()==1)
            return 1;
        return 0;
    }

};

int main()
{
   heap h;
   int n,i,d;
   cout<<"enter the size of heap\n";
   cin>>n;
   cout<<"enter the element\n";

   for(i=0;i<n;i++)
   {
       cin>>d;
       h.push(d);
   }
   while(!h.isempty())
   {

       cout<<h.top()<<" ";
       h.pop();
   }


}
