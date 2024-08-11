#include<iostream>
using namespace std;
class shop
{
private:

    int itemid[100];
    int itemprice[100];
    int counter;
public:


    void initcounter()
    {
        counter=0;
    }
    void setprice()
    {
        cout<<"enter  id and price of your item "<<counter+1<<" ";
        cin>>itemid[counter]>>itemprice[counter];
        counter++;

    }
    void displayprice()
    {
        for(int i=0;i<counter;i++)
        {
            cout<<"id name is "<<itemid[i]<<" and price is "<<itemprice[i]<<endl;
        }
    }
};
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

}
