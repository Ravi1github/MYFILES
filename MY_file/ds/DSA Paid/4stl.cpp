#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main()
{
int arr[]={534,2,3,1,55,3,23,45,7,34};
int n=10,item,i;
cout<<"enter no to find\n";
cin>>item;
//it return the address of key
  auto it=find(arr,arr+n,item);
  int index=it-arr;
  if(index>=n)
  {

    cout<<"element is not found\n";
  }
  else{
    cout<<"found at index "<<index<<endl;;
  }
//for sorting
//kaha se kaha tak sort karna hai expect last
sort(arr,arr+n);
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
//sort decresing order
sort(arr,arr+n,compare);
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

}

