#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,k,c;
    cin>>n;
    int no=n;
    vector<pair<int,int>> factor;
    for(i=2;i<=n;i++)
    {
        c=0;
        if(n>0)
        {
            while(n%i==0)
        {
            n/=i;
            c++;
        }
        }
        if(c>0)
        factor.push_back(make_pair(i,c));

    }
    for(auto x:factor)
        cout<<x.first<< " divides "<<no<<" by "<<x.second<<" times\n";

}

