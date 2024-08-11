#include<iostream>
#include<algorithm>
using namespace std;

int makechange(int coins[],int n,int money)
{ //count
    int c=0;
    while(money>0)
    {
        //gives the index of just  lower than money
        int index=upper_bound(coins,coins+n,money) -1-coins;
        cout<<coins[index]<<"+";
        money=money-coins[index];
        c++;
    }
    cout<<endl;
    return c;
}


int main()
{
    int money,coins[]={1,2,5,10,20,50,100};
    int n=sizeof(coins)/sizeof(int);

    cout<<"enter the change of money\n";
    cin>>money;

    cout<<"minimum no .of coins "<<makechange(coins,n,money);
}
