#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,load=0,max_load=0,diff=0;
    cin>>n;
    cout<<"enter the job for indivdual\n";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        load+=arr[i];
    }
    if(load%n!=0)
    {
        //not make equal
        cout<<"-1\n";
        return 0;
    }
    load=load/n;
    //making equal
    for(i=0;i<n;i++)
    {
        diff+=arr[i]-load;
        int ans=max(diff,-diff);
        max_load=max(max_load,ans);
    }
    cout<<"max load "<<max_load;




}
