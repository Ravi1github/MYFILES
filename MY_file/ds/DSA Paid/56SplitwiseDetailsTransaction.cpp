#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

class personCompare{
public:
    bool operator()(pair<string,int>p1,pair<string,int>p2)
    {
        //sorting based on amount
        return p1.second<p2.second;
    }



};


int main()
{
    int no_of_transaction,friends,i;
    cin>>no_of_transaction>>friends;

    map<string,int>net;
    cout<<"enter the donor and recieve and amount\n";
    while(no_of_transaction--)
    {
        string x,y;
        int amount;
        cin>>x>>y>>amount;
      //the key is not present
      if(net.count(x)==0)
      {
          net[x]=0;
      }

      if(net.count(y)==0)
      {
          net[y]=0;
      }

      net[x]-=amount;
      net[y]+=amount;

    }

    //add all person in multiset
    multiset<pair<string,int>,personCompare> m;
    for(auto p:net)
    {
        string person=p.first;
        int amount=p.second;

        m.insert(make_pair(person,amount));
    }
    //settlement

    int cnt=0;

    while(!m.empty())
    {
        auto low=m.begin();
        string debit_person=low->first;
        int debit=low->second;

        auto high=prev(m.end());
        string credit_person=high->first;
        int credit=high->second;

        //pop out
        m.erase(low);
        m.erase(high);
        //settlement amount

        int settlement_amount=min(-debit,credit);
        cnt++;
    cout<<debit_person<<" will pay "<<settlement_amount<<" amount to "<<credit_person<<endl;

        credit-=settlement_amount;
        debit+=settlement_amount;

        if(credit!=0)
        {
          m.insert(make_pair(credit_person,credit));
        }
        if(debit!=0)
        {
         m.insert(make_pair(debit_person,debit));
        }


    }

    cout<<"no. of transaction occured : "<<cnt;

}

