#include <iostream>
using namespace std;
int dp[100][100]={0};

// Function for matrix chain multiplication
int matrixChain(int p[], int i, int j)
{
	if (i == j)
	{
		return 0;
	}
	if (dp[i][j] != 0)
	{
		return dp[i][j];
	}
	dp[i][j] = INT_MAX;
	for (int k = i; k < j; k++)
	{
		dp[i][j] = min(dp[i][j], matrixChain(p, i, k)+ matrixChain(p, k + 1, j)+ p[i - 1] * p[k] * p[j]);
	}
	return dp[i][j];
}
int MatrixChainOrder(int* p, int n)
{
	int i = 1, j = n - 1;
	return matrixChain(p, i, j);
}

// Driver Code
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

	cout << "Minimum number of multiplications is "
		<< MatrixChainOrder(arr, n);
}


