#include<iostream>
#include<vector>
using namespace std;
 void print(vector<int> v)
 {
     for(auto x:v)
        cout<<x<<" ";
 }
void buildMaxheap(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        int index=i;
        int parent=index/2;

        while(index>0 && v[i]>v[parent])
        {
            swap(v[i],v[parent]);
            index=parent;
            parent=parent/2;
        }
    }
}

 //                      // starting index and size
 void heapify(vector<int> &v,int index,int n)
    {
        int left=2*index;
        int right=2*index+1;

        int minindex=index;
        int last=n-1;
        //comparing the  L and R child
        if(left<=last && v[index]<v[left])
            minindex=left;

        if(right<=last && v[minindex]<v[right])
            minindex=right;

            //swaping with minvalue if minindex changes
            if(minindex!=index)
            {
                swap(v[index],v[minindex]);
                  heapify(v,minindex,n);

            }


    }





void heapsort(vector<int> &v1)
{
   buildMaxheap(v1);
   int n=v1.size();
   while(n>0)
   {
       swap(v1[0],v1[n-1]);
       n--;
       //heapify the remaing element
       heapify(v1,0,n);
   }

}


int main()
{
    vector<int> v,v2;
    v={10,20,5,6,1,8,9,4};
    buildMaxheap(v);
    cout<<"max heap is : ";
    print(v);
    //heapsort
    v2={4,3,8,6,1,5,13,7};
    //isme thoda galti hai
    heapsort(v2);
    cout<<"\nafter heapsort : ";
    print(v2);

}
