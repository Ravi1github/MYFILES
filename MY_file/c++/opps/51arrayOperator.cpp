#include<iostream>
using namespace std;

class Marks{

int subj[3];

public:
    Marks(int s1,int s2, int s3)
    {
        subj[0]=s1;
        subj[1]=s2;
        subj[2]=s3;
    }
    //array operator
    int operator[](int index)
    {
        return subj[index];
    }

};
int main()
{

    Marks m1(23,55,21);
    cout<<m1[0]<<" "<<m1[2]<<endl;
}
