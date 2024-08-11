#include<iostream>
#include<queue>
#include<string>
using namespace std;

class person{

public:
    string name;
    int age;
    person(){};
    person(string n,int a)
    {
        name=n;
        age=a;
    }



};

class personcompare
{
public:
    bool operator()(person A,person B)
    {
        //compare age
        return A.age<B.age;
    }
};

int main()
{                                         //priority
    priority_queue <person,vector<person>, personcompare> pq;

    int i,n,age;
    string name;
    cout<<"enter the no.of person\n";
    cin>>n;
   cout<<"enter name and age\n";
    for(i=0;i<n;i++)
    {
        cin>>name>>age;
        person p(name,age);
        pq.push(p);
    }
    //selecting to 3 person on basis of ages

    for(i=0;i<3;i++)
    {
        person x=pq.top();
        cout<<x.name<<" "<<x.age<<endl;
        pq.pop();
    }

}
