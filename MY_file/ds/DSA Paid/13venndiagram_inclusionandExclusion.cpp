#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,k;
	cout<<"enter the number to which you want the division\n";
	cin>>n;
	int divisor[]={2,3,5,7,11,13,17,19};
	int subsets=(1<<8);
	    int ans=0;
	for(i=1;i<subsets;i++)
    {
        int denom=1;

        int setbit=__builtin_popcount(i);
        for(j=0;j<8;j++)
        {
            if(i&(1<<j))
            {
                denom=denom*divisor[j];
            }

        }
        if(setbit&1)
        {
          ans+=(n/denom);

        }
        else{
            ans-=(n/denom);
        }
    }
    cout<<ans<<endl;

	return 0;
}

