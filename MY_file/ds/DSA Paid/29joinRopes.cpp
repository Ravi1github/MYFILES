#include<iostream>
#include<queue>
using namespace std;

int joinropes(int ropes[],int n)
{
    //making minimum priorty queue
    priority_queue<int ,vector<int>,greater<int>> pq(ropes,ropes+n);
      int cost=0;
    while(pq.size()>1)
    {

        int a=pq.top();
        pq.pop();

        int b=pq.top();
        pq.pop();


        int newrope=a+b;
        cost+=newrope;

        //pushing new ropes on queue
        pq.push(newrope);

    }
    return cost;

}


int main()
{
    //join all the ropes to form single ropes so that cost is min. and  cost of joining two ropes is a+b;
    int ropes[]={4,3,2,6};
    cout<<"minimum cost is "<<joinropes(ropes,4)<<endl;
}
