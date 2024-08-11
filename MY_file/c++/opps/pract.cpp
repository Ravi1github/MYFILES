#include <bits/stdc++.h>
using namespace std;
#define int long long


bool check(int n){


    for(int i = 2;i*i<=n;i++){
        if(n%i==0) return false;
    }

    return true;


}

int find(int n){


    vector<int> v;

    while(v.size()<2){
        if(check(n)) v.push_back(n);
        n++;
    }

    return v[0]*v[1];

}


signed main() {
 // your code goes here
    int t;
    cin>>t;
    while(t--){

       int n;
       cin>>n;
       if(n==1) n++;

       cout<<find(n)<<endl;

    }

    return 0;
}
