#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,2,3,3,7,7,7,8,8,9};
    int n=10;
    // return 1 or 0
    int present=binary_search(arr,arr+n,8);
    cout<<present<<endl;

//to find index at lower bound return the index
   auto it=lower_bound(arr,arr+n,7);
   cout<<it-arr<<" ";

// to find index at upper bound return the index
   auto a=upper_bound(arr,arr+n,7);
   cout<<a-arr<<endl;
//find occurance
cout<<a-it;

}
