#include<iostream>
#include<queue>
#include<string>
using namespace std;
class fun
{
public:

    //operator overlooading
    void operator()(string s)
    {
        cout<<"having fun with "<<s<<endl;
    }

};
int main()
{
   fun f;//constructor class
   f("c++");   //overloaded operator look like function call where f is object so it is a functor

}
