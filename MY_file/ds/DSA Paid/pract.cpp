#include<bits/stdc++.h>
#include<string>
#include<set>
class cmp{
  public:
      bool operator()(int p1,int p2)
      {

          return p1<p2;
      }
};
using namespace std;
int main()
{

set<int ,vector<int>,cmp>s;
    s.insert(14444);
    s.insert(30);
    s.insert(123);


    for(auto x:s)
        cout<<x.first;

    return 0;

}
