#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
class car{
public:
    string cname;
    int x,y;
    car(string name,int a,int b)
    {
       cname=name;
       x=a;
       y=b;
    }

    double dist()
  {
        return sqrt(x*x+y*y);
  }


};
bool compare(car A,car B)
{
    int da=A.dist();
    int db=B.dist();
    if(da==db)
    {     //on the basis of lenth
         return A.cname.length()<B.cname.length();
    }
    return da<db;
}
int main()
{

int n,i,x,y;
string carname;
cin>>n;
vector <car> v;
cout<<"enter carname and coordinate\n";
for(i=0;i<n;i++)
{
  cin>>carname>>x>>y;
  car temp(carname,x,y);
  v.push_back(temp);

}
//sort
sort(v.begin(),v.end(),compare);
cout<<"distance  of car in sorted order:\n";
for(auto p:v)
    cout<<"car : "<<p.cname<<" is at a distace :"<<p.dist()<<" and at a location : "<<p.x<<","<<p.y<<endl;


}

