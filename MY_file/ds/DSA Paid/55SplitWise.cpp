#include<iostream>
#include<set>
using namespace std;
int main()
{
    int no_of_transaction,friends,i;
    cin>>no_of_transaction>>friends;
    int net[10000]={0};
    cout<<"enter the donor and recieve and amount\n";
    while(no_of_transaction--)
    {
        int x,y,amount;
        cin>>x>>y>>amount;
        net[x]-=amount;//x gives money to y
        net[y]+=amount;
    }

    multiset<int>m;
    //adding on multiset
    for(i=0;i<friends;i++)
    {
        m.insert(net[i]);
    }
    int cnt=0;
    //pop out two person from L and R and try to settle down;
    while(!m.empty())
    {
        auto low=m.begin(); //pointer to first person
        auto high=prev(m.end());  //getting last person

        int debit=*low;
        int credit=*high;
        //erase
        m.erase(low);
        m.erase(high);

        //settlement
        int settlement_amount=min(-debit,credit);
        cnt++;

        //settlement from donor to acceptor

        debit+=settlement_amount;
        credit-=settlement_amount;
        //if not become zero
        if(debit!=0)
        {
            m.insert(debit);
        }
        if(credit!=0)
        {
            m.insert(credit);
        }

    }

    cout<<"no.of transaction : "<<cnt<<endl;




}
